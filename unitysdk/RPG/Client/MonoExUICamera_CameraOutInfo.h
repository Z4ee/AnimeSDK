#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoExUICamera_E_ExUICameraOut.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOEXUICAMERA_CAMERAOUTINFO_ININNER_OFFSET UNITYSDK_OFFSET(0x18C3D820)
#define RPG_CLIENT_MONOEXUICAMERA_CAMERAOUTINFO_OUTOUTER_OFFSET UNITYSDK_OFFSET(0x18C3DEF0)
#define RPG_CLIENT_MONOEXUICAMERA_CAMERAOUTINFO_RESET_OFFSET UNITYSDK_OFFSET(0x18C3C490)
#define RPG_CLIENT_MONOEXUICAMERA_CAMERAOUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3A210)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICamera_CameraOutInfo_TypeDefinitionIndex = 69659;

	class MonoExUICamera_CameraOutInfo : public ::System::Object
	{
	public:
		::RPG::Client::MonoExUICamera_E_ExUICameraOut _second; // 0x10
		::RPG::Client::MonoExUICamera_E_ExUICameraOut _first; // 0x14
		::System::Single _ratio2; // 0x18
		::System::Single _ratio1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_CAMERAOUTINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean InInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_CAMERAOUTINFO_ININNER_OFFSET))(this);
		}

		::System::Boolean OutOuter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_CAMERAOUTINFO_OUTOUTER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_CAMERAOUTINFO_RESET_OFFSET))(this);
		}
	};
}
