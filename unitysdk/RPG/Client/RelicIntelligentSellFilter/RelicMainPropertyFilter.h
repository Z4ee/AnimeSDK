#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_FILTER_OFFSET UNITYSDK_OFFSET(0xAF92A70)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_GETDESC_OFFSET UNITYSDK_OFFSET(0xAF92EB0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xAF929D0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xAF929E0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF929F0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__ISMATCH_OFFSET UNITYSDK_OFFSET(0xAF92CD0)
#define RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__ISRECOMMENDMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xAF92AC0)

namespace RPG::Client::RelicIntelligentSellFilter
{
	inline static constexpr unsigned int RelicMainPropertyFilter_TypeDefinitionIndex = 68713;

	class RelicMainPropertyFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendData*>* _NoDataAvatarList; // 0x10
		::System::Boolean _IsOpened_k__BackingField; // 0x18
		::System::UInt32 FilterCount; // 0x1C
		::System::UInt32 FlagID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_GET_ISOPENED_OFFSET))(this);
		}

		::System::Void set_IsOpened(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_SET_ISOPENED_OFFSET))(this, value);
		}

		::System::Boolean Filter(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_FILTER_OFFSET))(this, itemData);
		}

		::System::Boolean _IsRecommendMainProperty(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__ISRECOMMENDMAINPROPERTY_OFFSET))(this, itemData);
		}

		::System::Boolean _IsMatch(::System::UInt32 avatarID, ::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER__ISMATCH_OFFSET))(this, avatarID, itemData);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICINTELLIGENTSELLFILTER_RELICMAINPROPERTYFILTER_GETDESC_OFFSET))(this);
		}
	};
}
