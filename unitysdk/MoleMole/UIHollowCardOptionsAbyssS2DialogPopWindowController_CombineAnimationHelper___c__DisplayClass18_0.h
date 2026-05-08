#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace DG::Tweening { class Tweener; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS18_0__CREATECOMPLETIONTASK_B__0_OFFSET UNITYSDK_OFFSET(0x1582A320)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS18_0__CREATECOMPLETIONTASK_B__1_OFFSET UNITYSDK_OFFSET(0x1582A370)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1582A310)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper___c__DisplayClass18_0_TypeDefinitionIndex = 51113;

	class UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken token; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* tcs; // 0x18
		::DG::Tweening::Tweener* tweener; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateCompletionTask_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS18_0__CREATECOMPLETIONTASK_B__0_OFFSET))(this);
		}

		::System::Void _CreateCompletionTask_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS18_0__CREATECOMPLETIONTASK_B__1_OFFSET))(this);
		}
	};
}
