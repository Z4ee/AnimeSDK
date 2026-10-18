#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL_CREATEFORMANY_OFFSET UNITYSDK_OFFSET(0xC937660)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL_CREATEFORONE_OFFSET UNITYSDK_OFFSET(0xC9373F0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9379F0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL_LISTENFORANYEXPIRED_OFFSET UNITYSDK_OFFSET(0xC937A70)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC9375E0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL__DETECT_OFFSET UNITYSDK_OFFSET(0xC937800)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL__ONPLAYERDAILYREFRESHING_OFFSET UNITYSDK_OFFSET(0xC937B00)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeGroupExpirationDetectViewModel_TypeDefinitionIndex = 81423;

	class ChallengeGroupExpirationDetectViewModel : public ::System::Object
	{
	public:
		::System::Action* _HandlersOnAnyExpired; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::ChallengeGroupData*>* _Groups; // 0x18
		::System::Boolean _IsAnyExpiredAlready; // 0x20

		::System::Void _ctor(::System::Collections::Generic::HashSet_1<::RPG::Client::ChallengeGroupData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::ChallengeGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::Challenge::ChallengeGroupExpirationDetectViewModel* CreateForOne(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::RPG::Client::Challenge::ChallengeGroupExpirationDetectViewModel*(*)(::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL_CREATEFORONE_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::ChallengeGroupExpirationDetectViewModel* CreateForMany(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ChallengeGroupData*>* a1)
		{
			return ((::RPG::Client::Challenge::ChallengeGroupExpirationDetectViewModel*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ChallengeGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL_CREATEFORMANY_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void ListenForAnyExpired(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL_LISTENFORANYEXPIRED_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerDailyRefreshing(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL__ONPLAYERDAILYREFRESHING_OFFSET))(this, a1);
		}

		::System::Void _Detect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL__DETECT_OFFSET))(this);
		}
	};
}
