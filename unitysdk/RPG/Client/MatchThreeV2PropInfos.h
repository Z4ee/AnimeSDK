#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class MatchThreeV2ReputationInfos; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD665FA0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0xD66EF60)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETMAXLEVELFORPROP_OFFSET UNITYSDK_OFFSET(0xD668B70)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETMAXPROPLEVELFORREPUTATION_OFFSET UNITYSDK_OFFSET(0xD66B340)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETPROPDATA_OFFSET UNITYSDK_OFFSET(0xD661A60)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GET_ALLPROPDATAS_OFFSET UNITYSDK_OFFSET(0xD66EE50)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_GET_ALLPROPIDS_OFFSET UNITYSDK_OFFSET(0xD66EF40)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_INIT_OFFSET UNITYSDK_OFFSET(0xD66F1D0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS_SET_ALLPROPIDS_OFFSET UNITYSDK_OFFSET(0xD66EF50)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0xD66EFA0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITALLPROPDATAS_OFFSET UNITYSDK_OFFSET(0xD66F210)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITPROPPVELEVELUPDATA_OFFSET UNITYSDK_OFFSET(0xD66F530)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITPROPSTATICLEVELUPDATA_OFFSET UNITYSDK_OFFSET(0xD66F8E0)
#define RPG_CLIENT_MATCHTHREEV2PROPINFOS__INIT_OFFSET UNITYSDK_OFFSET(0xD66F170)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PropInfos_TypeDefinitionIndex = 66064;

	class MatchThreeV2PropInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AllPropIDs_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::IMatchThreePropData*>* _AllPropDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MaxLevelOfProp; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MaxPropLevelOfReputation; // 0x28

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

		::System::Void set_AllPropIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_SET_ALLPROPIDS_OFFSET))(this, a1);
		}

		static ::RPG::Client::MatchThreeV2PropInfos* Create()
		{
			return ((::RPG::Client::MatchThreeV2PropInfos*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_CREATE_OFFSET))();
		}

		static ::RPG::Client::MatchThreeV2PropInfos* Create_1(::RPG::Client::MatchThreeV2ReputationInfos* a1)
		{
			return ((::RPG::Client::MatchThreeV2PropInfos*(*)(::RPG::Client::MatchThreeV2ReputationInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_CREATE_1_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_INIT_OFFSET))(this);
		}

		::System::Void _Init(::RPG::Client::MatchThreeV2ReputationInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__INIT_OFFSET))(this, a1);
		}

		::System::Void _InitAllPropDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITALLPROPDATAS_OFFSET))(this);
		}

		::System::Void _InitPropPveLevelUpData(::RPG::Client::MatchThreeV2ReputationInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITPROPPVELEVELUPDATA_OFFSET))(this, a1);
		}

		::System::Void _InitPropStaticLevelUpData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS__INITPROPSTATICLEVELUPDATA_OFFSET))(this);
		}

		::RPG::Client::IMatchThreePropData* GetPropData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IMatchThreePropData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETPROPDATA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetMaxPropLevelForReputation(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETMAXPROPLEVELFORREPUTATION_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxLevelForProp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PROPINFOS_GETMAXLEVELFORPROP_OFFSET))(this, a1);
		}
	};
}
