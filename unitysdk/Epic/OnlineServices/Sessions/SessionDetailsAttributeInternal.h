#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionAttributeAdvertisementType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsAttribute; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_GET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_GET_DATA_OFFSET UNITYSDK_OFFSET(0x15BD0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x15D30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x15C40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x15CB0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsAttributeInternal_TypeDefinitionIndex = 42129;

	struct alignas(8) SessionDetailsAttributeInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Data; // 0x18
		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType m_AdvertisementType; // 0x20

		::Epic::OnlineServices::Sessions::AttributeData* get_Data()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Epic::OnlineServices::Sessions::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_DATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType get_AdvertisementType()
		{
			return ((::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_GET_ADVERTISEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_ADVERTISEMENTTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsAttribute*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
