#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x937ED70)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_CABINETREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0x937FD00)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_HASANYMAINSTORYREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x937FD20)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWCABINETIDS_OFFSET UNITYSDK_OFFSET(0x937FD80)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWDIMENSIONAEONIDS_OFFSET UNITYSDK_OFFSET(0x937FD40)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWDIMENSIONTALENTIDS_OFFSET UNITYSDK_OFFSET(0x937FD60)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWMAINSTORYIDS_OFFSET UNITYSDK_OFFSET(0x937FDA0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0x937FDC0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_CABINETREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0x937FD10)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_HASANYMAINSTORYREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x937FD30)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWCABINETIDS_OFFSET UNITYSDK_OFFSET(0x937FD90)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWDIMENSIONAEONIDS_OFFSET UNITYSDK_OFFSET(0x937FD50)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWDIMENSIONTALENTIDS_OFFSET UNITYSDK_OFFSET(0x937FD70)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWMAINSTORYIDS_OFFSET UNITYSDK_OFFSET(0x937FDB0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0x937FDD0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATECABINETREWARD_OFFSET UNITYSDK_OFFSET(0x937EF20)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATEMAINSTORYREWARD_OFFSET UNITYSDK_OFFSET(0x937F1A0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWCABINET_OFFSET UNITYSDK_OFFSET(0x937F630)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWDIMENSIONTALENT_OFFSET UNITYSDK_OFFSET(0x937F310)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWMAINSTORY_OFFSET UNITYSDK_OFFSET(0x937F930)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWSUBSTORY_OFFSET UNITYSDK_OFFSET(0x937FBC0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x937FDE0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x937FDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueRedDotFilter_TypeDefinitionIndex = 54379;

	class ChessRogueRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CabinetRewardAvailableIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _NewDimensionAeonIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NewCabinetIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewSubStoryIDs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _NewMainStoryIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _NewDimensionTalentIDs_k__BackingField; // 0x38
		::System::Boolean _HasAnyMainStoryRewardAvailable_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateCabinetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATECABINETREWARD_OFFSET))(this);
		}

		::System::Void UpdateMainStoryReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATEMAINSTORYREWARD_OFFSET))(this);
		}

		::System::Void UpdateNewDimensionTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWDIMENSIONTALENT_OFFSET))(this);
		}

		::System::Void UpdateNewCabinet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWCABINET_OFFSET))(this);
		}

		::System::Void UpdateNewMainStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWMAINSTORY_OFFSET))(this);
		}

		::System::Void UpdateNewSubStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWSUBSTORY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CabinetRewardAvailableIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_CABINETREWARDAVAILABLEIDS_OFFSET))(this);
		}

		::System::Void set_CabinetRewardAvailableIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_CABINETREWARDAVAILABLEIDS_OFFSET))(this, value);
		}

		::System::Boolean get_HasAnyMainStoryRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_HASANYMAINSTORYREWARDAVAILABLE_OFFSET))(this);
		}

		::System::Void set_HasAnyMainStoryRewardAvailable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_HASANYMAINSTORYREWARDAVAILABLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewDimensionAeonIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWDIMENSIONAEONIDS_OFFSET))(this);
		}

		::System::Void set_NewDimensionAeonIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWDIMENSIONAEONIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewDimensionTalentIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWDIMENSIONTALENTIDS_OFFSET))(this);
		}

		::System::Void set_NewDimensionTalentIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWDIMENSIONTALENTIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewCabinetIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWCABINETIDS_OFFSET))(this);
		}

		::System::Void set_NewCabinetIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWCABINETIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewMainStoryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWMAINSTORYIDS_OFFSET))(this);
		}

		::System::Void set_NewMainStoryIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWMAINSTORYIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewSubStoryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWSUBSTORYIDS_OFFSET))(this);
		}

		::System::Void set_NewSubStoryIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWSUBSTORYIDS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
