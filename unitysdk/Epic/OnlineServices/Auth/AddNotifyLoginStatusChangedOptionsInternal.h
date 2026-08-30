#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class AddNotifyLoginStatusChangedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_AUTH_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C3EE60)
#define EPIC_ONLINESERVICES_AUTH_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCBDF0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AddNotifyLoginStatusChangedOptionsInternal_TypeDefinitionIndex = 46201;

	struct alignas(4) AddNotifyLoginStatusChangedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
