#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_FD21020B0878C0A0;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xC9F1420)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_SHOULDSHOWDETAILONCLICK_OFFSET UNITYSDK_OFFSET(0xC9F1710)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_6C21C51DA8DA31AC_OFFSET UNITYSDK_OFFSET(0xC9F1730)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_A725B7DE1C68FB30_OFFSET UNITYSDK_OFFSET(0xC9F1960)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xC9F1460)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0xC9F1A00)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_E2DC32521565C3B5_OFFSET UNITYSDK_OFFSET(0xC9F18F0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xC9F13B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_SHOULDSHOWDETAILONCLICK_OFFSET UNITYSDK_OFFSET(0xC9F1720)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F1B20)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeRewardItemIconLiteControl_TypeDefinitionIndex = 80091;

	class ChallengeRewardItemIconLiteControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_FD21020B0878C0A0* BNKFDFNJLJH; // 0x18
		::RPG::Client::AnimatorButton* _BtnRoot; // 0x20
		::UnityEngine::UI::Image* _IconRarity; // 0x28
		::UnityEngine::RectTransform* _NodeItemNormal; // 0x30
		::UnityEngine::UI::Image* _IconItemNormal; // 0x38
		::UnityEngine::RectTransform* _NodeItemAvatar; // 0x40
		::UnityEngine::UI::Image* _IconItemAvatar; // 0x48
		::UnityEngine::RectTransform* _NodeCount; // 0x50
		::RPG::Client::LocalizedText* _TextCount; // 0x58
		::System::Boolean _ShouldShowDetailOnClick_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_FD21020B0878C0A0* get_RewardItem()
		{
			return ((::Class_1_FD21020B0878C0A0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_REWARDITEM_OFFSET))(this);
		}

		::System::Void set_RewardItem(::Class_1_FD21020B0878C0A0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FD21020B0878C0A0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_REWARDITEM_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldShowDetailOnClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_SHOULDSHOWDETAILONCLICK_OFFSET))(this);
		}

		::System::Void set_ShouldShowDetailOnClick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_SHOULDSHOWDETAILONCLICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_B2C52ACF9D9B435B_OFFSET))(this);
		}

		::System::Void Method_5_6C21C51DA8DA31AC(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_6C21C51DA8DA31AC_OFFSET))(this, a1);
		}

		::System::Void Method_5_E2DC32521565C3B5(::RPG::GameCore::ItemRarity a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_E2DC32521565C3B5_OFFSET))(this, a1);
		}

		::System::Void Method_5_A725B7DE1C68FB30(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_A725B7DE1C68FB30_OFFSET))(this, a1);
		}

		::System::Void Method_5_D20F759FC2EC43FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_D20F759FC2EC43FB_OFFSET))(this);
		}
	};
}
