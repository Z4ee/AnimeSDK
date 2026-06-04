#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class NPCManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_NPCMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC23EB80)
#define RPG_CLIENT_NPCMANAGER___C__DISPLAYCLASS3_0___CREATESTILLNPC_B__0_OFFSET UNITYSDK_OFFSET(0xC2464B0)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCManager___c__DisplayClass3_0_TypeDefinitionIndex = 56695;

	class NPCManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x10
		::RPG::Client::NPCManager* __4__this; // 0x18
		::RPG::Client::MapNpcDef* npcDef; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateStillNPC_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER___C__DISPLAYCLASS3_0___CREATESTILLNPC_B__0_OFFSET))(this, a1);
		}
	};
}
