#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFD250)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__REFRESHINFOTASK_B__0_OFFSET UNITYSDK_OFFSET(0x17BFD260)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController___c__DisplayClass60_0_TypeDefinitionIndex = 41323;

	class UIHollowCardOptionsAbyssS2DialogPopWindowController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* refreshCompletionSource; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInfoTask_b__0(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS60_0__REFRESHINFOTASK_B__0_OFFSET))(this, result);
		}
	};
}
