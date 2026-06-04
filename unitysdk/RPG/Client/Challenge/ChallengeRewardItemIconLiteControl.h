#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_74AFEC3818196291;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB4C23B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xB4C2140)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_SHOULDSHOWDETAILONCLICK_OFFSET UNITYSDK_OFFSET(0xB4C2390)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_334FBA45D56A6F8F_OFFSET UNITYSDK_OFFSET(0xB4C2410)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xB4C2150)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_A725B7DE1C68FB30_OFFSET UNITYSDK_OFFSET(0xB4C2570)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_B01F5292A1B6EB04_OFFSET UNITYSDK_OFFSET(0xB4C2630)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_E2DC32521565C3B5_OFFSET UNITYSDK_OFFSET(0xB4C2500)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xB4C20D0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_SHOULDSHOWDETAILONCLICK_OFFSET UNITYSDK_OFFSET(0xB4C23A0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C2720)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeRewardItemIconLiteControl_TypeDefinitionIndex = 74076;

	class ChallengeRewardItemIconLiteControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_74AFEC3818196291* Field_5_0; // 0x18
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

		::Class_1_74AFEC3818196291* get_RewardItem()
		{
			return ((::Class_1_74AFEC3818196291*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_REWARDITEM_OFFSET))(this);
		}

		::System::Void set_RewardItem(::Class_1_74AFEC3818196291* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_74AFEC3818196291*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_REWARDITEM_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldShowDetailOnClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_SHOULDSHOWDETAILONCLICK_OFFSET))(this);
		}

		::System::Void set_ShouldShowDetailOnClick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_SHOULDSHOWDETAILONCLICK_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Button_ButtonClickedEvent* get_OnClick()
		{
			return ((::UnityEngine::UI::Button_ButtonClickedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_ONCLICK_OFFSET))(this);
		}

		::System::Void Method_5_9AB55F553C4AC6E8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_9AB55F553C4AC6E8_OFFSET))(this);
		}

		::System::Void Method_5_334FBA45D56A6F8F(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_334FBA45D56A6F8F_OFFSET))(this, a1);
		}

		::System::Void Method_5_E2DC32521565C3B5(::RPG::GameCore::ItemRarity a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_E2DC32521565C3B5_OFFSET))(this, a1);
		}

		::System::Void Method_5_A725B7DE1C68FB30(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_A725B7DE1C68FB30_OFFSET))(this, a1);
		}

		::System::Void Method_5_B01F5292A1B6EB04()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_METHOD_5_B01F5292A1B6EB04_OFFSET))(this);
		}
	};
}
