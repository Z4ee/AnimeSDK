#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FISHFREECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7ADF0)

namespace MoleMole
{
	inline static constexpr unsigned int FishFreeCameraConfig_TypeDefinitionIndex = 82141;

	class FishFreeCameraConfig : public ::System::Object
	{
	public:
		::MoleMole::FishCameraConfig DefaultSetting; // 0x10
		::System::Single MinPatch; // 0x38
		::System::Single MaxPatch; // 0x3C
		::System::Single MinYaw; // 0x40
		::System::Single MaxYaw; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHFREECAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
