#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::View { class LimaoNewsIssueControl; }
namespace System { class Action; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A9BAF0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__ONLIMAONEWSSUBMITISSUE_B__0_OFFSET UNITYSDK_OFFSET(0x9A9BC20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__ONLIMAONEWSSUBMITISSUE_B__1_OFFSET UNITYSDK_OFFSET(0x9A9BE40)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueControl___c__DisplayClass4_0_TypeDefinitionIndex = 61005;

	class LimaoNewsIssueControl___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::MVVM::View::LimaoNewsIssueControl* __4__this; // 0x18
		::System::UInt32 blockID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsSubmitIssue_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__ONLIMAONEWSSUBMITISSUE_B__0_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsSubmitIssue_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__DISPLAYCLASS4_0__ONLIMAONEWSSUBMITISSUE_B__1_OFFSET))(this);
		}
	};
}
