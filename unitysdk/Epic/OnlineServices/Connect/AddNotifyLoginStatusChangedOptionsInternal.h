#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class AddNotifyLoginStatusChangedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2DC50)
#define EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int AddNotifyLoginStatusChangedOptionsInternal_TypeDefinitionIndex = 42258;

	struct alignas(4) AddNotifyLoginStatusChangedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
