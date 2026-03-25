#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace RPG::Client { class MatchThreeV2ChallengerInfos; }
namespace RPG::GameCore { class MatchThreeV2ReputationRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9B6BE80)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B6BDE0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BENEFITDESC_OFFSET UNITYSDK_OFFSET(0x9B6BB60)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BENEFITREWARDID_OFFSET UNITYSDK_OFFSET(0x9B6BCC0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BGICONPATH_OFFSET UNITYSDK_OFFSET(0x9B6BC50)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_CHALLENGERS_OFFSET UNITYSDK_OFFSET(0x9B6BD30)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_FGICONPATH_OFFSET UNITYSDK_OFFSET(0x9B6BBE0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_SIGNIFICANCE_OFFSET UNITYSDK_OFFSET(0x9B6BA50)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x9B6BAE0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9B6BA60)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TOTALCHALLENGERCOUNT_OFFSET UNITYSDK_OFFSET(0x9B5ED70)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9B6B9F0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_MARKSEEN_OFFSET UNITYSDK_OFFSET(0x9B6BEF0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6BD40)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ReputationData_TypeDefinitionIndex = 53646;

	class MatchThreeV2ReputationData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::MatchThreeV2ChallengerData*>* _Challengers_k__BackingField; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor(::System::UInt32 reputationRank, ::System::Func_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>* challengerGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Func_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA__CTOR_OFFSET))(this, reputationRank, challengerGetter);
		}

		::RPG::GameCore::MatchThreeV2ReputationRow* get__Row()
		{
			return ((::RPG::GameCore::MatchThreeV2ReputationRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_Significance()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_SIGNIFICANCE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TABNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_BenefitDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BENEFITDESC_OFFSET))(this);
		}

		::System::String* get_FgIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_FGICONPATH_OFFSET))(this);
		}

		::System::String* get_BgIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BGICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_BenefitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BENEFITREWARDID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MatchThreeV2ChallengerData*>* get_Challengers()
		{
			return ((::Il2CppArray<::RPG::Client::MatchThreeV2ChallengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_CHALLENGERS_OFFSET))(this);
		}

		::System::Int32 get_TotalChallengerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TOTALCHALLENGERCOUNT_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2ReputationData* Create(::RPG::GameCore::MatchThreeV2ReputationRow* row, ::RPG::Client::MatchThreeV2ChallengerInfos* challengerInfos)
		{
			return ((::RPG::Client::MatchThreeV2ReputationData*(*)(::RPG::GameCore::MatchThreeV2ReputationRow*, ::RPG::Client::MatchThreeV2ChallengerInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_CREATE_OFFSET))(row, challengerInfos);
		}

		::System::Int32 CompareTo(::RPG::Client::MatchThreeV2ReputationData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_COMPARETO_OFFSET))(this, other);
		}

		::System::Void MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_MARKSEEN_OFFSET))(this);
		}
	};
}
