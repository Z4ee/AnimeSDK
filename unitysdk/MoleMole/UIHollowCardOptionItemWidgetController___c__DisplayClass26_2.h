#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCardOptionItemWidgetController___c__DisplayClass26_0; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_2__CTOR_OFFSET UNITYSDK_OFFSET(0x146908C0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_2__REFRESHVIEW_B__5_OFFSET UNITYSDK_OFFSET(0x146908D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionItemWidgetController___c__DisplayClass26_2_TypeDefinitionIndex = 49015;

	class UIHollowCardOptionItemWidgetController___c__DisplayClass26_2 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MoleMole::UIHollowCardOptionItemWidgetController___c__DisplayClass26_0* CS___8__locals2; // 0x18
		::System::Action* finishCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_2__REFRESHVIEW_B__5_OFFSET))(this);
		}
	};
}
