#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_PROTECTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0x1614E630)
#define RPG_CLIENT_PROTECTMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1614E680)

namespace RPG::Client
{
	inline static constexpr unsigned int ProtectModuleConfig_TypeDefinitionIndex = 66554;

	class ProtectModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single NormalPushRatio; // 0x18
		::System::Single LerpBackSmoothTime; // 0x1C
		::System::Single LerpBackMaxSpeed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROTECTMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROTECTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
