#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraModuleAvatarAnimStateData; }
namespace MoleMole { class CameraModuleDirectionData; }

#define MOLEMOLE_CAMERADELAYDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xECE74B0)
#define MOLEMOLE_CAMERADELAYDATA_LERP_OFFSET UNITYSDK_OFFSET(0xECE70D0)
#define MOLEMOLE_CAMERADELAYDATA_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xECE7060)
#define MOLEMOLE_CAMERADELAYDATA_ZERO_OFFSET UNITYSDK_OFFSET(0xECE7010)
#define MOLEMOLE_CAMERADELAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xECE7400)

namespace MoleMole
{
	inline static constexpr unsigned int CameraDelayData_TypeDefinitionIndex = 56306;

	class CameraDelayData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 DELAY_FOLLOW_OFFSET; // 0x10
		::System::Single Delay_FollowRotateCoef; // 0x1C
		::System::Single DELAY_FOLLOW_X_DUMPING; // 0x20
		::System::Single DELAY_FOLLOW_Y_DUMPING; // 0x24
		::System::Single DELAY_FOLLOW_Z_DUMPING; // 0x28
		::System::Single DELAY_FOLLOW_PITCH_DUMPING; // 0x2C
		::System::Single DELAY_FOLLOW_YAW_DUMPING; // 0x30
		::System::Single DELAY_FOLLOW_ROLL_DUMPING; // 0x34
		::MoleMole::CameraModuleDirectionData* DELAY_FOLLOW_MOVEDIRCETION_RADIO; // 0x38
		::MoleMole::CameraModuleAvatarAnimStateData* DELAY_FOLLOW_ANIMSTATE_RADIO; // 0x40
		::System::Single DELAY_HorizontalDamping; // 0x48
		::System::Single DELAY_VerticalDamping; // 0x4C
		::System::Single DELAY_ROTATE_DUMPING; // 0x50
		::System::Single DELAY_ScreenX; // 0x54
		::System::Single DELAY_ScreenY; // 0x58
		::System::Single DELAY_DeadZoneWidth; // 0x5C
		::System::Single DELAY_DeadZoneHeight; // 0x60
		::System::Single DELAY_SoftZoneWidth; // 0x64
		::System::Single DELAY_SoftZoneHeight; // 0x68
		::System::Single DELAY_BiasX; // 0x6C
		::System::Single DELAY_BiasY; // 0x70
		::MoleMole::CameraModuleDirectionData* DELAY_LOOKAT_MOVEDIRCETION_RADIO; // 0x78
		::MoleMole::CameraModuleAvatarAnimStateData* DELAY_LOOKAT_ANIMSTATE_RADIO; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Zero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATA_ZERO_OFFSET))(this);
		}

		static ::MoleMole::CameraDelayData* op_Addition(::MoleMole::CameraDelayData* a, ::MoleMole::CameraDelayData* b)
		{
			return ((::MoleMole::CameraDelayData*(*)(::MoleMole::CameraDelayData*, ::MoleMole::CameraDelayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATA_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MoleMole::CameraDelayData* Lerp(::MoleMole::CameraDelayData* a, ::MoleMole::CameraDelayData* b, ::MoleMole::CameraDelayData*& data, ::System::Single t)
		{
			return ((::MoleMole::CameraDelayData*(*)(::MoleMole::CameraDelayData*, ::MoleMole::CameraDelayData*, ::MoleMole::CameraDelayData*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATA_LERP_OFFSET))(a, b, data, t);
		}

		::System::Void Clone(::MoleMole::CameraDelayData* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CameraDelayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERADELAYDATA_CLONE_OFFSET))(this, target);
		}
	};
}
