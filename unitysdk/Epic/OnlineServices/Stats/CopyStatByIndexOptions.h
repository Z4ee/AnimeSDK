#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_GET_STATINDEX_OFFSET UNITYSDK_OFFSET(0x1942ADC0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1942ADA0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_SET_STATINDEX_OFFSET UNITYSDK_OFFSET(0x1942ADD0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1942ADB0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1942ADE0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int CopyStatByIndexOptions_TypeDefinitionIndex = 33422;

	class CopyStatByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::UInt32 _StatIndex_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_StatIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_GET_STATINDEX_OFFSET))(this);
		}

		::System::Void set_StatIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_SET_STATINDEX_OFFSET))(this, value);
		}
	};
}
