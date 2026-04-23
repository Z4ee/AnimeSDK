#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

namespace System { class String; }

#define MONO_NET_CFURL_CFURLCREATEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x1A098810)
#define MONO_NET_CFURL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A093550)
#define MONO_NET_CFURL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A098780)

namespace Mono::Net
{
	inline static constexpr unsigned int CFUrl_TypeDefinitionIndex = 2401;

	class CFUrl : public ::Mono::Net::CFObject
	{
	public:
		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFURL__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::IntPtr CFURLCreateWithString(::System::IntPtr allocator, ::System::IntPtr str, ::System::IntPtr baseURL)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFURL_CFURLCREATEWITHSTRING_OFFSET))(allocator, str, baseURL);
		}

		static ::Mono::Net::CFUrl* Create(::System::String* absolute)
		{
			return ((::Mono::Net::CFUrl*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFURL_CREATE_OFFSET))(absolute);
		}
	};
}
