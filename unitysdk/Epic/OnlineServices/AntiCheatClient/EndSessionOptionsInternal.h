#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class EndSessionOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ENDSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ENDSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9080)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ENDSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EC0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int EndSessionOptionsInternal_TypeDefinitionIndex = 46376;

	struct alignas(4) EndSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::EndSessionOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::EndSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ENDSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ENDSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ENDSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
