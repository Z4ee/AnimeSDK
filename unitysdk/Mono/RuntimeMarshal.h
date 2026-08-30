#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/MonoAssemblyName.h"
#include "unitysdk/Mono/SafeStringMarshal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_RUNTIMEMARSHAL_ASCIHEXDIGITVALUE_OFFSET UNITYSDK_OFFSET(0x1BB612E0)
#define MONO_RUNTIMEMARSHAL_DECODEBLOBARRAY_OFFSET UNITYSDK_OFFSET(0x1BB61250)
#define MONO_RUNTIMEMARSHAL_DECODEBLOBSIZE_OFFSET UNITYSDK_OFFSET(0x1BB611E0)
#define MONO_RUNTIMEMARSHAL_FREEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1BB61310)
#define MONO_RUNTIMEMARSHAL_MARSHALSTRING_OFFSET UNITYSDK_OFFSET(0x1BB611C0)
#define MONO_RUNTIMEMARSHAL_PTRTOUTF8STRING_OFFSET UNITYSDK_OFFSET(0x1BB61130)

namespace Mono
{
	inline static constexpr unsigned int RuntimeMarshal_TypeDefinitionIndex = 11;

	class RuntimeMarshal : public ::System::Object
	{
	public:
		static ::System::String* PtrToUtf8String(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_PTRTOUTF8STRING_OFFSET))(a1);
		}

		static ::Mono::SafeStringMarshal MarshalString(::System::String* a1)
		{
			return ((::Mono::SafeStringMarshal(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_MARSHALSTRING_OFFSET))(a1);
		}

		static ::System::Int32 DecodeBlobSize(::System::IntPtr a1, ::System::IntPtr& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_DECODEBLOBSIZE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* DecodeBlobArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_DECODEBLOBARRAY_OFFSET))(a1);
		}

		static ::System::Int32 AsciHexDigitValue(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_ASCIHEXDIGITVALUE_OFFSET))(a1);
		}

		static ::System::Void FreeAssemblyName(::Mono::MonoAssemblyName& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::Mono::MonoAssemblyName&, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_FREEASSEMBLYNAME_OFFSET))(a1, a2);
		}
	};
}
