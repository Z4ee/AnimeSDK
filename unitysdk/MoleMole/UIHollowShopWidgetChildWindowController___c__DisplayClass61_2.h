#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FC29DF8FB514794.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowShopWidgetChildWindowController___c__DisplayClass61_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1961A770)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__0_OFFSET UNITYSDK_OFFSET(0x1961A780)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__1_OFFSET UNITYSDK_OFFSET(0x1961AA30)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__2_OFFSET UNITYSDK_OFFSET(0x1961AB60)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__3_OFFSET UNITYSDK_OFFSET(0x1961A870)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c__DisplayClass61_2_TypeDefinitionIndex = 65869;

	class UIHollowShopWidgetChildWindowController___c__DisplayClass61_2 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* tran; // 0x10
		::UnityEngine::Events::UnityAction* __9__3; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::MoleMole::UIHollowShopWidgetChildWindowController___c__DisplayClass61_1* CS___8__locals2; // 0x28
		::UnityEngine::UI::Extension::UIButtonBase* realBtn; // 0x30
		::UnityEngine::UI::Extension::UITabButton* btn; // 0x38
		::Enum_3_0FC29DF8FB514794 currentPos; // 0x40
		::System::Int32 cardIndex; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__CTOR_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__0_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__3_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__1_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__2_OFFSET))(this);
		}
	};
}
