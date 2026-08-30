#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS206_0__ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0x17014380)
#define RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS206_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17010460)

namespace RPG::Client
{
	inline static constexpr unsigned int UIController___c__DisplayClass206_0_TypeDefinitionIndex = 72955;

	class UIController___c__DisplayClass206_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIController* __4__this; // 0x10
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS206_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadPrefab_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS206_0__ASYNCLOADPREFAB_B__0_OFFSET))(this, a1);
		}
	};
}
