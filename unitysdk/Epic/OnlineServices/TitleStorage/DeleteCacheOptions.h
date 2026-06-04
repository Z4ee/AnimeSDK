#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0F98A0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0F98B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F98C0)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int DeleteCacheOptions_TypeDefinitionIndex = 41969;

	class DeleteCacheOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_DELETECACHEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
