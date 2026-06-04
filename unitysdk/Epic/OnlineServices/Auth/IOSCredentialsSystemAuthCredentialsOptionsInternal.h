#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class IOSCredentialsSystemAuthCredentialsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11EA0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_GET_PRESENTATIONCONTEXTPROVIDING_OFFSET UNITYSDK_OFFSET(0x60D0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x11E20)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F00)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_PRESENTATIONCONTEXTPROVIDING_OFFSET UNITYSDK_OFFSET(0x95B0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IOSCredentialsSystemAuthCredentialsOptionsInternal_TypeDefinitionIndex = 43225;

	struct alignas(8) IOSCredentialsSystemAuthCredentialsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PresentationContextProviding; // 0x18

		::System::IntPtr get_PresentationContextProviding()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_GET_PRESENTATIONCONTEXTPROVIDING_OFFSET))(this);
		}

		::System::Void set_PresentationContextProviding(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_PRESENTATIONCONTEXTPROVIDING_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
