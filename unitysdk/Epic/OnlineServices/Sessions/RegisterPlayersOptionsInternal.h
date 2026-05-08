#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class RegisterPlayersOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D4F30)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8D4EC0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8D4EB0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_SET_PLAYERSTOREGISTER_OFFSET UNITYSDK_OFFSET(0x8D4E40)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x8D4D90)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int RegisterPlayersOptionsInternal_TypeDefinitionIndex = 33533;

	struct alignas(8) RegisterPlayersOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18
		::System::IntPtr m_PlayersToRegister; // 0x20
		::System::UInt32 m_PlayersToRegisterCount; // 0x28

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::System::Void set_PlayersToRegister(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_SET_PLAYERSTOREGISTER_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::RegisterPlayersOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::RegisterPlayersOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
