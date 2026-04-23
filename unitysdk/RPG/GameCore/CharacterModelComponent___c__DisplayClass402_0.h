#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_CHARACTERMODELCOMPONENT___C__DISPLAYCLASS402_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5FDD20)
#define RPG_GAMECORE_CHARACTERMODELCOMPONENT___C__DISPLAYCLASS402_0__LOADSUBUNITYGO_B__0_OFFSET UNITYSDK_OFFSET(0xB5FF250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterModelComponent___c__DisplayClass402_0_TypeDefinitionIndex = 52708;

	class CharacterModelComponent___c__DisplayClass402_0 : public ::System::Object
	{
	public:
		::System::String* childPath; // 0x10
		::RPG::GameCore::CharacterModelComponent* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMODELCOMPONENT___C__DISPLAYCLASS402_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadSubUnityGO_b__0(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMODELCOMPONENT___C__DISPLAYCLASS402_0__LOADSUBUNITYGO_B__0_OFFSET))(this, obj);
		}
	};
}
