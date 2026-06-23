#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_UTILITIES_UNSAFE_UNSAFEUTILITIES_MEMORYCOPY_1_OFFSET UNITYSDK_OFFSET(0x1E84BA90)
#define SIRENIX_SERIALIZATION_UTILITIES_UNSAFE_UNSAFEUTILITIES_MEMORYCOPY_OFFSET UNITYSDK_OFFSET(0x1E84B9D0)
#define SIRENIX_SERIALIZATION_UTILITIES_UNSAFE_UNSAFEUTILITIES_STRINGFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1E84AEF0)
#define SIRENIX_SERIALIZATION_UTILITIES_UNSAFE_UNSAFEUTILITIES_STRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0x1E84B4B0)

namespace Sirenix::Serialization::Utilities::Unsafe
{
	inline static constexpr unsigned int UnsafeUtilities_TypeDefinitionIndex = 7662;

	class UnsafeUtilities : public ::System::Object
	{
	public:
		static ::System::String* StringFromBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 charLength, ::System::Boolean needs16BitSupport)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_UNSAFE_UNSAFEUTILITIES_STRINGFROMBYTES_OFFSET))(buffer, charLength, needs16BitSupport);
		}

		static ::System::Int32 StringToBytes(::Il2CppArray<::System::Byte>* buffer, ::System::String* value, ::System::Boolean needs16BitSupport)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_UNSAFE_UNSAFEUTILITIES_STRINGTOBYTES_OFFSET))(buffer, value, needs16BitSupport);
		}

		static ::System::Void MemoryCopy(::System::Void* from, ::System::Void* to, ::System::Int32 bytes)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_UNSAFE_UNSAFEUTILITIES_MEMORYCOPY_OFFSET))(from, to, bytes);
		}

		static ::System::Void MemoryCopy_1(::System::Object* from, ::System::Object* to, ::System::Int32 byteCount, ::System::Int32 fromByteOffset, ::System::Int32 toByteOffset)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_UNSAFE_UNSAFEUTILITIES_MEMORYCOPY_1_OFFSET))(from, to, byteCount, fromByteOffset, toByteOffset);
		}
	};
}
