#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS29_0__CLIENTCREATEUI3DSERVANTMODELENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x11554340)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11537E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass29_0_TypeDefinitionIndex = 57931;

	class EntityManagerExtension___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* modelCmpt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateUI3DServantModelEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS29_0__CLIENTCREATEUI3DSERVANTMODELENTITY_B__0_OFFSET))(this, a1);
		}
	};
}
