#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/RPG/Client/UINavigationDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_CLIENT_UINAVIGATIONUTILS_BUILDHORIZONTALNAVIGATION_OFFSET UNITYSDK_OFFSET(0x182EEDE0)
#define RPG_CLIENT_UINAVIGATIONUTILS_BUILDVERTICALNAVIGATION_OFFSET UNITYSDK_OFFSET(0x182EE820)
#define RPG_CLIENT_UINAVIGATIONUTILS_CLICKBUTTONBYKEYINPUT_OFFSET UNITYSDK_OFFSET(0x182EF4F0)
#define RPG_CLIENT_UINAVIGATIONUTILS_CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x182EF610)
#define RPG_CLIENT_UINAVIGATIONUTILS_CLICKGAMEOBJECTBYKEYINPUT_OFFSET UNITYSDK_OFFSET(0x182EF3B0)
#define RPG_CLIENT_UINAVIGATIONUTILS_FINDSELECTABLEBYDIRECTION_OFFSET UNITYSDK_OFFSET(0x182EF9F0)
#define RPG_CLIENT_UINAVIGATIONUTILS_FINDSELECTABLEBYKEYINPUT_OFFSET UNITYSDK_OFFSET(0x182EF560)
#define RPG_CLIENT_UINAVIGATIONUTILS_GETMOVEDIRECTIONBYKEYINPUT_OFFSET UNITYSDK_OFFSET(0x182EF980)
#define RPG_CLIENT_UINAVIGATIONUTILS_GETVALIDTARGET_OFFSET UNITYSDK_OFFSET(0x182EE780)
#define RPG_CLIENT_UINAVIGATIONUTILS_SETAUTONAVIGATIONANDOVERRIDE_OFFSET UNITYSDK_OFFSET(0x182EE1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UINavigationUtils_TypeDefinitionIndex = 69821;

	class UINavigationUtils : public ::System::Object
	{
	public:
		static ::System::Void SetAutoNavigationAndOverride(::UnityEngine::UI::Selectable* a1, ::RPG::Client::UINavigationDirection a2, ::UnityEngine::UI::Selectable* a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*, ::RPG::Client::UINavigationDirection, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_SETAUTONAVIGATIONANDOVERRIDE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::UI::Selectable* GetValidTarget(::UnityEngine::UI::Selectable* a1)
		{
			return ((::UnityEngine::UI::Selectable*(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_GETVALIDTARGET_OFFSET))(a1);
		}

		static ::System::Void BuildVerticalNavigation(::System::Collections::Generic::IList_1<::UnityEngine::UI::Selectable*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::UI::Selectable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_BUILDVERTICALNAVIGATION_OFFSET))(a1);
		}

		static ::System::Void BuildHorizontalNavigation(::System::Collections::Generic::IList_1<::UnityEngine::UI::Selectable*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::UI::Selectable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_BUILDHORIZONTALNAVIGATION_OFFSET))(a1);
		}

		static ::System::Void ClickGameObjectByKeyInput(::UnityEngine::GameObject* a1, ::InControl::Key a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_CLICKGAMEOBJECTBYKEYINPUT_OFFSET))(a1, a2);
		}

		static ::System::Void ClickButtonByKeyInput(::UnityEngine::UI::Selectable* a1, ::InControl::Key a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_CLICKBUTTONBYKEYINPUT_OFFSET))(a1, a2);
		}

		static ::System::Void ClickButton(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_CLICKBUTTON_OFFSET))(a1);
		}

		static ::UnityEngine::UI::Selectable* FindSelectableByKeyInput(::UnityEngine::UI::Selectable* a1, ::InControl::Key a2)
		{
			return ((::UnityEngine::UI::Selectable*(*)(::UnityEngine::UI::Selectable*, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_FINDSELECTABLEBYKEYINPUT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::EventSystems::MoveDirection GetMoveDirectionByKeyInput(::InControl::Key a1)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_GETMOVEDIRECTIONBYKEYINPUT_OFFSET))(a1);
		}

		static ::UnityEngine::UI::Selectable* FindSelectableByDirection(::UnityEngine::UI::Selectable* a1, ::UnityEngine::EventSystems::MoveDirection a2)
		{
			return ((::UnityEngine::UI::Selectable*(*)(::UnityEngine::UI::Selectable*, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINAVIGATIONUTILS_FINDSELECTABLEBYDIRECTION_OFFSET))(a1, a2);
		}
	};
}
