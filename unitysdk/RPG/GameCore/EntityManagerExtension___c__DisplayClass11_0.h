#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS11_0__CLIENTCREATEMAPNPCMONSTER_B__0_OFFSET UNITYSDK_OFFSET(0xE60BA30)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE5EBD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass11_0_TypeDefinitionIndex = 57928;

	class EntityManagerExtension___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* pEntity; // 0x10
		::RPG::Client::MapNpcDef* npcDef; // 0x18
		::RPG::GameCore::EntityManager* pManager; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateMapNPCMonster_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS11_0__CLIENTCREATEMAPNPCMONSTER_B__0_OFFSET))(this, a1);
		}
	};
}
