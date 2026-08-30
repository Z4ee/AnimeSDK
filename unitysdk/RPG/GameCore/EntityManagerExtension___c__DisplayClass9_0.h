#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS9_0__CLIENTCREATEMAPNPC_B__0_OFFSET UNITYSDK_OFFSET(0xE60C300)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE5EA170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass9_0_TypeDefinitionIndex = 57937;

	class EntityManagerExtension___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::NPCDataRow* npcRow; // 0x10
		::System::String* aiPath; // 0x18
		::RPG::Client::MapNpcDef* npcDef; // 0x20
		::System::Boolean isAIPathEmpty; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateMapNPC_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS9_0__CLIENTCREATEMAPNPC_B__0_OFFSET))(this, a1);
		}
	};
}
