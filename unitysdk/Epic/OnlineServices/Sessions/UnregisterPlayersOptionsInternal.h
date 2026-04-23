#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class UnregisterPlayersOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A450)
#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1A3E0)
#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1A3D0)
#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_SET_PLAYERSTOUNREGISTER_OFFSET UNITYSDK_OFFSET(0x1A360)
#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1A2B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int UnregisterPlayersOptionsInternal_TypeDefinitionIndex = 41389;

	struct alignas(8) UnregisterPlayersOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18
		::System::IntPtr m_PlayersToUnregister; // 0x20
		::System::UInt32 m_PlayersToUnregisterCount; // 0x28

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::System::Void set_PlayersToUnregister(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_SET_PLAYERSTOUNREGISTER_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::UnregisterPlayersOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UnregisterPlayersOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
