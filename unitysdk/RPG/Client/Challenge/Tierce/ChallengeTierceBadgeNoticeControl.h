#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_96EDC22AC7BC5724;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_METHOD_5_088CB5C8A993BEE6_OFFSET UNITYSDK_OFFSET(0x1AC65280)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_METHOD_5_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1AC651E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_METHOD_5_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x1AC65220)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC65770)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceBadgeNoticeControl_TypeDefinitionIndex = 76557;

	class ChallengeTierceBadgeNoticeControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_96EDC22AC7BC5724* Field_5_0; // 0x18
		::RPG::Client::AnimatorButton* _BtnClose; // 0x20
		::RPG::Client::LocalizedText* _TextGroupName; // 0x28
		::RPG::Client::PrefabLoadMeta* _BadgePrefabLoadMeta; // 0x30
		::System::Int32 _BadgeMemoryPrefabIndex; // 0x38
		::System::Int32 _BadgeStoryPrefabIndex; // 0x3C
		::System::Int32 _BadgeBossPrefabIndex; // 0x40
		::RPG::Client::LocalizedText* _TextNormalStarAchievedCount; // 0x48
		::RPG::Client::LocalizedText* _TextNormalStarTotalCount; // 0x50
		::RPG::Client::LocalizedText* _TextSpecialStarAchievedCount; // 0x58
		::RPG::Client::LocalizedText* _TextSpecialStarTotalCount; // 0x60
		::RPG::Client::LocalizedText* _TextExpireDate; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_96EDC22AC7BC5724* Method_5_F8B73ECE7F883AC1()
		{
			return ((::Class_1_96EDC22AC7BC5724*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_METHOD_5_F8B73ECE7F883AC1_OFFSET))(this);
		}

		::System::Void Method_5_F8D1399F1CCCBB77(::Class_1_96EDC22AC7BC5724* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_96EDC22AC7BC5724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_METHOD_5_F8D1399F1CCCBB77_OFFSET))(this, a1);
		}

		::System::Void Method_5_088CB5C8A993BEE6(::Class_1_96EDC22AC7BC5724* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_96EDC22AC7BC5724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_METHOD_5_088CB5C8A993BEE6_OFFSET))(this, a1);
		}
	};
}
