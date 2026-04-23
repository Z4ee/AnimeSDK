#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATBOSSPERSISTENTTIPSCONFIG_METHOD_2_A2E97E3CD6C1C526_OFFSET UNITYSDK_OFFSET(0x188646D0)
#define RPG_GAMECORE_DICECOMBATBOSSPERSISTENTTIPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188647D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatBossPersistentTipsConfig_TypeDefinitionIndex = 15357;

	class DiceCombatBossPersistentTipsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATBOSSPERSISTENTTIPSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A2E97E3CD6C1C526(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatBossPersistentTipsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatBossPersistentTipsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATBOSSPERSISTENTTIPSCONFIG_METHOD_2_A2E97E3CD6C1C526_OFFSET))(a1, a2);
		}
	};
}
