#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_FILTER_OFFSET UNITYSDK_OFFSET(0xC6D97A0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_GETDESC_OFFSET UNITYSDK_OFFSET(0xC6D9BF0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xC6D9700)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xC6D9710)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D9720)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__ISMATCH_OFFSET UNITYSDK_OFFSET(0xC6D9A10)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__ISRECOMMENDMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xC6D97F0)

namespace RPG::Client::RelicIntelligentSellFilter
{
	inline static constexpr unsigned int RelicMainPropertyFilter_TypeDefinitionIndex = 69525;

	class RelicMainPropertyFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendData*>* _NoDataAvatarList; // 0x10
		::System::Boolean _IsOpened_k__BackingField; // 0x18
		::System::UInt32 FlagID; // 0x1C
		::System::UInt32 FilterCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_GET_ISOPENED_OFFSET))(this);
		}

		::System::Void set_IsOpened(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_SET_ISOPENED_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_FILTER_OFFSET))(this, a1);
		}

		::System::Boolean _IsRecommendMainProperty(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__ISRECOMMENDMAINPROPERTY_OFFSET))(this, a1);
		}

		::System::Boolean _IsMatch(::System::UInt32 a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__ISMATCH_OFFSET))(this, a1, a2);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_GETDESC_OFFSET))(this);
		}
	};
}
