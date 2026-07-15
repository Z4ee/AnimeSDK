#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2395F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C239600)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C239610)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int DeleteCacheOptions_TypeDefinitionIndex = 43297;

	class DeleteCacheOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DELETECACHEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
