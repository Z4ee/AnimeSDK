#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class Match3ActionBase; }
namespace RPG::GameCore::Match3 { class Match3ConditionBase; }
namespace RPG::GameCore::Match3 { class Match3TriggerBase; }

#define RPG_GAMECORE_MATCH3_MATCH3ENVACTIONCONFIG_METHOD_2_F3AC746DEBE6B7A5_OFFSET UNITYSDK_OFFSET(0x198E9000)
#define RPG_GAMECORE_MATCH3_MATCH3ENVACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198E9140)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3EnvActionConfig_TypeDefinitionIndex = 23562;

	class Match3EnvActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::Match3TriggerBase* Trigger; // 0x10
		::RPG::GameCore::Match3::Match3ConditionBase* Condition; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::Match3ActionBase*>* Actions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ENVACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F3AC746DEBE6B7A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3EnvActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3EnvActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ENVACTIONCONFIG_METHOD_2_F3AC746DEBE6B7A5_OFFSET))(a1, a2);
		}
	};
}
