#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CHANGEINFOSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x16974D20)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CHANGEINFOSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x16974E60)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16974D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionItemWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 49016;

	class UIHollowCardOptionItemWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MoleMole::UIHollowCardOptionItemWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeInfoState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CHANGEINFOSTATE_B__0_OFFSET))(this);
		}

		::System::Void _ChangeInfoState_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CHANGEINFOSTATE_B__1_OFFSET))(this);
		}
	};
}
