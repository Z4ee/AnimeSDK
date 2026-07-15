#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_BA603A3C0ACC95F7_1;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_METHOD_5_45E10D749EF38FBE_OFFSET UNITYSDK_OFFSET(0x18765D50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_METHOD_5_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x187663E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18766420)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSettleConfirmResultControl_TypeDefinitionIndex = 76585;

	class ChallengeTierceSettleConfirmResultControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* _TextLabel; // 0x18
		::RPG::Client::TextID _TextIDUsedRounds; // 0x20
		::RPG::Client::TextID _TextIDObtainedScore; // 0x30
		::RPG::Client::LocalizedText* _TextNumber; // 0x40
		::UnityEngine::RectTransform* _NodeAnyMemberDead; // 0x48
		::Class_1_BA603A3C0ACC95F7_1* Field_5_5; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_BA603A3C0ACC95F7_1* Method_5_F8B73ECE7F883AC1()
		{
			return ((::Class_1_BA603A3C0ACC95F7_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_METHOD_5_F8B73ECE7F883AC1_OFFSET))(this);
		}

		::System::Void Method_5_45E10D749EF38FBE(::Class_1_BA603A3C0ACC95F7_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BA603A3C0ACC95F7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_METHOD_5_45E10D749EF38FBE_OFFSET))(this, a1);
		}
	};
}
