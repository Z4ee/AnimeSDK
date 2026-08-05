#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class GetStatCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x964F50)
#define EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x964E20)
#define EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x964D50)
#define EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x964C90)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int GetStatCountOptionsInternal_TypeDefinitionIndex = 35649;

	struct alignas(8) GetStatCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::GetStatCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::GetStatCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_GETSTATCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
