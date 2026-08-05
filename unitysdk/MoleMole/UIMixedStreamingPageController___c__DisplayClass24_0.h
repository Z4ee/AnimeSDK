#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMixedStreamingPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC75F0)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS24_0__PLAYBYSHOWSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x19CC7600)

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController___c__DisplayClass24_0_TypeDefinitionIndex = 62855;

	class UIMixedStreamingPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::MoleMole::UIMixedStreamingPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayByShowState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS24_0__PLAYBYSHOWSTATE_B__0_OFFSET))(this);
		}
	};
}
