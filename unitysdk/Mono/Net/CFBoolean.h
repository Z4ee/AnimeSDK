#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_NET_CFBOOLEAN_CFBOOLEANGETVALUE_OFFSET UNITYSDK_OFFSET(0x1A3111F0)
#define MONO_NET_CFBOOLEAN_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A310E60)
#define MONO_NET_CFBOOLEAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A310DB0)
#define MONO_NET_CFBOOLEAN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A310D30)
#define MONO_NET_CFBOOLEAN_FROMBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1A311180)
#define MONO_NET_CFBOOLEAN_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A311270)
#define MONO_NET_CFBOOLEAN_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1A310DA0)
#define MONO_NET_CFBOOLEAN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A310FE0)
#define MONO_NET_CFBOOLEAN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1A3110D0)
#define MONO_NET_CFBOOLEAN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A310EF0)
#define MONO_NET_CFBOOLEAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A310880)
#define MONO_NET_CFBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A310CA0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFBoolean_TypeDefinitionIndex = 2604;

	class CFBoolean : public ::System::Object
	{
	public:
		static ::Mono::Net::CFBoolean** StaticGet_True()
		{
			return (::Mono::Net::CFBoolean**)Il2CppClass::FromTypeDefinitionIndex(CFBoolean_TypeDefinitionIndex)->GetStaticField(0x31F0);
		}
		static ::Mono::Net::CFBoolean** StaticGet_False()
		{
			return (::Mono::Net::CFBoolean**)Il2CppClass::FromTypeDefinitionIndex(CFBoolean_TypeDefinitionIndex)->GetStaticField(0x31F8);
		}
		::System::IntPtr handle; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean owns)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN__CTOR_OFFSET))(this, handle, owns);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_FINALIZE_OFFSET))(this);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_GET_HANDLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::Boolean op_Implicit(::Mono::Net::CFBoolean* value)
		{
			return ((::System::Boolean(*)(::Mono::Net::CFBoolean*))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Mono::Net::CFBoolean* op_Explicit(::System::Boolean value)
		{
			return ((::Mono::Net::CFBoolean*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_OP_EXPLICIT_OFFSET))(value);
		}

		static ::Mono::Net::CFBoolean* FromBoolean(::System::Boolean value)
		{
			return ((::Mono::Net::CFBoolean*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_FROMBOOLEAN_OFFSET))(value);
		}

		static ::System::Boolean CFBooleanGetValue(::System::IntPtr boolean)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_CFBOOLEANGETVALUE_OFFSET))(boolean);
		}

		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_GET_VALUE_OFFSET))(this);
		}

		static ::System::Boolean GetValue(::System::IntPtr boolean)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFBOOLEAN_GETVALUE_OFFSET))(boolean);
		}
	};
}
