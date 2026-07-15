#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueControl; }
namespace System { class Action; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A774A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__ONLIMAONEWSSUBMITISSUE_B__0_OFFSET UNITYSDK_OFFSET(0x1A774AF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__ONLIMAONEWSSUBMITISSUE_B__1_OFFSET UNITYSDK_OFFSET(0x1A774D40)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueControl___c__DisplayClass4_0_TypeDefinitionIndex = 75484;

	class LimaoNewsIssueControl___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsIssueControl* __4__this; // 0x18
		::RPG::Client::RPGAnimationEvent* animationEvent; // 0x20
		::System::UInt32 blockID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsSubmitIssue_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__ONLIMAONEWSSUBMITISSUE_B__0_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsSubmitIssue_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__ONLIMAONEWSSUBMITISSUE_B__1_OFFSET))(this);
		}
	};
}
