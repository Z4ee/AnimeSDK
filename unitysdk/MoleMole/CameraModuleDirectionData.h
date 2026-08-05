#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERAMODULEDIRECTIONDATA_LERP_OFFSET UNITYSDK_OFFSET(0x134D4390)
#define MOLEMOLE_CAMERAMODULEDIRECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x134D44B0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleDirectionData_TypeDefinitionIndex = 74085;

	class CameraModuleDirectionData : public ::System::Object
	{
	public:
		::System::Single RATIO_CAMERA_DIRECTION_IDLE; // 0x10
		::System::Single RATIO_CAMERA_DIRECTION_SIDE; // 0x14
		::System::Single RATIO_CAMERA_DIRECTION_FORWARD; // 0x18
		::System::Single RATIO_CAMERA_DIRECTION_BACKWARD; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEDIRECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::MoleMole::CameraModuleDirectionData* Lerp(::MoleMole::CameraModuleDirectionData* a, ::MoleMole::CameraModuleDirectionData* b, ::MoleMole::CameraModuleDirectionData*& data, ::System::Single t)
		{
			return ((::MoleMole::CameraModuleDirectionData*(*)(::MoleMole::CameraModuleDirectionData*, ::MoleMole::CameraModuleDirectionData*, ::MoleMole::CameraModuleDirectionData*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEDIRECTIONDATA_LERP_OFFSET))(a, b, data, t);
		}
	};
}
