#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionAttributeAdvertisementType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsAttribute; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B6DF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_GET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x2B7CC0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_GET_DATA_OFFSET UNITYSDK_OFFSET(0x8B6C80)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8B6DE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x48E3B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x8B6CF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B6D60)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsAttributeInternal_TypeDefinitionIndex = 35108;

	struct alignas(8) SessionDetailsAttributeInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Data; // 0x18
		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType m_AdvertisementType; // 0x20

		::Epic::OnlineServices::Sessions::AttributeData* get_Data()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Epic::OnlineServices::Sessions::AttributeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_DATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType get_AdvertisementType()
		{
			return ((::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_GET_ADVERTISEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_ADVERTISEMENTTYPE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsAttribute*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
