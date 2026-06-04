#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_INITIALIZEMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xBD38FD0)
#define RPG_CLIENT_INITIALIZEMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBD39020)

namespace RPG::Client
{
	inline static constexpr unsigned int InitializeModuleConfig_TypeDefinitionIndex = 65144;

	class InitializeModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single InitFOV; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INITIALIZEMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INITIALIZEMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
