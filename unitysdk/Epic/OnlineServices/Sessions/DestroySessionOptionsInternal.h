#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class DestroySessionOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89A080)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x899F60)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x899E90)
#define EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x899DE0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int DestroySessionOptionsInternal_TypeDefinitionIndex = 33479;

	struct alignas(8) DestroySessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::DestroySessionOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::DestroySessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_DESTROYSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
