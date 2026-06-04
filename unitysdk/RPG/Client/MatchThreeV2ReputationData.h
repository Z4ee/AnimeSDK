#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace RPG::Client { class MatchThreeV2ChallengerInfos; }
namespace RPG::GameCore { class MatchThreeV2ReputationRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBFAFD20)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBFAFC50)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BENEFITDESC_OFFSET UNITYSDK_OFFSET(0xBFAF9D0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BENEFITREWARDID_OFFSET UNITYSDK_OFFSET(0xBFAFB30)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_BGICONPATH_OFFSET UNITYSDK_OFFSET(0xBFAFAC0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_CHALLENGERS_OFFSET UNITYSDK_OFFSET(0xBFAFBA0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_FGICONPATH_OFFSET UNITYSDK_OFFSET(0xBFAFA50)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_SIGNIFICANCE_OFFSET UNITYSDK_OFFSET(0xBFAF8C0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0xBFAF950)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBFAF8D0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET_TOTALCHALLENGERCOUNT_OFFSET UNITYSDK_OFFSET(0xBFA1CA0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xBFAF860)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xBFAFD90)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAFBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ReputationData_TypeDefinitionIndex = 61724;

	class MatchThreeV2ReputationData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::MatchThreeV2ChallengerData*>* _Challengers_k__BackingField; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::Func_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Func_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA__CTOR_OFFSET))(this, a1, a2);
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

		static ::RPG::Client::MatchThreeV2ReputationData* Create(::RPG::GameCore::MatchThreeV2ReputationRow* a1, ::RPG::Client::MatchThreeV2ChallengerInfos* a2)
		{
			return ((::RPG::Client::MatchThreeV2ReputationData*(*)(::RPG::GameCore::MatchThreeV2ReputationRow*, ::RPG::Client::MatchThreeV2ChallengerInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::RPG::Client::MatchThreeV2ReputationData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONDATA_MARKSEEN_OFFSET))(this);
		}
	};
}
