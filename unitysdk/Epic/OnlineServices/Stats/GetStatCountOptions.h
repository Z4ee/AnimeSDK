#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xB15AE90)
#define EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xB15AEA0)
#define EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB15AEB0)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int GetStatCountOptions_TypeDefinitionIndex = 45053;

	class GetStatCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}
