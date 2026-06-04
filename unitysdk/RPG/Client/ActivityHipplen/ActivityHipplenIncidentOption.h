#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentSettlementParam; }
namespace RPG::GameCore { class HipplenIncidentCommitOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomSettlementConfig; }
namespace RPG::GameCore { class HipplenIncidentSettlementConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATECOMMITOPTION_OFFSET UNITYSDK_OFFSET(0xB0D0E80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATERANDOMOPTION_OFFSET UNITYSDK_OFFSET(0xB0D0FE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATESETTLEMENTPARAM_OFFSET UNITYSDK_OFFSET(0xB0D10B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0xB0D0E00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_ISRANDOM_OFFSET UNITYSDK_OFFSET(0xB0D0DE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_ISSUCC_OFFSET UNITYSDK_OFFSET(0xB0D0E60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_RATIOLIST_OFFSET UNITYSDK_OFFSET(0xB0D0E40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_SETTLEMENTID_OFFSET UNITYSDK_OFFSET(0xB0D0DC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_WEIGHTLIST_OFFSET UNITYSDK_OFFSET(0xB0D0E20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_DIALOGID_OFFSET UNITYSDK_OFFSET(0xB0D0E10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_ISRANDOM_OFFSET UNITYSDK_OFFSET(0xB0D0DF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_ISSUCC_OFFSET UNITYSDK_OFFSET(0xB0D0E70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_RATIOLIST_OFFSET UNITYSDK_OFFSET(0xB0D0E50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_WEIGHTLIST_OFFSET UNITYSDK_OFFSET(0xB0D0E30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D0FD0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentOption_TypeDefinitionIndex = 70418;

	class ActivityHipplenIncidentOption : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RatioList_k__BackingField; // 0x10
		::RPG::GameCore::HipplenIncidentSettlementConfig* _Settlement; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _WeightList_k__BackingField; // 0x20
		::System::Boolean _IsSucc_k__BackingField; // 0x28
		::System::Boolean _IsRandom_k__BackingField; // 0x29
		::System::UInt32 _DialogID_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::HipplenIncidentSettlementConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_SettlementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_SETTLEMENTID_OFFSET))(this);
		}

		::System::Boolean get_IsRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_ISRANDOM_OFFSET))(this);
		}

		::System::Void set_IsRandom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_ISRANDOM_OFFSET))(this, a1);
		}

		::System::UInt32 get_DialogID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_DIALOGID_OFFSET))(this);
		}

		::System::Void set_DialogID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_DIALOGID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_WeightList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_WEIGHTLIST_OFFSET))(this);
		}

		::System::Void set_WeightList(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_WEIGHTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RatioList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_RATIOLIST_OFFSET))(this);
		}

		::System::Void set_RatioList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_RATIOLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSucc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_ISSUCC_OFFSET))(this);
		}

		::System::Void set_IsSucc(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_ISSUCC_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* CreateCommitOption(::RPG::GameCore::HipplenIncidentCommitOptionConfig* a1, ::RPG::GameCore::HipplenIncidentSettlementConfig* a2)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentCommitOptionConfig*, ::RPG::GameCore::HipplenIncidentSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATECOMMITOPTION_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* CreateRandomOption(::RPG::GameCore::HipplenIncidentRandomOptionConfig* a1, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Boolean a5)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentRandomOptionConfig*, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATERANDOMOPTION_OFFSET))(a1, a2, a3, a4, a5);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentSettlementParam* CreateSettlementParam()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentSettlementParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATESETTLEMENTPARAM_OFFSET))(this);
		}
	};
}
