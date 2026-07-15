#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"

namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeLineup; }
namespace RPG::Client { class ChallengeStatisticRecommendLineupData; }
namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA1D0C0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_CHALLENGEGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1AA1D170)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1AA1D180)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1AA1CCC0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_LINEUPS_OFFSET UNITYSDK_OFFSET(0x1AA1D190)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AA1C860)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET__RECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1AA1D1A0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AA1CFB0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1C8B0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__FINDDESIRECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AA1C9A0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__INITLINEUPS_OFFSET UNITYSDK_OFFSET(0x1AA1CD20)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengeTeamBlock_TypeDefinitionIndex = 60472;

	class MessageContentChallengeTeamBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		// static const ::System::UInt32 MAX_LINEUP_COUNT = 0x3; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeLineup*>* _Lineups_k__BackingField; // 0x28
		::RPG::Client::ChallengeStatisticRecommendLineupData* __RecommendLineupData_k__BackingField; // 0x30
		::System::UInt32 _ChallengeID_k__BackingField; // 0x38
		::RPG::GameCore::ChallengeGroupType _ChallengeGroupType_k__BackingField; // 0x3C

		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_REFRESH_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeData* _FindDesireChallenge(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__FINDDESIRECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _InitLineups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__INITLINEUPS_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType get_ChallengeGroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_CHALLENGEGROUPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeLineup*>* get_Lineups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeLineup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_LINEUPS_OFFSET))(this);
		}

		::RPG::Client::ChallengeStatisticRecommendLineupData* get__RecommendLineupData()
		{
			return ((::RPG::Client::ChallengeStatisticRecommendLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET__RECOMMENDLINEUPDATA_OFFSET))(this);
		}
	};
}
