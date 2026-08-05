#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/MonoAssemblyName.h"
#include "unitysdk/Mono/SafeStringMarshal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_RUNTIMEMARSHAL_ASCIHEXDIGITVALUE_OFFSET UNITYSDK_OFFSET(0x1D66DC80)
#define MONO_RUNTIMEMARSHAL_DECODEBLOBARRAY_OFFSET UNITYSDK_OFFSET(0x1D66DBD0)
#define MONO_RUNTIMEMARSHAL_DECODEBLOBSIZE_OFFSET UNITYSDK_OFFSET(0x1D66DB60)
#define MONO_RUNTIMEMARSHAL_FREEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1D66DCB0)
#define MONO_RUNTIMEMARSHAL_MARSHALSTRING_OFFSET UNITYSDK_OFFSET(0x1D66DB50)
#define MONO_RUNTIMEMARSHAL_PTRTOUTF8STRING_OFFSET UNITYSDK_OFFSET(0x1D66DA10)

namespace Mono
{
	inline static constexpr unsigned int RuntimeMarshal_TypeDefinitionIndex = 14;

	class RuntimeMarshal : public ::System::Object
	{
	public:
		static ::System::String* PtrToUtf8String(::System::IntPtr ptr)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_PTRTOUTF8STRING_OFFSET))(ptr);
		}

		static ::Mono::SafeStringMarshal MarshalString(::System::String* str)
		{
			return ((::Mono::SafeStringMarshal(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_MARSHALSTRING_OFFSET))(str);
		}

		static ::System::Int32 DecodeBlobSize(::System::IntPtr in_ptr, ::System::IntPtr& out_ptr)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_DECODEBLOBSIZE_OFFSET))(in_ptr, out_ptr);
		}

		static ::Il2CppArray<::System::Byte>* DecodeBlobArray(::System::IntPtr ptr)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_DECODEBLOBARRAY_OFFSET))(ptr);
		}

		static ::System::Int32 AsciHexDigitValue(::System::Int32 c)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_ASCIHEXDIGITVALUE_OFFSET))(c);
		}

		static ::System::Void FreeAssemblyName(::Mono::MonoAssemblyName& name, ::System::Boolean freeStruct)
		{
			return ((::System::Void(*)(::Mono::MonoAssemblyName&, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_FREEASSEMBLYNAME_OFFSET))(name, freeStruct);
		}
	};
}
