#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameLevelDiceCombatNPCConfig; }

#define RPG_GAMECORE_GAMELEVELDICECOMBATCONFIGCOLLECTION_METHOD_2_C29DF159886207AC_OFFSET UNITYSDK_OFFSET(0x197BFC20)
#define RPG_GAMECORE_GAMELEVELDICECOMBATCONFIGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x197C8A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelDiceCombatConfigCollection_TypeDefinitionIndex = 16534;

	class GameLevelDiceCombatConfigCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameLevelDiceCombatNPCConfig*>* NPCConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELDICECOMBATCONFIGCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C29DF159886207AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelDiceCombatConfigCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelDiceCombatConfigCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELDICECOMBATCONFIGCOLLECTION_METHOD_2_C29DF159886207AC_OFFSET))(a1, a2);
		}
	};
}
