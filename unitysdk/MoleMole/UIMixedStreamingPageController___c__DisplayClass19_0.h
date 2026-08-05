#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMixedStreamingPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151650C0)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS19_0___PLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x151650D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController___c__DisplayClass19_0_TypeDefinitionIndex = 62857;

	class UIMixedStreamingPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::MoleMole::UIMixedStreamingPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS19_0___PLAYANIM_B__0_OFFSET))(this);
		}
	};
}
