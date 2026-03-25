#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class NPCManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCMonsterDataRow; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_NPCMANAGER___C__DISPLAYCLASS3_0__CREATENPCMONSTER_B__0_OFFSET UNITYSDK_OFFSET(0x9DF0470)
#define RPG_CLIENT_NPCMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE98D0)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCManager___c__DisplayClass3_0_TypeDefinitionIndex = 49143;

	class NPCManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* adventurePhase; // 0x10
		::RPG::GameCore::NPCMonsterDataRow* npcMonsterRow; // 0x18
		::RPG::Client::NPCManager* __4__this; // 0x20
		::RPG::Client::MapNpcDef* npcDef; // 0x28
		::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateNPCMonster_b__0(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER___C__DISPLAYCLASS3_0__CREATENPCMONSTER_B__0_OFFSET))(this, pEntity);
		}
	};
}
