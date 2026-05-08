#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2924E454126F7D2D.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowShopWidgetChildWindowController; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FAC890)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS65_0__OPENINI_B__0_OFFSET UNITYSDK_OFFSET(0x15FAC8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c__DisplayClass65_0_TypeDefinitionIndex = 51852;

	class UIHollowShopWidgetChildWindowController___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* tran; // 0x10
		::MoleMole::UIHollowShopWidgetChildWindowController* __4__this; // 0x18
		::System::Action* callback; // 0x20
		::System::Int32 uid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenIni_b__0(::Enum_3_2924E454126F7D2D type, ::System::Int32 newItemID)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_2924E454126F7D2D, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS65_0__OPENINI_B__0_OFFSET))(this, type, newItemID);
		}
	};
}
