#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x19FA5700)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x19FA5710)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA5720)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int GetFileMetadataCountOptions_TypeDefinitionIndex = 33866;

	class GetFileMetadataCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
