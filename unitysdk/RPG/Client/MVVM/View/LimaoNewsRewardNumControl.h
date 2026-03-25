#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL_SETREWARDID_OFFSET UNITYSDK_OFFSET(0x9AA5B50)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA5BA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL__GETREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9AA5AC0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA5A30)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA5970)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA5C10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA5BB0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsRewardNumControl_TypeDefinitionIndex = 60980;

	class LimaoNewsRewardNumControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::UInt32 _RewardID; // 0x30
		::UnityEngine::UI::Text* _Text; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::UInt32 _GetRewardCount(::System::UInt32 rewardID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL__GETREWARDCOUNT_OFFSET))(this, rewardID);
		}

		::System::Void SetRewardID(::System::UInt32 rewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL_SETREWARDID_OFFSET))(this, rewardID);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSREWARDNUMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
