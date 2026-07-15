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

#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x19877420)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x19876240)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_FILTER_OFFSET UNITYSDK_OFFSET(0x198773D0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GETFILTERITEMLIST_OFFSET UNITYSDK_OFFSET(0x198764E0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GET_FILTERCOUNT_OFFSET UNITYSDK_OFFSET(0x19876430)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_INITPRERELEASEDATA_OFFSET UNITYSDK_OFFSET(0x19876D30)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_ISCLOSEALLFILTER_OFFSET UNITYSDK_OFFSET(0x19877360)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_OPENPROTECT_OFFSET UNITYSDK_OFFSET(0x19876490)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_STARTFILTERCOUNT_OFFSET UNITYSDK_OFFSET(0x19876780)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x198762C0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__GETRELICMATCHTYPE_OFFSET UNITYSDK_OFFSET(0x19877040)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISCURRENTVERSIONRELIC_OFFSET UNITYSDK_OFFSET(0x19877190)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISFILTERMATCH_OFFSET UNITYSDK_OFFSET(0x19876AC0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISRELICITEMDATAVALID_OFFSET UNITYSDK_OFFSET(0x19876EE0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__PRECOMPUTEFILTERCACHE_OFFSET UNITYSDK_OFFSET(0x198767F0)

namespace RPG::Client::RelicIntelligentSellFilter
{
	inline static constexpr unsigned int SellFilterDataGroup_TypeDefinitionIndex = 71046;

	class SellFilterDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PreReleaseAvatarRecommendSetIDs; // 0x10
		::RPG::Client::RelicIntelligentSellFilter::RelicRecommendSubPropertyFilter* RecommendSubPropertyFilter; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicItemData*, ::System::UInt32>* _RelicItemDataMatchTypeCache; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5448CD7E643CD8E1*>* _RelicPropertyFilterCache; // 0x28
		::RPG::Client::RelicIntelligentSellFilter::RelicMainPropertyFilter* RelicMainPropertyFilter; // 0x30
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

		::System::Void OpenProtect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_OPENPROTECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetFilterItemList(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_GETFILTERITEMLIST_OFFSET))(this, a1, a2);
		}

		::System::Void InitPrereleaseData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_INITPRERELEASEDATA_OFFSET))(this);
		}

		::System::Void _PrecomputeFilterCache(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__PRECOMPUTEFILTERCACHE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRelicMatchType(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__GETRELICMATCHTYPE_OFFSET))(this, a1);
		}

		::System::Boolean _IsCurrentVersionRelic(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISCURRENTVERSIONRELIC_OFFSET))(this, a1);
		}

		::System::Boolean _IsFilterMatch(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISFILTERMATCH_OFFSET))(this, a1);
		}

		::System::Boolean _IsRelicItemDataValid(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP__ISRELICITEMDATAVALID_OFFSET))(this, a1);
		}

		::System::Void StartFilterCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_STARTFILTERCOUNT_OFFSET))(this);
		}

		::System::Boolean IsCloseAllFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_ISCLOSEALLFILTER_OFFSET))(this);
		}

		::System::Boolean Filter(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_FILTER_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_SELLFILTERDATAGROUP_CLEAR_OFFSET))(this);
		}
	};
}
