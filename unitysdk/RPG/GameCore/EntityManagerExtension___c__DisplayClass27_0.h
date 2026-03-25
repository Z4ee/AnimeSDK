#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CLIENTCREATEUI3DSERVANTMODELENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xA90E610)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA90E600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass27_0_TypeDefinitionIndex = 46584;

	class EntityManagerExtension___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* modelCmpt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateUI3DServantModelEntity_b__0(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS27_0__CLIENTCREATEUI3DSERVANTMODELENTITY_B__0_OFFSET))(this, entity);
		}
	};
}
