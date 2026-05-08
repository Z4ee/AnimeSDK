#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_COPYTO_OFFSET UNITYSDK_OFFSET(0x996FF0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x997020)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x997030)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x997100)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x997010)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x997110)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_GET_BYTECOUNT_OFFSET UNITYSDK_OFFSET(0x996FC0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x50CC50)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B87D910)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B87D9E0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_REPLACEBUFFER_OFFSET UNITYSDK_OFFSET(0x996FD0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x997120)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B87DAB0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x996FA0)
#define SIRENIX_SERIALIZATION_BUFFEREDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x996F50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BufferedString_TypeDefinitionIndex = 7461;

	struct alignas(8) BufferedString
	{
		static ::Sirenix::Serialization::BufferedString* StaticGet_Empty()
		{
			return (::Sirenix::Serialization::BufferedString*)Il2CppClass::FromTypeDefinitionIndex(BufferedString_TypeDefinitionIndex)->GetStaticField(0x6090);
		}
		::System::Object* Data; // 0x10
		::System::Int32 ByteOffset; // 0x18
		::System::Int32 CharCount; // 0x1C

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* bufferLE, ::System::Int32 byteOffset, ::System::Int32 charCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING__CTOR_1_OFFSET))(this, bufferLE, byteOffset, charCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Int32 get_ByteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_GET_BYTECOUNT_OFFSET))(this);
		}

		::Sirenix::Serialization::BufferedString ReplaceBuffer(::Il2CppArray<::System::Byte>* newBuffer)
		{
			return ((::Sirenix::Serialization::BufferedString(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_REPLACEBUFFER_OFFSET))(this, newBuffer);
		}

		::Sirenix::Serialization::BufferedString CopyTo(::Il2CppArray<::System::Byte>* dstArray, ::System::Int32 dstOffset)
		{
			return ((::Sirenix::Serialization::BufferedString(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_COPYTO_OFFSET))(this, dstArray, dstOffset);
		}

		::System::Boolean Equals(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_OFFSET))(this, name);
		}

		::System::Boolean Equals_1(::Il2CppArray<::System::Byte>* bufferLE, ::System::Int32 byteOffset, ::System::Int32 charCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_1_OFFSET))(this, bufferLE, byteOffset, charCount);
		}

		::System::Boolean Equals_2(::Sirenix::Serialization::BufferedString other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Sirenix::Serialization::BufferedString))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_2_OFFSET))(this, other);
		}

		::System::Boolean Equals_3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_EQUALS_3_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Sirenix::Serialization::BufferedString a, ::Sirenix::Serialization::BufferedString b)
		{
			return ((::System::Boolean(*)(::Sirenix::Serialization::BufferedString, ::Sirenix::Serialization::BufferedString))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Sirenix::Serialization::BufferedString a, ::Sirenix::Serialization::BufferedString b)
		{
			return ((::System::Boolean(*)(::Sirenix::Serialization::BufferedString, ::Sirenix::Serialization::BufferedString))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BUFFEREDSTRING_OP_INEQUALITY_OFFSET))(a, b);
		}
	};
}
