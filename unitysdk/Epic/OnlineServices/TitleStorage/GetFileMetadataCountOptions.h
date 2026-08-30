#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D43DD50)
#define EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D43DD60)
#define EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D43DD70)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int GetFileMetadataCountOptions_TypeDefinitionIndex = 45018;

	class GetFileMetadataCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
