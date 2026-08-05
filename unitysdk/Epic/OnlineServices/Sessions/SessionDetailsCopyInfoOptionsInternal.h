#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsCopyInfoOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYINFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYINFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x974E20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYINFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsCopyInfoOptionsInternal_TypeDefinitionIndex = 35769;

	struct alignas(4) SessionDetailsCopyInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYINFOOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYINFOOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYINFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
