#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A94960)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL___C__DISPLAYCLASS3_0___PLAYFADEINANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x9A94C70)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsCommentWithReplyControl___c__DisplayClass3_0_TypeDefinitionIndex = 60974;

	class LimaoNewsCommentWithReplyControl___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* animationName; // 0x10
		::RPG::Client::RPGAnimationEvent* animationEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayFadeInAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL___C__DISPLAYCLASS3_0___PLAYFADEINANIMATION_B__0_OFFSET))(this);
		}
	};
}
