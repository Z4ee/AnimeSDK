#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Stats { class IngestData; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF90)
#define EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_GET_INGESTAMOUNT_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1BD50)
#define EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1BF80)
#define EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_SET_INGESTAMOUNT_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1BEB0)
#define EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1BE00)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int IngestDataInternal_TypeDefinitionIndex = 42013;

	struct alignas(8) IngestDataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_StatName; // 0x18
		::System::Int32 m_IngestAmount; // 0x20

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_SET_STATNAME_OFFSET))(this, a1);
		}

		::System::Int32 get_IngestAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_GET_INGESTAMOUNT_OFFSET))(this);
		}

		::System::Void set_IngestAmount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_SET_INGESTAMOUNT_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::IngestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::IngestData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
