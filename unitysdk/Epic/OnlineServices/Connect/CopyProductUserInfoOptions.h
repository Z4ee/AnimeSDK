#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DBCCFD0)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DBCCFE0)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCCFF0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CopyProductUserInfoOptions_TypeDefinitionIndex = 36711;

	class CopyProductUserInfoOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSERINFOOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
