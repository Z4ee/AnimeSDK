#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_LOOKATMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xBE763A0)
#define RPG_CLIENT_LOOKATMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBE763F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtModuleConfig_TypeDefinitionIndex = 65145;

	class LookAtModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
