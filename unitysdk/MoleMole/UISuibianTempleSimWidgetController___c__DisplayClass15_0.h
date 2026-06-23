#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }

#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10890DF0)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER___C__DISPLAYCLASS15_0__PLAYTEMPLEANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x10890E00)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSimWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 74279;

	class UISuibianTempleSimWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* source; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTempleAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER___C__DISPLAYCLASS15_0__PLAYTEMPLEANIMATION_B__0_OFFSET))(this);
		}
	};
}
