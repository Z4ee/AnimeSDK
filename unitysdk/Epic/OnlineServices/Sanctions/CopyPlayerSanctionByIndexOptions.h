#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS_GET_SANCTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1DE54F10)
#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DE54EF0)
#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS_SET_SANCTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1DE54F20)
#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DE54F00)
#define EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE54F30)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int CopyPlayerSanctionByIndexOptions_TypeDefinitionIndex = 45242;

	class CopyPlayerSanctionByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::UInt32 _SanctionIndex_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SanctionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS_GET_SANCTIONINDEX_OFFSET))(this);
		}

		::System::Void set_SanctionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_COPYPLAYERSANCTIONBYINDEXOPTIONS_SET_SANCTIONINDEX_OFFSET))(this, a1);
		}
	};
}
