#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_GET_STATINDEX_OFFSET UNITYSDK_OFFSET(0xA0F38B0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0F3890)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_SET_STATINDEX_OFFSET UNITYSDK_OFFSET(0xA0F38C0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0F38A0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F38D0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int CopyStatByIndexOptions_TypeDefinitionIndex = 42006;

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

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StatIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_GET_STATINDEX_OFFSET))(this);
		}

		::System::Void set_StatIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONS_SET_STATINDEX_OFFSET))(this, a1);
		}
	};
}
