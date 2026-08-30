#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS31_0__CLIENTCREATEUI3DMODELENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x115543D0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11538C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass31_0_TypeDefinitionIndex = 57932;

	class EntityManagerExtension___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* modelCmpt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateUI3DModelEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS31_0__CLIENTCREATEUI3DMODELENTITY_B__0_OFFSET))(this, a1);
		}
	};
}
