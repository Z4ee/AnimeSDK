#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class EndSessionOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ENDSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ENDSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8C7840)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ENDSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8167E0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int EndSessionOptionsInternal_TypeDefinitionIndex = 34654;

	struct alignas(4) EndSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::EndSessionOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::EndSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ENDSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ENDSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ENDSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
