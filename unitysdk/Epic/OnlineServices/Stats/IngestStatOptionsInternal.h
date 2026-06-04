#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class IngestData; }
namespace Epic::OnlineServices::Stats { class IngestStatOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C560)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1C4E0)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C230)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1C4D0)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_STATS_OFFSET UNITYSDK_OFFSET(0x1C2F0)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1C410)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int IngestStatOptionsInternal_TypeDefinitionIndex = 42017;

	struct alignas(8) IngestStatOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Stats; // 0x20
		::System::UInt32 m_StatsCount; // 0x28
		::System::IntPtr m_TargetUserId; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Stats(::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_STATS_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::IngestStatOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestStatOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
