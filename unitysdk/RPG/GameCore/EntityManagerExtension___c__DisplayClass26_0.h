#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS26_0__CLIENTCREATESTORYNPCENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xFC01230)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS26_0__CLIENTCREATESTORYNPCENTITY_B__1_OFFSET UNITYSDK_OFFSET(0xFC01470)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS26_0__CLIENTCREATESTORYNPCENTITY_B__2_OFFSET UNITYSDK_OFFSET(0xFC014C0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFBE4810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass26_0_TypeDefinitionIndex = 55205;

	class EntityManagerExtension___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x10
		::Il2CppArray<::System::String*>* overrideReplaceMaterialKeyList; // 0x18
		::RPG::GameCore::EntityManager* pManager; // 0x20
		::RPG::GameCore::StoryCharacterRow* storyCharacterRow; // 0x28
		::System::String* appearancePreset; // 0x30
		::RPG::GameCore::NPCSubType subType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateStoryNPCEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS26_0__CLIENTCREATESTORYNPCENTITY_B__0_OFFSET))(this, a1);
		}

		::System::Void _ClientCreateStoryNPCEntity_b__1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS26_0__CLIENTCREATESTORYNPCENTITY_B__1_OFFSET))(this, a1);
		}

		::System::Void _ClientCreateStoryNPCEntity_b__2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS26_0__CLIENTCREATESTORYNPCENTITY_B__2_OFFSET))(this, a1);
		}
	};
}
