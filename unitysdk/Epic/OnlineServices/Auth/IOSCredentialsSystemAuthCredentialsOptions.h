#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/IOSCredentialsSystemAuthCredentialsOptionsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS_GET_PRESENTATIONCONTEXTPROVIDING_OFFSET UNITYSDK_OFFSET(0x1C2226D0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS_SET_1_OFFSET UNITYSDK_OFFSET(0x1C222760)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS_SET_OFFSET UNITYSDK_OFFSET(0x1C2226F0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS_SET_PRESENTATIONCONTEXTPROVIDING_OFFSET UNITYSDK_OFFSET(0x1C2226E0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2228A0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IOSCredentialsSystemAuthCredentialsOptions_TypeDefinitionIndex = 44085;

	class IOSCredentialsSystemAuthCredentialsOptions : public ::System::Object
	{
	public:
		::System::IntPtr _PresentationContextProviding_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PresentationContextProviding()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS_GET_PRESENTATIONCONTEXTPROVIDING_OFFSET))(this);
		}

		::System::Void set_PresentationContextProviding(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS_SET_PRESENTATIONCONTEXTPROVIDING_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptionsInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptionsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSSYSTEMAUTHCREDENTIALSOPTIONS_SET_1_OFFSET))(this, a1);
		}
	};
}
