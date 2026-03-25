#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86C92F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86C9300)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86C9310)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int QueryFileListOptions_TypeDefinitionIndex = 35849;

	class QueryFileListOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_QUERYFILELISTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
