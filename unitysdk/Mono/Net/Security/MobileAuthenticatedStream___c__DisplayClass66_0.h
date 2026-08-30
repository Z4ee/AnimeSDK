#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47B8D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM___C__DISPLAYCLASS66_0__INNERREAD_B__0_OFFSET UNITYSDK_OFFSET(0x1C47B8E0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream___c__DisplayClass66_0_TypeDefinitionIndex = 2440;

	class MobileAuthenticatedStream___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x10
		::System::Int32 len; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InnerRead_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM___C__DISPLAYCLASS66_0__INNERREAD_B__0_OFFSET))(this);
		}
	};
}
