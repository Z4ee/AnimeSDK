#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionAttributeAdvertisementType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }
namespace Epic::OnlineServices::Sessions { class SessionModificationAddAttributeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x173A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_SET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x17320)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_SET_SESSIONATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x172B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationAddAttributeOptionsInternal_TypeDefinitionIndex = 42148;

	struct alignas(8) SessionModificationAddAttributeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionAttribute; // 0x18
		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType m_AdvertisementType; // 0x20

		::System::Void set_SessionAttribute(::Epic::OnlineServices::Sessions::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_SET_SESSIONATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_SET_ADVERTISEMENTTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONADDATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
