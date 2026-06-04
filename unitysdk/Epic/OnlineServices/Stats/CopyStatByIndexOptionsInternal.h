#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class CopyStatByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B720)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1B710)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1B630)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_SET_STATINDEX_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1B570)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int CopyStatByIndexOptionsInternal_TypeDefinitionIndex = 42007;

	struct alignas(8) CopyStatByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::UInt32 m_StatIndex; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void set_StatIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_SET_STATINDEX_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::CopyStatByIndexOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::CopyStatByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
