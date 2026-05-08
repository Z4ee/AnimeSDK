#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace DG::Tweening { class Sequence; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157C42F0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS17_0__PLAYCARDMERGEANIM_B__0_OFFSET UNITYSDK_OFFSET(0x157C4300)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS17_0__PLAYCARDMERGEANIM_B__1_OFFSET UNITYSDK_OFFSET(0x157C4330)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper___c__DisplayClass17_0_TypeDefinitionIndex = 51114;

	class UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::DG::Tweening::Sequence* tweenSequence2; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* tsc; // 0x18
		::System::Threading::CancellationToken token; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCardMergeAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS17_0__PLAYCARDMERGEANIM_B__0_OFFSET))(this);
		}

		::System::Void _PlayCardMergeAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER___C__DISPLAYCLASS17_0__PLAYCARDMERGEANIM_B__1_OFFSET))(this);
		}
	};
}
