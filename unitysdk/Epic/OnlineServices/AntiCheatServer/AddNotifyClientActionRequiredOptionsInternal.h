#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class AddNotifyClientActionRequiredOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x96F310)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AddNotifyClientActionRequiredOptionsInternal_TypeDefinitionIndex = 36867;

	struct alignas(4) AddNotifyClientActionRequiredOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
