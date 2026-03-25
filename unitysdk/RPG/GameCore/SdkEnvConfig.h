#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SDKENVCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1769E330)
#define RPG_GAMECORE_SDKENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1769E550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SdkEnvConfig_TypeDefinitionIndex = 17452;

	class SdkEnvConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PROD_CN_ServerList; // 0x10
		::Il2CppArray<::System::String*>* TEST_CN_ServerList; // 0x18
		::Il2CppArray<::System::String*>* PROD_OVERSEA_ServerList; // 0x20
		::Il2CppArray<::System::String*>* TEST_OVERSEA_ServerList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SDKENVCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SdkEnvConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SdkEnvConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SDKENVCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
