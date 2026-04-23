#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class IngestData; }
namespace Epic::OnlineServices::Stats { class IngestStatOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BFA0)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1BF30)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BC80)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1BF20)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_STATS_OFFSET UNITYSDK_OFFSET(0x1BD40)
#define EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1BE60)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int IngestStatOptionsInternal_TypeDefinitionIndex = 41214;

	struct alignas(8) IngestStatOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_Stats; // 0x20
		::System::UInt32 m_StatsCount; // 0x28
		::System::IntPtr m_TargetUserId; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Stats(::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Stats::IngestData*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_STATS_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::IngestStatOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestStatOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTSTATOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
