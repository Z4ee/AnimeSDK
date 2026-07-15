#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class IngestData; }

#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C196AD0)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_GET_STATS_OFFSET UNITYSDK_OFFSET(0x1C196AF0)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C196B10)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C196AE0)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_SET_STATS_OFFSET UNITYSDK_OFFSET(0x1C196B00)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C196B20)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C196B30)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int IngestStatOptions_TypeDefinitionIndex = 42877;

	class IngestStatOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>* _Stats_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>* get_Stats()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_GET_STATS_OFFSET))(this);
		}

		::System::Void set_Stats(::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_SET_STATS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}
