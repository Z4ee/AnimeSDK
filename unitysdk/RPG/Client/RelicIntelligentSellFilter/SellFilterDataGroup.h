#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5448CD7E643CD8E1;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicIntelligentSellFilter { class RelicMainPropertyFilter; }
namespace RPG::Client::RelicIntelligentSellFilter { class RelicRecommendSubPropertyFilter; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2A3BD0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xA2A2920)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_FILTER_OFFSET UNITYSDK_OFFSET(0xA2A3B80)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GETFILTERITEMLIST_OFFSET UNITYSDK_OFFSET(0xA2A2CA0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GET_FILTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA2A2BF0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_INITPRERELEASEDATA_OFFSET UNITYSDK_OFFSET(0xA2A3500)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_ISCLOSEALLFILTER_OFFSET UNITYSDK_OFFSET(0xA2A3B10)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_OPENPROTECT_OFFSET UNITYSDK_OFFSET(0xA2A2C50)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_STARTFILTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA2A2F30)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A29A0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__GETRELICMATCHTYPE_OFFSET UNITYSDK_OFFSET(0xA2A37C0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISCURRENTVERSIONRELIC_OFFSET UNITYSDK_OFFSET(0xA2A3910)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISFILTERMATCH_OFFSET UNITYSDK_OFFSET(0xA2A3290)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISRELICITEMDATAVALID_OFFSET UNITYSDK_OFFSET(0xA2A36C0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__PRECOMPUTEFILTERCACHE_OFFSET UNITYSDK_OFFSET(0xA2A2FA0)

namespace RPG::Client::RelicIntelligentSellFilter
{
	inline static constexpr unsigned int SellFilterDataGroup_TypeDefinitionIndex = 61203;

	class SellFilterDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicItemData*, ::System::UInt32>* _RelicItemDataMatchTypeCache; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PreReleaseAvatarRecommendSetIDs; // 0x18
		::RPG::Client::RelicIntelligentSellFilter::RelicMainPropertyFilter* RelicMainPropertyFilter; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5448CD7E643CD8E1*>* _RelicPropertyFilterCache; // 0x28
		::RPG::Client::RelicIntelligentSellFilter::RelicRecommendSubPropertyFilter* RecommendSubPropertyFilter; // 0x30
		::System::UInt32 _LowRarity; // 0x38
		::System::Boolean IsOpenProtect; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicIntelligentSellFilter::SellFilterDataGroup* Create()
		{
			return ((::RPG::Client::RelicIntelligentSellFilter::SellFilterDataGroup*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CREATE_OFFSET))();
		}

		::System::UInt32 get_FilterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GET_FILTERCOUNT_OFFSET))(this);
		}

		::System::Void OpenProtect(::System::Boolean bOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_OPENPROTECT_OFFSET))(this, bOpen);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetFilterItemList(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* itemList, ::System::UInt32 maxItemCount)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GETFILTERITEMLIST_OFFSET))(this, itemList, maxItemCount);
		}

		::System::Void InitPrereleaseData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_INITPRERELEASEDATA_OFFSET))(this);
		}

		::System::Void _PrecomputeFilterCache(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__PRECOMPUTEFILTERCACHE_OFFSET))(this, itemList);
		}

		::System::UInt32 _GetRelicMatchType(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__GETRELICMATCHTYPE_OFFSET))(this, itemData);
		}

		::System::Boolean _IsCurrentVersionRelic(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISCURRENTVERSIONRELIC_OFFSET))(this, itemData);
		}

		::System::Boolean _IsFilterMatch(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISFILTERMATCH_OFFSET))(this, itemData);
		}

		::System::Boolean _IsRelicItemDataValid(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISRELICITEMDATAVALID_OFFSET))(this, itemData);
		}

		::System::Void StartFilterCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_STARTFILTERCOUNT_OFFSET))(this);
		}

		::System::Boolean IsCloseAllFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_ISCLOSEALLFILTER_OFFSET))(this);
		}

		::System::Boolean Filter(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_FILTER_OFFSET))(this, itemData);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CLEAR_OFFSET))(this);
		}
	};
}
