#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CLIENTCREATESTORYPROPENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xE60BE50)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE5EF360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass27_0_TypeDefinitionIndex = 57930;

	class EntityManagerExtension___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Int32 artPrefabIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateStoryPropEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CLIENTCREATESTORYPROPENTITY_B__0_OFFSET))(this, a1);
		}
	};
}
