#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1462;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDBUTTON_OFFSET UNITYSDK_OFFSET(0xDEBA5D0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDCOUNT_OFFSET UNITYSDK_OFFSET(0xDEBBCA0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDICON_OFFSET UNITYSDK_OFFSET(0xDEBAA80)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xDEBA530)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDNAMEPANEL_OFFSET UNITYSDK_OFFSET(0xDEBDC30)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRARITY_OFFSET UNITYSDK_OFFSET(0xDEBB5F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRECYCLELABELS_OFFSET UNITYSDK_OFFSET(0xDEBD580)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDREDDOT_OFFSET UNITYSDK_OFFSET(0xDEBE0B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDSTATUSMARKS_OFFSET UNITYSDK_OFFSET(0xDEBC120)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xDEBE600)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__STATUSPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0xDEBE320)

namespace RPG::Client::RewardItem
{
	inline static constexpr unsigned int RewardItemControl_TypeDefinitionIndex = 79133;

	class RewardItemControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1462*>
	{
	public:
		::RPG::Client::AnimatorButton* _RootButton; // 0x70
		::UnityEngine::UI::Image* _IconImage; // 0x78
		::UnityEngine::RectTransform* _AvatarPanel; // 0x80
		::UnityEngine::UI::Image* _AvatarIconImage; // 0x88
		::UnityEngine::RectTransform* _BgPanel; // 0x90
		::UnityEngine::UI::Image* _RarityFrameImage; // 0x98
		::UnityEngine::UI::Image* _RarityStarImage; // 0xA0
		::UnityEngine::RectTransform* _NumPanel; // 0xA8
		::RPG::Client::LocalizedText* _CountText; // 0xB0
		::UnityEngine::RectTransform* _StatusPanel; // 0xB8
		::UnityEngine::RectTransform* _GetMark; // 0xC0
		::UnityEngine::RectTransform* _ExtraRewardMark; // 0xC8
		::UnityEngine::RectTransform* _BlackMask; // 0xD0
		::UnityEngine::UI::Image* _ItemTypeIcon; // 0xD8
		::UnityEngine::RectTransform* _LockMarkCenter; // 0xE0
		::UnityEngine::RectTransform* _LockMark; // 0xE8
		::UnityEngine::RectTransform* _TimeLimitMark; // 0xF0
		::UnityEngine::RectTransform* _InvalidatedLabel; // 0xF8
		::UnityEngine::RectTransform* _TimeOutLabel; // 0x100
		::UnityEngine::RectTransform* _NamePanel; // 0x108
		::RPG::Client::LocalizedText* _NameText; // 0x110
		::UnityEngine::RectTransform* _HighLightPanel; // 0x118
		::UnityEngine::Transform* _RedDotRoot; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindButton(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDBUTTON_OFFSET))(this, a1);
		}

		::System::Void _BindIcon(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDICON_OFFSET))(this, a1);
		}

		::System::Void _BindRarity(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRARITY_OFFSET))(this, a1);
		}

		::System::Void _BindCount(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDCOUNT_OFFSET))(this, a1);
		}

		::System::Void _BindStatusMarks(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDSTATUSMARKS_OFFSET))(this, a1);
		}

		static ::R3::Observable_1<::System::Boolean>* _StatusPanelVisible(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__STATUSPANELVISIBLE_OFFSET))(a1);
		}

		::System::Void _BindRecycleLabels(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRECYCLELABELS_OFFSET))(this, a1);
		}

		::System::Void _BindNamePanel(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDNAMEPANEL_OFFSET))(this, a1);
		}

		::System::Void _BindRedDot(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1462*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDREDDOT_OFFSET))(this, a1);
		}
	};
}
