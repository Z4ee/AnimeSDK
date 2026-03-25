#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS25_0__CLIENTCREATESTORYPROPENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xA90E5B0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA90E5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass25_0_TypeDefinitionIndex = 46583;

	class EntityManagerExtension___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 artPrefabIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateStoryPropEntity_b__0(::RPG::GameCore::GameEntity* gameEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS25_0__CLIENTCREATESTORYPROPENTITY_B__0_OFFSET))(this, gameEntity);
		}
	};
}
