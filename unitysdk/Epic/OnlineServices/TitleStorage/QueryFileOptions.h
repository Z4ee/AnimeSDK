#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D264650)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D264630)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D264660)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D264640)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D264670)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int QueryFileOptions_TypeDefinitionIndex = 34974;

	class QueryFileOptions : public ::System::Object
	{
	public:
		::System::String* _Filename_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_Filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILEOPTIONS_SET_FILENAME_OFFSET))(this, value);
		}
	};
}
