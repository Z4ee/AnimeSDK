#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameLevelDiceCombatNPCConfig; }

#define RPG_GAMECORE_GAMELEVELDICECOMBATCONFIGCOLLECTION_METHOD_2_3E4D3FA2267EE669_OFFSET UNITYSDK_OFFSET(0x172388C0)
#define RPG_GAMECORE_GAMELEVELDICECOMBATCONFIGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17240A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelDiceCombatConfigCollection_TypeDefinitionIndex = 15977;

	class GameLevelDiceCombatConfigCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameLevelDiceCombatNPCConfig*>* NPCConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELDICECOMBATCONFIGCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3E4D3FA2267EE669(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelDiceCombatConfigCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelDiceCombatConfigCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELDICECOMBATCONFIGCOLLECTION_METHOD_2_3E4D3FA2267EE669_OFFSET))(a1, a2);
		}
	};
}
