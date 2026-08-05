#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"
#include "unitysdk/Mono/Net/CFRange.h"

namespace System { class String; }

#define MONO_NET_CFSTRING_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1DD0B0A0)
#define MONO_NET_CFSTRING_CFSTRINGCREATEWITHCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1DD0AD00)
#define MONO_NET_CFSTRING_CFSTRINGGETCHARACTERSPTR_OFFSET UNITYSDK_OFFSET(0x1DD0AF80)
#define MONO_NET_CFSTRING_CFSTRINGGETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1DD0B000)
#define MONO_NET_CFSTRING_CFSTRINGGETLENGTH_OFFSET UNITYSDK_OFFSET(0x1DD0AE70)
#define MONO_NET_CFSTRING_CREATE_OFFSET UNITYSDK_OFFSET(0x1DD0AD90)
#define MONO_NET_CFSTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1DD0AEF0)
#define MONO_NET_CFSTRING_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DD0B300)
#define MONO_NET_CFSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DD0B2C0)
#define MONO_NET_CFSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD0B290)
#define MONO_NET_CFSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0AC80)

namespace Mono::Net
{
	inline static constexpr unsigned int CFString_TypeDefinitionIndex = 2589;

	class CFString : public ::Mono::Net::CFObject
	{
	public:
		::System::String* str; // 0x18

		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::IntPtr CFStringCreateWithCharacters(::System::IntPtr alloc, ::System::IntPtr chars, ::System::IntPtr length)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CFSTRINGCREATEWITHCHARACTERS_OFFSET))(alloc, chars, length);
		}

		static ::Mono::Net::CFString* Create(::System::String* value)
		{
			return ((::Mono::Net::CFString*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CREATE_OFFSET))(value);
		}

		static ::System::IntPtr CFStringGetLength(::System::IntPtr handle)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CFSTRINGGETLENGTH_OFFSET))(handle);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_GET_LENGTH_OFFSET))(this);
		}

		static ::System::IntPtr CFStringGetCharactersPtr(::System::IntPtr handle)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CFSTRINGGETCHARACTERSPTR_OFFSET))(handle);
		}

		static ::System::IntPtr CFStringGetCharacters(::System::IntPtr handle, ::Mono::Net::CFRange range, ::System::IntPtr buffer)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Mono::Net::CFRange, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_CFSTRINGGETCHARACTERS_OFFSET))(handle, range, buffer);
		}

		static ::System::String* AsString(::System::IntPtr handle)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_ASSTRING_OFFSET))(handle);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_TOSTRING_OFFSET))(this);
		}

		static ::System::String* op_Implicit(::Mono::Net::CFString* str)
		{
			return ((::System::String*(*)(::Mono::Net::CFString*))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_OP_IMPLICIT_OFFSET))(str);
		}

		static ::Mono::Net::CFString* op_Implicit_1(::System::String* str)
		{
			return ((::Mono::Net::CFString*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFSTRING_OP_IMPLICIT_1_OFFSET))(str);
		}
	};
}
