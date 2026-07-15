#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Stats { class CopyStatByNameOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A96690)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A96610)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x3A96550)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A96600)
#define EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x3A96490)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int CopyStatByNameOptionsInternal_TypeDefinitionIndex = 42870;

	struct alignas(8) CopyStatByNameOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::IntPtr m_Name; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_NAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Stats::CopyStatByNameOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Stats::CopyStatByNameOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_COPYSTATBYNAMEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
