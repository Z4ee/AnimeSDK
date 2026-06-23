#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172157D0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_0__PLAYGETCOINANIM_B__3_OFFSET UNITYSDK_OFFSET(0x172157E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass49_0_TypeDefinitionIndex = 47529;

	class UIHollowMainBottomWidgetController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainBottomWidgetController* __4__this; // 0x10
		::System::Int32 itemid; // 0x18
		::System::Boolean add; // 0x1C
		::System::Int32 count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGetCoinAnim_b__3(::System::Action* doneCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_0__PLAYGETCOINANIM_B__3_OFFSET))(this, doneCb);
		}
	};
}
