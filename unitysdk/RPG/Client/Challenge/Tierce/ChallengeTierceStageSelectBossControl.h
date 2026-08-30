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
namespace RPG::Client::Challenge { class ChallengeFocusChangeDetectControl; }
namespace RPG::Client::Challenge { class ChallengeGroupTypeNameControl; }
namespace RPG::Client::Challenge { class ChallengeTargetInfoRowControl; }
namespace RPG::Client::Challenge::Boss { class ChallengeBossGuideTagListControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceChallengeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectStageSwitchVfxControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectTabsControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetListControl; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace Sofa { class ShortCutHintControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATECHALLENGE_OFFSET UNITYSDK_OFFSET(0xCA071F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGEBUFFID_OFFSET UNITYSDK_OFFSET(0xCA07E50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGEISFINAL_OFFSET UNITYSDK_OFFSET(0xCA07AB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0xCA07F60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGERESULT_OFFSET UNITYSDK_OFFSET(0xCA07C40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGE_OFFSET UNITYSDK_OFFSET(0xCA08180)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATECHALLENGE_OFFSET UNITYSDK_OFFSET(0xCA07230)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGEBUFFID_OFFSET UNITYSDK_OFFSET(0xCA07E90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGEISFINAL_OFFSET UNITYSDK_OFFSET(0xCA07AF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0xCA07FA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGERESULT_OFFSET UNITYSDK_OFFSET(0xCA07C80)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGE_OFFSET UNITYSDK_OFFSET(0xCA081C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA0B3C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCA08E40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCA08D50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__49_0_OFFSET UNITYSDK_OFFSET(0xCA0B4C0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectBossControl_TypeDefinitionIndex = 80219;

	class ChallengeTierceStageSelectBossControl : public ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectControlBase
	{
	public:
		::RPG::Client::MonoPrefabSwitcher* _Switcher; // 0x40
		::System::String* _StateTierce; // 0x48
		::RPG::Client::LocalizedText* _TextSubtitle; // 0x50
		::RPG::Client::TextID _TextIDSubtitle; // 0x58
		::RPG::Client::AnimatorButton* _BtnClose; // 0x68
		::RPG::Client::AnimatorButton* _BtnRoleDetail; // 0x70
		::RPG::Client::AnimatorButton* _BtnConfirm; // 0x78
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsControl* _Tabs; // 0x80
		::RPG::Client::Challenge::ChallengeFocusChangeDetectControl* _FocusChangeDetect; // 0x88
		::RPG::Client::Challenge::ChallengeGroupTypeNameControl* _GroupType; // 0x90
		::RPG::Client::LocalizedText* _TextGroupName; // 0x98
		::RPG::Client::LocalizedText* _TextIndexInGroup; // 0xA0
		::RPG::Client::LocalizedText* _TextDesc; // 0xA8
		::RPG::Client::Challenge::ChallengeTargetInfoRowControl* _PassTarget; // 0xB0
		::RPG::Client::LocalizedText* _TextPassTarget; // 0xB8
		::RPG::Client::TextID _TextIDPassTarget; // 0xC0
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetListControl* _TargetList; // 0xD0
		::RPG::Client::LocalizedText* _TextStageName; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _NodesFinal; // 0xE0
		::UnityEngine::RectTransform* _NodeNotFinal; // 0xE8
		::RPG::Client::LocalizedText* _TextResult; // 0xF0
		::RPG::Client::TextID _TextIDNoResult; // 0xF8
		::RPG::Client::TextID _TextIDResult; // 0x108
		::RPG::Client::AnimatorButton* _BtnEdit; // 0x118
		::RPG::Client::AnimatorButton* _BtnBuff; // 0x120
		::RPG::Client::Challenge::ChallengeAvatarLineupSlotsControl* _AvatarLineupSlots; // 0x128
		::RPG::Client::MonoPrefabSwitcher* _SwitcherBuff; // 0x130
		::System::String* _StateHasBuff; // 0x138
		::System::String* _StateNoBuff; // 0x140
		::UnityEngine::UI::Image* _IconBuff; // 0x148
		::RPG::Client::AnimatorButton* _BtnBoss; // 0x150
		::RPG::Client::AnimatorButton* _BtnGuide; // 0x158
		::RPG::Client::LocalizedText* _TextBossLevel; // 0x160
		::RPG::Client::PrefabLoadMeta* _PrefabDamageType; // 0x168
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl* _ListDamageType; // 0x170
		::RPG::Client::Challenge::Boss::ChallengeBossGuideTagListControl* _BossTagList; // 0x178
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectStageSwitchVfxControl* _StageSwitchVfx; // 0x180
		::RPG::UINavigation::UINavigationZone* _Zone; // 0x188
		::Sofa::ShortCutHintControl* _ShortCutHint; // 0x190
		::UnityEngine::RectTransform* _RebuildLayout; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel* get_PrivateChallenge()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATECHALLENGE_OFFSET))(this);
		}

		::System::Void set_PrivateChallenge(::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATECHALLENGE_OFFSET))(this, a1);
		}

		::System::Boolean get_PrivateStageIsFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGEISFINAL_OFFSET))(this);
		}

		::System::Void set_PrivateStageIsFinal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGEISFINAL_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_PrivateStageResult()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGERESULT_OFFSET))(this);
		}

		::System::Void set_PrivateStageResult(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGERESULT_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> get_PrivateStageBuffID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGEBUFFID_OFFSET))(this);
		}

		::System::Void set_PrivateStageBuffID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGEBUFFID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>* get_PrivateStageRecommendDamageTypes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET))(this);
		}

		::System::Void set_PrivateStageRecommendDamageTypes(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* get_PrivateStage()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_GET_PRIVATESTAGE_OFFSET))(this);
		}

		::System::Void set_PrivateStage(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL_SET_PRIVATESTAGE_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::GameObject* _set_PrivateStageRecommendDamageTypes_b__49_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__49_0_OFFSET))(this);
		}
	};
}
