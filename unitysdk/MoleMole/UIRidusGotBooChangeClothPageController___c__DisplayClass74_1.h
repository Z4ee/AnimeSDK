#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRidusGotBooChangeClothPageController___c__DisplayClass74_0; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS74_1__CTOR_OFFSET UNITYSDK_OFFSET(0x156198D0)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS74_1__REFRESHBUDDYRT_B__0_OFFSET UNITYSDK_OFFSET(0x156198E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController___c__DisplayClass74_1_TypeDefinitionIndex = 70902;

	class UIRidusGotBooChangeClothPageController___c__DisplayClass74_1 : public ::System::Object
	{
	public:
		::System::String* type; // 0x10
		::Foundation::AssetPath prefabPath; // 0x18
		::MoleMole::UIRidusGotBooChangeClothPageController___c__DisplayClass74_0* CS___8__locals1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS74_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBuddyRT_b__0(::Foundation::AssetPath path, ::UnityEngine::GameObject* prefabIns)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS74_1__REFRESHBUDDYRT_B__0_OFFSET))(this, path, prefabIns);
		}
	};
}
