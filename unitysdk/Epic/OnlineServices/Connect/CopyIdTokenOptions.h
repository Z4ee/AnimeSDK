#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E41C20)
#define EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E41C30)
#define EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E41C40)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CopyIdTokenOptions_TypeDefinitionIndex = 42262;

	class CopyIdTokenOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
