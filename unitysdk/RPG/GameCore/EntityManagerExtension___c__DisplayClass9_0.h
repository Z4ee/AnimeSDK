#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS9_0__CLIENTCREATEMAPNPCMONSTER_B__0_OFFSET UNITYSDK_OFFSET(0xA90F5A0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA90F590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass9_0_TypeDefinitionIndex = 46590;

	class EntityManagerExtension___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::MapNpcDef* npcDef; // 0x10
		::RPG::GameCore::EntityManager* pManager; // 0x18
		::RPG::GameCore::GameEntity* pEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateMapNPCMonster_b__0(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS9_0__CLIENTCREATEMAPNPCMONSTER_B__0_OFFSET))(this, entity);
		}
	};
}
