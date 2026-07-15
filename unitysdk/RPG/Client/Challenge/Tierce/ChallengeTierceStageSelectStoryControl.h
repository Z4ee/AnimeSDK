#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceStageSelectControlBase.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::Challenge { class ChallengeAvatarLineupSlotsControl; }
namespace RPG::Client::Challenge { class ChallengeGroupTypeNameControl; }
namespace RPG::Client::Challenge { class ChallengeTargetInfoRowControl; }
namespace RPG::Client::Challenge::Story { class ChallengeStoryFeverMazeBuffIconGroupControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceChallengeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectStageSwitchVfxControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectTabsControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetListControl; }
namespace RPG::GameCore { class ChallengeStoryThemeConfigRow; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace Sofa { class ShortCutHintControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATECHALLENGEFEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1876DF30)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATECHALLENGETHEME_OFFSET UNITYSDK_OFFSET(0x1876DDF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1876E230)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGEBUFFID_OFFSET UNITYSDK_OFFSET(0x1876EE00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGEISFINAL_OFFSET UNITYSDK_OFFSET(0x1876E960)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x1876EF10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGERESULT_OFFSET UNITYSDK_OFFSET(0x1876EB80)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGE_OFFSET UNITYSDK_OFFSET(0x1876F130)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATECHALLENGEFEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1876DF70)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATECHALLENGETHEME_OFFSET UNITYSDK_OFFSET(0x1876DE30)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1876E270)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGEBUFFID_OFFSET UNITYSDK_OFFSET(0x1876EE40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGEISFINAL_OFFSET UNITYSDK_OFFSET(0x1876E9A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x1876EF50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGERESULT_OFFSET UNITYSDK_OFFSET(0x1876EBC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGE_OFFSET UNITYSDK_OFFSET(0x1876F170)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18771320)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1876F680)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1876F620)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__55_0_OFFSET UNITYSDK_OFFSET(0x18771380)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectStoryControl_TypeDefinitionIndex = 76592;

	class ChallengeTierceStageSelectStoryControl : public ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectControlBase
	{
	public:
		::RPG::Client::AnimatorButton* _BtnClose; // 0x38
		::RPG::Client::AnimatorButton* _BtnRoleDetail; // 0x40
		::RPG::Client::AnimatorButton* _BtnConfirm; // 0x48
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsControl* _Tabs; // 0x50
		::RPG::Client::Challenge::ChallengeGroupTypeNameControl* _GroupType; // 0x58
		::RPG::Client::LocalizedText* _TextName; // 0x60
		::RPG::Client::LocalizedText* _TextDesc; // 0x68
		::UnityEngine::RectTransform* _NodeThemeBgRoot; // 0x70
		::System::String* _ThemeBgName; // 0x78
		::RPG::Client::Challenge::ChallengeTargetInfoRowControl* _PassTarget; // 0x80
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetListControl* _TargetList; // 0x88
		::RPG::Client::LocalizedText* _TextFeverRuleName; // 0x90
		::RPG::Client::LocalizedText* _TextFeverRuleDesc; // 0x98
		::RPG::Client::Challenge::Story::ChallengeStoryFeverMazeBuffIconGroupControl* _FeverMazeBuffs; // 0xA0
		::RPG::Client::LocalizedText* _TextStageName; // 0xA8
		::RPG::Client::LocalizedText* _TextIndex; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _NodesFinal; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _NodesNotFinal; // 0xC0
		::UnityEngine::RectTransform* _NodePassed; // 0xC8
		::UnityEngine::RectTransform* _NodeNotPassed; // 0xD0
		::RPG::Client::LocalizedText* _TextResult; // 0xD8
		::RPG::Client::TextID _TextIDNoResult; // 0xE0
		::RPG::Client::TextID _TextIDResult; // 0xF0
		::RPG::Client::AnimatorButton* _BtnEdit; // 0x100
		::RPG::Client::AnimatorButton* _BtnBuff; // 0x108
		::RPG::Client::Challenge::ChallengeAvatarLineupSlotsControl* _AvatarLineupSlots; // 0x110
		::RPG::Client::MonoPrefabSwitcher* _SwitcherBuff; // 0x118
		::System::String* _StateHasBuff; // 0x120
		::System::String* _StateNoBuff; // 0x128
		::UnityEngine::UI::Image* _IconBuff; // 0x130
		::RPG::Client::AnimatorButton* _BtnBoss; // 0x138
		::RPG::Client::LocalizedText* _TextBossLevel; // 0x140
		::UnityEngine::UI::Image* _ImageBoss; // 0x148
		::RPG::Client::PrefabLoadMeta* _PrefabDamageType; // 0x150
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl* _ListDamageType; // 0x158
		::UnityEngine::Animation* _AnimSwitch; // 0x160
		::System::String* _AnimNameSwitch; // 0x168
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectStageSwitchVfxControl* _StageSwitchVfx; // 0x170
		::RPG::UINavigation::UINavigationZone* _Zone; // 0x178
		::Sofa::ShortCutHintControl* _ShortCutHint; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeStoryThemeConfigRow* get_PrivateChallengeTheme()
		{
			return ((::RPG::GameCore::ChallengeStoryThemeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATECHALLENGETHEME_OFFSET))(this);
		}

		::System::Void set_PrivateChallengeTheme(::RPG::GameCore::ChallengeStoryThemeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeStoryThemeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATECHALLENGETHEME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_PrivateChallengeFeverMazeBuffIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATECHALLENGEFEVERMAZEBUFFIDS_OFFSET))(this);
		}

		::System::Void set_PrivateChallengeFeverMazeBuffIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATECHALLENGEFEVERMAZEBUFFIDS_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel* get_PrivateChallenge()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATECHALLENGE_OFFSET))(this);
		}

		::System::Void set_PrivateChallenge(::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATECHALLENGE_OFFSET))(this, a1);
		}

		::System::Boolean get_PrivateStageIsFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGEISFINAL_OFFSET))(this);
		}

		::System::Void set_PrivateStageIsFinal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGEISFINAL_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_PrivateStageResult()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGERESULT_OFFSET))(this);
		}

		::System::Void set_PrivateStageResult(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGERESULT_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> get_PrivateStageBuffID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGEBUFFID_OFFSET))(this);
		}

		::System::Void set_PrivateStageBuffID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGEBUFFID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>* get_PrivateStageRecommendDamageTypes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET))(this);
		}

		::System::Void set_PrivateStageRecommendDamageTypes(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* get_PrivateStage()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_GET_PRIVATESTAGE_OFFSET))(this);
		}

		::System::Void set_PrivateStage(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL_SET_PRIVATESTAGE_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::GameObject* _set_PrivateStageRecommendDamageTypes_b__55_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__55_0_OFFSET))(this);
		}
	};
}
