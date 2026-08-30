#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

namespace System { class String; }

#define MONO_NET_CFURL_CFURLCREATEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F8DE0)
#define MONO_NET_CFURL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E8F3FD0)
#define MONO_NET_CFURL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F8D50)

namespace Mono::Net
{
	inline static constexpr unsigned int CFUrl_TypeDefinitionIndex = 2412;

	class CFUrl : public ::Mono::Net::CFObject
	{
	public:
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFURL__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::IntPtr CFURLCreateWithString(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFURL_CFURLCREATEWITHSTRING_OFFSET))(a1, a2, a3);
		}

		static ::Mono::Net::CFUrl* Create(::System::String* a1)
		{
			return ((::Mono::Net::CFUrl*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFURL_CREATE_OFFSET))(a1);
		}
	};
}
