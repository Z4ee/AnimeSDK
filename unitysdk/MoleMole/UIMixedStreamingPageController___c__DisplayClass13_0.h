#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMixedStreamingPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17872360)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS13_0___PLAYANIMBYSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x17872370)

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController___c__DisplayClass13_0_TypeDefinitionIndex = 62916;

	class UIMixedStreamingPageController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::MoleMole::UIMixedStreamingPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayAnimByState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS13_0___PLAYANIMBYSTATE_B__0_OFFSET))(this);
		}
	};
}
