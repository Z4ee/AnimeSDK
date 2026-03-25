#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS8_0__CLIENTCREATEMAPNPC_B__0_OFFSET UNITYSDK_OFFSET(0xA90ED40)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA90ED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass8_0_TypeDefinitionIndex = 46589;

	class EntityManagerExtension___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::NPCDataRow* npcRow; // 0x10
		::System::String* aiPath; // 0x18
		::RPG::Client::MapNpcDef* npcDef; // 0x20
		::System::Boolean isAIPathEmpty; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateMapNPC_b__0(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS8_0__CLIENTCREATEMAPNPC_B__0_OFFSET))(this, pEntity);
		}
	};
}
