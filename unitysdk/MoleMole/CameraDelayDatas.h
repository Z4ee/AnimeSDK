#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CameraDelayData; }

#define MOLEMOLE_CAMERADELAYDATAS_CLONE_OFFSET UNITYSDK_OFFSET(0x12A1A600)
#define MOLEMOLE_CAMERADELAYDATAS_LERP_OFFSET UNITYSDK_OFFSET(0x12A1A470)
#define MOLEMOLE_CAMERADELAYDATAS_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x12A1A260)
#define MOLEMOLE_CAMERADELAYDATAS_POSTINIT_OFFSET UNITYSDK_OFFSET(0x12A1A430)
#define MOLEMOLE_CAMERADELAYDATAS_ZERO_OFFSET UNITYSDK_OFFSET(0x12A1A160)
#define MOLEMOLE_CAMERADELAYDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x12A1A090)

namespace MoleMole
{
	inline static constexpr unsigned int CameraDelayDatas_TypeDefinitionIndex = 54654;

	class CameraDelayDatas : public ::System::Object
	{
	public:
		::System::Single mFOV; // 0x10
		::System::Single CAM_MINDISRATIO; // 0x14
		::MoleMole::CameraDelayData* mTopCameraDelayData; // 0x18
		::MoleMole::CameraDelayData* mMiddleCameraDelayData; // 0x20
		::MoleMole::CameraDelayData* mBottomCameraDelayData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATAS__CTOR_OFFSET))(this);
		}

		::System::Void Zero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATAS_ZERO_OFFSET))(this);
		}

		static ::MoleMole::CameraDelayDatas* op_Addition(::MoleMole::CameraDelayDatas* a, ::MoleMole::CameraDelayDatas* b)
		{
			return ((::MoleMole::CameraDelayDatas*(*)(::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATAS_OP_ADDITION_OFFSET))(a, b);
		}

		::System::Void PostInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATAS_POSTINIT_OFFSET))(this);
		}

		static ::MoleMole::CameraDelayDatas* Lerp(::MoleMole::CameraDelayDatas* a, ::MoleMole::CameraDelayDatas* b, ::MoleMole::CameraDelayDatas*& data, ::System::Single t)
		{
			return ((::MoleMole::CameraDelayDatas*(*)(::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATAS_LERP_OFFSET))(a, b, data, t);
		}

		::System::Void Clone(::MoleMole::CameraDelayDatas* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CameraDelayDatas*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATAS_CLONE_OFFSET))(this, target);
		}
	};
}
