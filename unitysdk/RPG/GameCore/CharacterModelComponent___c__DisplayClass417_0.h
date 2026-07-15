#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_CHARACTERMODELCOMPONENT___C__DISPLAYCLASS417_0__CTOR_OFFSET UNITYSDK_OFFSET(0x121A2C30)
#define RPG_GAMECORE_CHARACTERMODELCOMPONENT___C__DISPLAYCLASS417_0__LOADSUBUNITYGO_B__0_OFFSET UNITYSDK_OFFSET(0x121A3E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterModelComponent___c__DisplayClass417_0_TypeDefinitionIndex = 54626;

	class CharacterModelComponent___c__DisplayClass417_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* __4__this; // 0x10
		::System::String* childPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMODELCOMPONENT___C__DISPLAYCLASS417_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadSubUnityGO_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMODELCOMPONENT___C__DISPLAYCLASS417_0__LOADSUBUNITYGO_B__0_OFFSET))(this, a1);
		}
	};
}
