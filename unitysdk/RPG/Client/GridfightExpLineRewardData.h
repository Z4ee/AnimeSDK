#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OfferingRewardData; }
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GETCANTAKEREWARDSCORELEVELLIST_OFFSET UNITYSDK_OFFSET(0x98EA140)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GETNEXTSPECIALREWARDLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x98E99D0)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GETTAKENREWARDSCORELEVELLIST_OFFSET UNITYSDK_OFFSET(0x98EA280)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_CUREXPMAXNUM_OFFSET UNITYSDK_OFFSET(0x98E9880)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_CUREXPNUM_OFFSET UNITYSDK_OFFSET(0x98E9860)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x98E9900)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x98E9920)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_OFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x98E9840)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_SEENMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x98E9950)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_TOTALLEFTEXPNUM_OFFSET UNITYSDK_OFFSET(0x98E98A0)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_HASREWARDCANTAKEAFTERLEVEL_OFFSET UNITYSDK_OFFSET(0x98E9DD0)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_HASREWARDCANTAKEBEFORELEVEL_OFFSET UNITYSDK_OFFSET(0x98E9CE0)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_HASREWARDISNEWAFTERLEVEL_OFFSET UNITYSDK_OFFSET(0x98E9EB0)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_ISREWARDISNEW_OFFSET UNITYSDK_OFFSET(0x98E9FA0)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_SETSEENMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x98EA050)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_SET_OFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x98E9850)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_TAKEREWARDBEFORELEVEL_OFFSET UNITYSDK_OFFSET(0x98E9AD0)
#define RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98E99C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridfightExpLineRewardData_TypeDefinitionIndex = 52465;

	class GridfightExpLineRewardData : public ::System::Object
	{
	public:
		::RPG::Client::OfferingRewardData* _OfferingRewardData_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::Client::OfferingRewardData* offeringRewardData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA__CTOR_OFFSET))(this, offeringRewardData);
		}

		::RPG::Client::OfferingRewardData* get_OfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_OFFERINGREWARDDATA_OFFSET))(this);
		}

		::System::Void set_OfferingRewardData(::RPG::Client::OfferingRewardData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_SET_OFFERINGREWARDDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CurExpNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_CUREXPNUM_OFFSET))(this);
		}

		::System::UInt32 get_CurExpMaxNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_CUREXPMAXNUM_OFFSET))(this);
		}

		::System::UInt32 get_TotalLeftExpNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_TOTALLEFTEXPNUM_OFFSET))(this);
		}

		::System::UInt32 get_CurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_CURLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SeenMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GET_SEENMAXLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::OfferingLevelConfigRow* GetNextSpecialRewardLevelConfig()
		{
			return ((::RPG::GameCore::OfferingLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GETNEXTSPECIALREWARDLEVELCONFIG_OFFSET))(this);
		}

		::System::Boolean TakeRewardBeforeLevel(::System::UInt32 targetLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_TAKEREWARDBEFORELEVEL_OFFSET))(this, targetLevel);
		}

		::System::Boolean HasRewardCanTakeBeforeLevel(::System::UInt32 targetLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_HASREWARDCANTAKEBEFORELEVEL_OFFSET))(this, targetLevel);
		}

		::System::Boolean HasRewardCanTakeAfterLevel(::System::UInt32 targetLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_HASREWARDCANTAKEAFTERLEVEL_OFFSET))(this, targetLevel);
		}

		::System::Boolean HasRewardIsNewAfterLevel(::System::UInt32 targetLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_HASREWARDISNEWAFTERLEVEL_OFFSET))(this, targetLevel);
		}

		::System::Boolean IsRewardIsNew(::System::UInt32 targetLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_ISREWARDISNEW_OFFSET))(this, targetLevel);
		}

		::System::Void SetSeenMaxLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_SETSEENMAXLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCanTakeRewardScoreLevelList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GETCANTAKEREWARDSCORELEVELLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTakenRewardScoreLevelList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEXPLINEREWARDDATA_GETTAKENREWARDSCORELEVELLIST_OFFSET))(this);
		}
	};
}
