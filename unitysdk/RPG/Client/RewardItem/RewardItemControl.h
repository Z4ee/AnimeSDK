#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1320;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x17988E80)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDCOUNT_OFFSET UNITYSDK_OFFSET(0x1798A940)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDICON_OFFSET UNITYSDK_OFFSET(0x17989330)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x17988DE0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDNAMEPANEL_OFFSET UNITYSDK_OFFSET(0x1798C9E0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRARITY_OFFSET UNITYSDK_OFFSET(0x1798A0B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRECYCLELABELS_OFFSET UNITYSDK_OFFSET(0x1798C330)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDREDDOT_OFFSET UNITYSDK_OFFSET(0x1798CE60)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDSTATUSMARKS_OFFSET UNITYSDK_OFFSET(0x1798ADC0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1798D3B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__STATUSPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x1798D0D0)

namespace RPG::Client::RewardItem
{
	inline static constexpr unsigned int RewardItemControl_TypeDefinitionIndex = 78662;

	class RewardItemControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1320*>
	{
	public:
		::RPG::Client::AnimatorButton* _RootButton; // 0x58
		::UnityEngine::UI::Image* _IconImage; // 0x60
		::UnityEngine::RectTransform* _AvatarPanel; // 0x68
		::UnityEngine::UI::Image* _AvatarIconImage; // 0x70
		::UnityEngine::RectTransform* _BgPanel; // 0x78
		::UnityEngine::UI::Image* _RarityFrameImage; // 0x80
		::UnityEngine::UI::Image* _RarityStarImage; // 0x88
		::UnityEngine::RectTransform* _NumPanel; // 0x90
		::RPG::Client::LocalizedText* _CountText; // 0x98
		::UnityEngine::RectTransform* _StatusPanel; // 0xA0
		::UnityEngine::RectTransform* _GetMark; // 0xA8
		::UnityEngine::RectTransform* _ExtraRewardMark; // 0xB0
		::UnityEngine::RectTransform* _BlackMask; // 0xB8
		::UnityEngine::UI::Image* _ItemTypeIcon; // 0xC0
		::UnityEngine::RectTransform* _LockMarkCenter; // 0xC8
		::UnityEngine::RectTransform* _LockMark; // 0xD0
		::UnityEngine::RectTransform* _TimeLimitMark; // 0xD8
		::UnityEngine::RectTransform* _InvalidatedLabel; // 0xE0
		::UnityEngine::RectTransform* _TimeOutLabel; // 0xE8
		::UnityEngine::RectTransform* _NamePanel; // 0xF0
		::RPG::Client::LocalizedText* _NameText; // 0xF8
		::UnityEngine::RectTransform* _HighLightPanel; // 0x100
		::UnityEngine::Transform* _RedDotRoot; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindButton(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDBUTTON_OFFSET))(this, a1);
		}

		::System::Void _BindIcon(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDICON_OFFSET))(this, a1);
		}

		::System::Void _BindRarity(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRARITY_OFFSET))(this, a1);
		}

		::System::Void _BindCount(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDCOUNT_OFFSET))(this, a1);
		}

		::System::Void _BindStatusMarks(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDSTATUSMARKS_OFFSET))(this, a1);
		}

		static ::R3::Observable_1<::System::Boolean>* _StatusPanelVisible(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__STATUSPANELVISIBLE_OFFSET))(a1);
		}

		::System::Void _BindRecycleLabels(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRECYCLELABELS_OFFSET))(this, a1);
		}

		::System::Void _BindNamePanel(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDNAMEPANEL_OFFSET))(this, a1);
		}

		::System::Void _BindRedDot(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1320*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDREDDOT_OFFSET))(this, a1);
		}
	};
}
