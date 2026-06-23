#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C4BD3D0)
#define EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C4BD3B0)
#define EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C4BD3E0)
#define EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C4BD3C0)
#define EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BD3F0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int CopyPermissionByIndexOptions_TypeDefinitionIndex = 35834;

	class CopyPermissionByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::UInt32 _Index_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_COPYPERMISSIONBYINDEXOPTIONS_SET_INDEX_OFFSET))(this, value);
		}
	};
}
