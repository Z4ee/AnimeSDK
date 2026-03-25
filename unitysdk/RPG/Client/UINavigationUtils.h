#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/RPG/Client/UINavigationDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_CLIENT_UINAVIGATIONUTILS_BUILDHORIZONTALNAVIGATION_OFFSET UNITYSDK_OFFSET(0xA712080)
#define RPG_CLIENT_UINAVIGATIONUTILS_BUILDVERTICALNAVIGATION_OFFSET UNITYSDK_OFFSET(0xA711CE0)
#define RPG_CLIENT_UINAVIGATIONUTILS_CLICKBUTTONBYKEYINPUT_OFFSET UNITYSDK_OFFSET(0xA712570)
#define RPG_CLIENT_UINAVIGATIONUTILS_CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xA712690)
#define RPG_CLIENT_UINAVIGATIONUTILS_CLICKGAMEOBJECTBYKEYINPUT_OFFSET UNITYSDK_OFFSET(0xA712430)
#define RPG_CLIENT_UINAVIGATIONUTILS_FINDSELECTABLEBYDIRECTION_OFFSET UNITYSDK_OFFSET(0xA712A40)
#define RPG_CLIENT_UINAVIGATIONUTILS_FINDSELECTABLEBYKEYINPUT_OFFSET UNITYSDK_OFFSET(0xA7125E0)
#define RPG_CLIENT_UINAVIGATIONUTILS_GETMOVEDIRECTIONBYKEYINPUT_OFFSET UNITYSDK_OFFSET(0xA7129D0)
#define RPG_CLIENT_UINAVIGATIONUTILS_GETVALIDTARGET_OFFSET UNITYSDK_OFFSET(0xA711C40)
#define RPG_CLIENT_UINAVIGATIONUTILS_SETAUTONAVIGATIONANDOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA711890)

namespace RPG::Client
{
	inline static constexpr unsigned int UINavigationUtils_TypeDefinitionIndex = 59982;

	class UINavigationUtils : public ::System::Object
	{
	public:
		static ::System::Void SetAutoNavigationAndOverride(::UnityEngine::UI::Selectable* btn, ::RPG::Client::UINavigationDirection overrideDirection, ::UnityEngine::UI::Selectable* overrideTarget)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*, ::RPG::Client::UINavigationDirection, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_SETAUTONAVIGATIONANDOVERRIDE_OFFSET))(btn, overrideDirection, overrideTarget);
		}

		static ::UnityEngine::UI::Selectable* GetValidTarget(::UnityEngine::UI::Selectable* target)
		{
			return ((::UnityEngine::UI::Selectable*(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_GETVALIDTARGET_OFFSET))(target);
		}

		static ::System::Void BuildVerticalNavigation(::System::Collections::Generic::IList_1<::UnityEngine::UI::Selectable*>* items)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::UI::Selectable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_BUILDVERTICALNAVIGATION_OFFSET))(items);
		}

		static ::System::Void BuildHorizontalNavigation(::System::Collections::Generic::IList_1<::UnityEngine::UI::Selectable*>* items)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::UI::Selectable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_BUILDHORIZONTALNAVIGATION_OFFSET))(items);
		}

		static ::System::Void ClickGameObjectByKeyInput(::UnityEngine::GameObject* gameObject, ::InControl::Key key)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_CLICKGAMEOBJECTBYKEYINPUT_OFFSET))(gameObject, key);
		}

		static ::System::Void ClickButtonByKeyInput(::UnityEngine::UI::Selectable* btn, ::InControl::Key key)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_CLICKBUTTONBYKEYINPUT_OFFSET))(btn, key);
		}

		static ::System::Void ClickButton(::UnityEngine::UI::Selectable* btn)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_CLICKBUTTON_OFFSET))(btn);
		}

		static ::UnityEngine::UI::Selectable* FindSelectableByKeyInput(::UnityEngine::UI::Selectable* btn, ::InControl::Key key)
		{
			return ((::UnityEngine::UI::Selectable*(*)(::UnityEngine::UI::Selectable*, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_FINDSELECTABLEBYKEYINPUT_OFFSET))(btn, key);
		}

		static ::UnityEngine::EventSystems::MoveDirection GetMoveDirectionByKeyInput(::InControl::Key key)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_GETMOVEDIRECTIONBYKEYINPUT_OFFSET))(key);
		}

		static ::UnityEngine::UI::Selectable* FindSelectableByDirection(::UnityEngine::UI::Selectable* btn, ::UnityEngine::EventSystems::MoveDirection moveDirection)
		{
			return ((::UnityEngine::UI::Selectable*(*)(::UnityEngine::UI::Selectable*, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_FINDSELECTABLEBYDIRECTION_OFFSET))(btn, moveDirection);
		}
	};
}
