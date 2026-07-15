#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A767180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL___C__DISPLAYCLASS3_0___PLAYFADEINANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1A7675C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentWithReplyControl___c__DisplayClass3_0_TypeDefinitionIndex = 75453;

	class LimaoNewsCommentWithReplyControl___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::RPGAnimationEvent* animationEvent; // 0x10
		::System::String* animationName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayFadeInAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL___C__DISPLAYCLASS3_0___PLAYFADEINANIMATION_B__0_OFFSET))(this);
		}
	};
}
