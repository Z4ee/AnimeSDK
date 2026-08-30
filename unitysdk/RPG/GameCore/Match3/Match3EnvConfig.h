#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class Match3EnvActionConfig; }

#define RPG_GAMECORE_MATCH3_MATCH3ENVCONFIG_METHOD_2_64AC33E944D0DA13_OFFSET UNITYSDK_OFFSET(0x1D2618F0)
#define RPG_GAMECORE_MATCH3_MATCH3ENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2619E0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3EnvConfig_TypeDefinitionIndex = 24645;

	class Match3EnvConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3EnvActionConfig*>* EnvActionConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ENVCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_64AC33E944D0DA13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3EnvConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3EnvConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ENVCONFIG_METHOD_2_64AC33E944D0DA13_OFFSET))(a1, a2);
		}
	};
}
