#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceStageSelectControlBase.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::Challenge { class ChallengeAvatarLineupSlotsControl; }
namespace RPG::Client::Challenge { class ChallengeGroupTypeNameControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceChallengeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectStageSwitchVfxControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectTabsControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetListControl; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace Sofa { class ShortCutHintControl; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1876B120)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATESTAGEISFINAL_OFFSET UNITYSDK_OFFSET(0x1876B490)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x1876B8A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATESTAGERESULT_OFFSET UNITYSDK_OFFSET(0x1876B620)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATESTAGE_OFFSET UNITYSDK_OFFSET(0x1876BAC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1876B160)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATESTAGEISFINAL_OFFSET UNITYSDK_OFFSET(0x1876B4D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x1876B8E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATESTAGERESULT_OFFSET UNITYSDK_OFFSET(0x1876B660)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATESTAGE_OFFSET UNITYSDK_OFFSET(0x1876BB00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1876DA50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1876C020)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1876BFB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__36_0_OFFSET UNITYSDK_OFFSET(0x1876DAA0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectMemoryControl_TypeDefinitionIndex = 76589;

	class ChallengeTierceStageSelectMemoryControl : public ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectControlBase
	{
	public:
		::RPG::Client::AnimatorButton* _BtnClose; // 0x38
		::RPG::Client::AnimatorButton* _BtnRoleDetail; // 0x40
		::RPG::Client::AnimatorButton* _BtnConfirm; // 0x48
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsControl* _Tabs; // 0x50
		::UnityEngine::RectTransform* _CrystalFollowTarget; // 0x58
		::RPG::Client::Challenge::ChallengeGroupTypeNameControl* _GroupType; // 0x60
		::RPG::Client::LocalizedText* _TextName; // 0x68
		::RPG::Client::LocalizedText* _TextDesc; // 0x70
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetListControl* _TargetList; // 0x78
		::RPG::Client::LocalizedText* _TextStageName; // 0x80
		::RPG::Client::LocalizedText* _TextIndex; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _NodesFinal; // 0x90
		::UnityEngine::RectTransform* _NodeNotFinal; // 0x98
		::UnityEngine::RectTransform* _NodePassed; // 0xA0
		::UnityEngine::RectTransform* _NodeNotPassed; // 0xA8
		::RPG::Client::LocalizedText* _TextResult; // 0xB0
		::RPG::Client::TextID _TextIDNoResult; // 0xB8
		::RPG::Client::TextID _TextIDResult; // 0xC8
		::RPG::Client::AnimatorButton* _BtnEdit; // 0xD8
		::RPG::Client::Challenge::ChallengeAvatarLineupSlotsControl* _AvatarLineupSlots; // 0xE0
		::RPG::Client::AnimatorButton* _BtnBoss; // 0xE8
		::RPG::Client::LocalizedText* _TextBossLevel; // 0xF0
		::UnityEngine::UI::Image* _ImageBoss; // 0xF8
		::RPG::Client::PrefabLoadMeta* _PrefabDamageType; // 0x100
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl* _ListDamageType; // 0x108
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectStageSwitchVfxControl* _StageSwitchVfx; // 0x110
		::RPG::UINavigation::UINavigationZone* _Zone; // 0x118
		::Sofa::ShortCutHintControl* _ShortCutHint; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel* get_PrivateChallenge()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATECHALLENGE_OFFSET))(this);
		}

		::System::Void set_PrivateChallenge(::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATECHALLENGE_OFFSET))(this, a1);
		}

		::System::Boolean get_PrivateStageIsFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATESTAGEISFINAL_OFFSET))(this);
		}

		::System::Void set_PrivateStageIsFinal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATESTAGEISFINAL_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_PrivateStageResult()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATESTAGERESULT_OFFSET))(this);
		}

		::System::Void set_PrivateStageResult(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATESTAGERESULT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>* get_PrivateStageRecommendDamageTypes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET))(this);
		}

		::System::Void set_PrivateStageRecommendDamageTypes(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATESTAGERECOMMENDDAMAGETYPES_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* get_PrivateStage()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_GET_PRIVATESTAGE_OFFSET))(this);
		}

		::System::Void set_PrivateStage(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL_SET_PRIVATESTAGE_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::GameObject* _set_PrivateStageRecommendDamageTypes_b__36_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTMEMORYCONTROL__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__36_0_OFFSET))(this);
		}
	};
}
