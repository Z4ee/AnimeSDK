#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UI_UISTATECTRL_GAMEOBJECTSETACTIVEACTION_METHOD_3_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0xCB03750)
#define RPG_CLIENT_UI_UISTATECTRL_GAMEOBJECTSETACTIVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCB03910)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int GameObjectSetActiveAction_TypeDefinitionIndex = 69132;

	class GameObjectSetActiveAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SetActiveTargets; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SetInActiveTargets; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_GAMEOBJECTSETACTIVEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_D155D4917B3D2C6A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_GAMEOBJECTSETACTIVEACTION_METHOD_3_D155D4917B3D2C6A_OFFSET))(this);
		}
	};
}
