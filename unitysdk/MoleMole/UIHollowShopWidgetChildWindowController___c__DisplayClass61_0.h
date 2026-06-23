#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowShopWidgetChildWindowController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8CD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c__DisplayClass61_0_TypeDefinitionIndex = 66357;

	class UIHollowShopWidgetChildWindowController___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowShopWidgetChildWindowController* __4__this; // 0x10
		::System::Action_3<::UnityEngine::Transform*, ::System::Int32, ::System::Action*>* callback; // 0x18
		::UnityEngine::UI::Extension::UITabButtonGroup* group; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}
	};
}
