#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class CopyActiveSessionHandleOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C2B90)
#define EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9C2A70)
#define EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9C29A0)
#define EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x9C28F0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CopyActiveSessionHandleOptionsInternal_TypeDefinitionIndex = 35687;

	struct alignas(8) CopyActiveSessionHandleOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_COPYACTIVESESSIONHANDLEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
