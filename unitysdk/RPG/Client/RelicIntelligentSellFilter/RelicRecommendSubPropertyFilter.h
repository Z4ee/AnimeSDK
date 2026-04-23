#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_FILTER_OFFSET UNITYSDK_OFFSET(0xAF93040)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_GETDESC_OFFSET UNITYSDK_OFFSET(0xAF93700)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_GETMAXSELECTCOUNT_OFFSET UNITYSDK_OFFSET(0xAF936C0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xAF92FA0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_GET_MATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xAF92F80)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_ISMATCH_OFFSET UNITYSDK_OFFSET(0xAF930A0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xAF92FB0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_SET_MATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xAF92F90)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF92FC0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER__ISMATCH_OFFSET UNITYSDK_OFFSET(0xAF932D0)

namespace RPG::Client::RelicIntelligentSellFilter
{
	inline static constexpr unsigned int RelicRecommendSubPropertyFilter_TypeDefinitionIndex = 68714;

	class RelicRecommendSubPropertyFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendData*>* _NoDataAvatarList; // 0x10
		::System::UInt32 FilterCount; // 0x18
		::System::UInt32 FlagID; // 0x1C
		::System::UInt32 _MatchCount_k__BackingField; // 0x20
		::System::UInt32 _MaxSelectCount; // 0x24
		::System::Boolean _IsOpened_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MatchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_GET_MATCHCOUNT_OFFSET))(this);
		}

		::System::Void set_MatchCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_SET_MATCHCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_GET_ISOPENED_OFFSET))(this);
		}

		::System::Void set_IsOpened(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_SET_ISOPENED_OFFSET))(this, value);
		}

		::System::Boolean Filter(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_FILTER_OFFSET))(this, itemData);
		}

		::System::Boolean IsMatch(::RPG::Client::RelicItemData* itemData, ::System::UInt32 matchCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_ISMATCH_OFFSET))(this, itemData, matchCount);
		}

		::System::Boolean _IsMatch(::System::UInt32 avatarID, ::RPG::Client::RelicItemData* itemData, ::System::UInt32 matchCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER__ISMATCH_OFFSET))(this, avatarID, itemData, matchCount);
		}

		::System::UInt32 GetMaxSelectCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_GETMAXSELECTCOUNT_OFFSET))(this);
		}

		::System::String* GetDesc(::System::UInt32 selectCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICRECOMMENDSUBPROPERTYFILTER_GETDESC_OFFSET))(this, selectCount);
		}
	};
}
