#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionAttributeAdvertisementType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS_GET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0xA0E9B50)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS_GET_SESSIONATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA0E9B30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS_SET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0xA0E9B60)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS_SET_SESSIONATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA0E9B40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E9B70)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationAddAttributeOptions_TypeDefinitionIndex = 42147;

	class SessionModificationAddAttributeOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Sessions::AttributeData* _SessionAttribute_k__BackingField; // 0x10
		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType _AdvertisementType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Sessions::AttributeData* get_SessionAttribute()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS_GET_SESSIONATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_SessionAttribute(::Epic::OnlineServices::Sessions::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS_SET_SESSIONATTRIBUTE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType get_AdvertisementType()
		{
			return ((::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS_GET_ADVERTISEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONS_SET_ADVERTISEMENTTYPE_OFFSET))(this, a1);
		}
	};
}
