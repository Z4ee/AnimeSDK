#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class CopyStatByNameOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B300)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1B290)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B1D0)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1B280)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1B110)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int CopyStatByNameOptionsInternal_TypeDefinitionIndex = 41206;

	struct alignas(8) CopyStatByNameOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::IntPtr m_Name; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_NAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::CopyStatByNameOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::CopyStatByNameOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
