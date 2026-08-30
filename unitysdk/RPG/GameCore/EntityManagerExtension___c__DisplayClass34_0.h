#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS34_0__CLIENTCREATEUI3DPETENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xE60BFC0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE5F1B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass34_0_TypeDefinitionIndex = 57933;

	class EntityManagerExtension___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* modelCmpt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateUI3DPetEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS34_0__CLIENTCREATEUI3DPETENTITY_B__0_OFFSET))(this, a1);
		}
	};
}
