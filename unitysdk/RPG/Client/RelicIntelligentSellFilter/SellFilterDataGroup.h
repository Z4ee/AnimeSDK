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

#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0xAF94BA0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xAF938F0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_FILTER_OFFSET UNITYSDK_OFFSET(0xAF94B50)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GETFILTERITEMLIST_OFFSET UNITYSDK_OFFSET(0xAF93C70)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GET_FILTERCOUNT_OFFSET UNITYSDK_OFFSET(0xAF93BC0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_INITPRERELEASEDATA_OFFSET UNITYSDK_OFFSET(0xAF944D0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_ISCLOSEALLFILTER_OFFSET UNITYSDK_OFFSET(0xAF94AE0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_OPENPROTECT_OFFSET UNITYSDK_OFFSET(0xAF93C20)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_STARTFILTERCOUNT_OFFSET UNITYSDK_OFFSET(0xAF93F00)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAF93970)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__GETRELICMATCHTYPE_OFFSET UNITYSDK_OFFSET(0xAF94790)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISCURRENTVERSIONRELIC_OFFSET UNITYSDK_OFFSET(0xAF948E0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISFILTERMATCH_OFFSET UNITYSDK_OFFSET(0xAF94260)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISRELICITEMDATAVALID_OFFSET UNITYSDK_OFFSET(0xAF94690)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__PRECOMPUTEFILTERCACHE_OFFSET UNITYSDK_OFFSET(0xAF93F70)

namespace RPG::Client::RelicIntelligentSellFilter
{
	inline static constexpr unsigned int SellFilterDataGroup_TypeDefinitionIndex = 68711;

	class SellFilterDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PreReleaseAvatarRecommendSetIDs; // 0x10
		::RPG::Client::RelicIntelligentSellFilter::RelicMainPropertyFilter* RelicMainPropertyFilter; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicItemData*, ::System::UInt32>* _RelicItemDataMatchTypeCache; // 0x20
		::RPG::Client::RelicIntelligentSellFilter::RelicRecommendSubPropertyFilter* RecommendSubPropertyFilter; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5448CD7E643CD8E1*>* _RelicPropertyFilterCache; // 0x30
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
