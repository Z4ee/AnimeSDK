#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionAttributeAdvertisementType.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionDetailsAttributeInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_GET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DF09D00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1DF09CE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF09EF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_SET_ADVERTISEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DF09D10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1DF09CF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_SET_OFFSET UNITYSDK_OFFSET(0x1DF09D20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0A010)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsAttribute_TypeDefinitionIndex = 45171;

	class SessionDetailsAttribute : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Sessions::AttributeData* _Data_k__BackingField; // 0x10
		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType _AdvertisementType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Sessions::AttributeData* get_Data()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Epic::OnlineServices::Sessions::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_SET_DATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType get_AdvertisementType()
		{
			return ((::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_GET_ADVERTISEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_SET_ADVERTISEMENTTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSATTRIBUTE_SET_1_OFFSET))(this, a1);
		}
	};
}
