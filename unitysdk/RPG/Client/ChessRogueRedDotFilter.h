#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB664B70)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_CABINETREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0xB665B00)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_HASANYMAINSTORYREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB665B20)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWCABINETIDS_OFFSET UNITYSDK_OFFSET(0xB665B80)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWDIMENSIONAEONIDS_OFFSET UNITYSDK_OFFSET(0xB665B40)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWDIMENSIONTALENTIDS_OFFSET UNITYSDK_OFFSET(0xB665B60)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWMAINSTORYIDS_OFFSET UNITYSDK_OFFSET(0xB665BA0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0xB665BC0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_CABINETREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0xB665B10)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_HASANYMAINSTORYREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB665B30)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWCABINETIDS_OFFSET UNITYSDK_OFFSET(0xB665B90)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWDIMENSIONAEONIDS_OFFSET UNITYSDK_OFFSET(0xB665B50)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWDIMENSIONTALENTIDS_OFFSET UNITYSDK_OFFSET(0xB665B70)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWMAINSTORYIDS_OFFSET UNITYSDK_OFFSET(0xB665BB0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0xB665BD0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATECABINETREWARD_OFFSET UNITYSDK_OFFSET(0xB664CB0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATEMAINSTORYREWARD_OFFSET UNITYSDK_OFFSET(0xB664F50)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWCABINET_OFFSET UNITYSDK_OFFSET(0xB665440)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWDIMENSIONTALENT_OFFSET UNITYSDK_OFFSET(0xB665110)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWMAINSTORY_OFFSET UNITYSDK_OFFSET(0xB665740)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER_UPDATENEWSUBSTORY_OFFSET UNITYSDK_OFFSET(0xB6659D0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB665BE0)
#define RPG_CLIENT_CHESSROGUEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB665BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueRedDotFilter_TypeDefinitionIndex = 62475;

	class ChessRogueRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CabinetRewardAvailableIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _NewSubStoryIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NewDimensionAeonIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewMainStoryIDs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _NewDimensionTalentIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _NewCabinetIDs_k__BackingField; // 0x38
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

		::System::Void set_CabinetRewardAvailableIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_CABINETREWARDAVAILABLEIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAnyMainStoryRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_HASANYMAINSTORYREWARDAVAILABLE_OFFSET))(this);
		}

		::System::Void set_HasAnyMainStoryRewardAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_HASANYMAINSTORYREWARDAVAILABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewDimensionAeonIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWDIMENSIONAEONIDS_OFFSET))(this);
		}

		::System::Void set_NewDimensionAeonIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWDIMENSIONAEONIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewDimensionTalentIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWDIMENSIONTALENTIDS_OFFSET))(this);
		}

		::System::Void set_NewDimensionTalentIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWDIMENSIONTALENTIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewCabinetIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWCABINETIDS_OFFSET))(this);
		}

		::System::Void set_NewCabinetIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWCABINETIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewMainStoryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWMAINSTORYIDS_OFFSET))(this);
		}

		::System::Void set_NewMainStoryIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWMAINSTORYIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewSubStoryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_GET_NEWSUBSTORYIDS_OFFSET))(this);
		}

		::System::Void set_NewSubStoryIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER_SET_NEWSUBSTORYIDS_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
