#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class MatchThreeV2ReputationInfos; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9B5F860)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0x9B67FE0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETMAXLEVELFORPROP_OFFSET UNITYSDK_OFFSET(0x9B62580)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETMAXPROPLEVELFORREPUTATION_OFFSET UNITYSDK_OFFSET(0x9B64AF0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETPROPDATA_OFFSET UNITYSDK_OFFSET(0x9B5B990)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GET_ALLPROPDATAS_OFFSET UNITYSDK_OFFSET(0x9B67F50)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GET_ALLPROPIDS_OFFSET UNITYSDK_OFFSET(0x9B67FC0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_INIT_OFFSET UNITYSDK_OFFSET(0x9B681F0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_SET_ALLPROPIDS_OFFSET UNITYSDK_OFFSET(0x9B67FD0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x9B68020)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITALLPROPDATAS_OFFSET UNITYSDK_OFFSET(0x9B68230)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITPROPPVELEVELUPDATA_OFFSET UNITYSDK_OFFSET(0x9B68510)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITPROPSTATICLEVELUPDATA_OFFSET UNITYSDK_OFFSET(0x9B68840)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__INIT_OFFSET UNITYSDK_OFFSET(0x9B68190)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PropInfos_TypeDefinitionIndex = 53639;

	class MatchThreeV2PropInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AllPropIDs_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::IMatchThreePropData*>* _AllPropDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MaxPropLevelOfReputation; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MaxLevelOfProp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* get_AllPropDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_GET_ALLPROPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllPropIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_GET_ALLPROPIDS_OFFSET))(this);
		}

		::System::Void set_AllPropIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_SET_ALLPROPIDS_OFFSET))(this, value);
		}

		static ::RPG::Client::MatchThreeV2PropInfos* Create()
		{
			return ((::RPG::Client::MatchThreeV2PropInfos*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_CREATE_OFFSET))();
		}

		static ::RPG::Client::MatchThreeV2PropInfos* Create_1(::RPG::Client::MatchThreeV2ReputationInfos* reputationInfos)
		{
			return ((::RPG::Client::MatchThreeV2PropInfos*(*)(::RPG::Client::MatchThreeV2ReputationInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_CREATE_1_OFFSET))(reputationInfos);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_INIT_OFFSET))(this);
		}

		::System::Void _Init(::RPG::Client::MatchThreeV2ReputationInfos* reputationInfos)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__INIT_OFFSET))(this, reputationInfos);
		}

		::System::Void _InitAllPropDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITALLPROPDATAS_OFFSET))(this);
		}

		::System::Void _InitPropPveLevelUpData(::RPG::Client::MatchThreeV2ReputationInfos* reputationInfos)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITPROPPVELEVELUPDATA_OFFSET))(this, reputationInfos);
		}

		::System::Void _InitPropStaticLevelUpData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITPROPSTATICLEVELUPDATA_OFFSET))(this);
		}

		::RPG::Client::IMatchThreePropData* GetPropData(::System::UInt32 propID, ::System::UInt32 propLevel)
		{
			return ((::RPG::Client::IMatchThreePropData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETPROPDATA_OFFSET))(this, propID, propLevel);
		}

		::System::UInt32 GetMaxPropLevelForReputation(::System::UInt32 reputation)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETMAXPROPLEVELFORREPUTATION_OFFSET))(this, reputation);
		}

		::System::UInt32 GetMaxLevelForProp(::System::UInt32 propID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETMAXLEVELFORPROP_OFFSET))(this, propID);
		}
	};
}
