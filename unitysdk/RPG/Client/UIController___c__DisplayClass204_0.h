#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS204_0__ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xB3E2470)
#define RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS204_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB3DF050)

namespace RPG::Client
{
	inline static constexpr unsigned int UIController___c__DisplayClass204_0_TypeDefinitionIndex = 67259;

	class UIController___c__DisplayClass204_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x10
		::RPG::Client::UIController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS204_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadPrefab_b__0(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS204_0__ASYNCLOADPREFAB_B__0_OFFSET))(this, gameObject);
		}
	};
}
