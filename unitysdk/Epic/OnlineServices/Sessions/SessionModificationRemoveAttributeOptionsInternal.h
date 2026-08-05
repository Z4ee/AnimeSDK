#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationRemoveAttributeOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x964BE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x964AC0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x964940)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9649F0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationRemoveAttributeOptionsInternal_TypeDefinitionIndex = 35788;

	struct alignas(8) SessionModificationRemoveAttributeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONSINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONREMOVEATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
