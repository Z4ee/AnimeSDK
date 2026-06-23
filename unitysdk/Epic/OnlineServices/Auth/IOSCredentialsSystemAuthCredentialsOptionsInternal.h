#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class IOSCredentialsSystemAuthCredentialsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91FED0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_GET_PRESENTATIONCONTEXTPROVIDING_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x91FE60)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B4520)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_PRESENTATIONCONTEXTPROVIDING_OFFSET UNITYSDK_OFFSET(0x446DA0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IOSCredentialsSystemAuthCredentialsOptionsInternal_TypeDefinitionIndex = 36204;

	struct alignas(8) IOSCredentialsSystemAuthCredentialsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PresentationContextProviding; // 0x18

		::System::IntPtr get_PresentationContextProviding()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_GET_PRESENTATIONCONTEXTPROVIDING_OFFSET))(this);
		}

		::System::Void set_PresentationContextProviding(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_PRESENTATIONCONTEXTPROVIDING_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
