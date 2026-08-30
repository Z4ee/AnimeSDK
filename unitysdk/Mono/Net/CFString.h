#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"
#include "unitysdk/Mono/Net/CFRange.h"

namespace System { class String; }

#define MONO_NET_CFSTRING_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1C4739B0)
#define MONO_NET_CFSTRING_CFSTRINGCREATEWITHCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1C474590)
#define MONO_NET_CFSTRING_CFSTRINGGETCHARACTERSPTR_OFFSET UNITYSDK_OFFSET(0x1C4746A0)
#define MONO_NET_CFSTRING_CFSTRINGGETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1C474720)
#define MONO_NET_CFSTRING_CFSTRINGGETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C474620)
#define MONO_NET_CFSTRING_CREATE_OFFSET UNITYSDK_OFFSET(0x1C470190)
#define MONO_NET_CFSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4747C0)
#define MONO_NET_CFSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C474500)

namespace Mono::Net
{
	inline static constexpr unsigned int CFString_TypeDefinitionIndex = 2410;

	class CFString : public ::Mono::Net::CFObject
	{
	public:
		::System::String* str; // 0x18

		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::IntPtr CFStringCreateWithCharacters(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CFSTRINGCREATEWITHCHARACTERS_OFFSET))(a1, a2, a3);
		}

		static ::Mono::Net::CFString* Create(::System::String* a1)
		{
			return ((::Mono::Net::CFString*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CREATE_OFFSET))(a1);
		}

		static ::System::IntPtr CFStringGetLength(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CFSTRINGGETLENGTH_OFFSET))(a1);
		}

		static ::System::IntPtr CFStringGetCharactersPtr(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CFSTRINGGETCHARACTERSPTR_OFFSET))(a1);
		}

		static ::System::IntPtr CFStringGetCharacters(::System::IntPtr a1, ::Mono::Net::CFRange a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Mono::Net::CFRange, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CFSTRINGGETCHARACTERS_OFFSET))(a1, a2, a3);
		}

		static ::System::String* AsString(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_ASSTRING_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_TOSTRING_OFFSET))(this);
		}
	};
}
