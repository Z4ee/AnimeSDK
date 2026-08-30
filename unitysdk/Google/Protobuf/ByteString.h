#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Text { class Encoding; }

#define GOOGLE_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET UNITYSDK_OFFSET(0x1B34B3F0)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROMUTF8_OFFSET UNITYSDK_OFFSET(0x1B34B9F0)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET UNITYSDK_OFFSET(0x1B34B790)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_2_OFFSET UNITYSDK_OFFSET(0x1B34B820)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_3_OFFSET UNITYSDK_OFFSET(0x1B34B940)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1B34B6A0)
#define GOOGLE_PROTOBUF_BYTESTRING_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B34C400)
#define GOOGLE_PROTOBUF_BYTESTRING_CREATECODEDINPUT_OFFSET UNITYSDK_OFFSET(0x1B34BCC0)
#define GOOGLE_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B34C1B0)
#define GOOGLE_PROTOBUF_BYTESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B34BFB0)
#define GOOGLE_PROTOBUF_BYTESTRING_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B34B470)
#define GOOGLE_PROTOBUF_BYTESTRING_FROMBASE64_OFFSET UNITYSDK_OFFSET(0x1B34B5C0)
#define GOOGLE_PROTOBUF_BYTESTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B34BB80)
#define GOOGLE_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B34C0C0)
#define GOOGLE_PROTOBUF_BYTESTRING_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B34B4F0)
#define GOOGLE_PROTOBUF_BYTESTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B34B520)
#define GOOGLE_PROTOBUF_BYTESTRING_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x1B34B530)
#define GOOGLE_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B34BE00)
#define GOOGLE_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B34BED0)
#define GOOGLE_PROTOBUF_BYTESTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B34BCB0)
#define GOOGLE_PROTOBUF_BYTESTRING_TOBASE64_OFFSET UNITYSDK_OFFSET(0x1B34B5A0)
#define GOOGLE_PROTOBUF_BYTESTRING_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B34B560)
#define GOOGLE_PROTOBUF_BYTESTRING_TOSTRINGUTF8_OFFSET UNITYSDK_OFFSET(0x1B34BAD0)
#define GOOGLE_PROTOBUF_BYTESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B34BA30)
#define GOOGLE_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET UNITYSDK_OFFSET(0x1B34C2B0)
#define GOOGLE_PROTOBUF_BYTESTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B34C490)
#define GOOGLE_PROTOBUF_BYTESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B34B440)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ByteString_TypeDefinitionIndex = 5360;

	class ByteString : public ::System::Object
	{
	public:
		static ::Google::Protobuf::ByteString** StaticGet_empty()
		{
			return (::Google::Protobuf::ByteString**)Il2CppClass::FromTypeDefinitionIndex(ByteString_TypeDefinitionIndex)->GetStaticField(0xFDE0);
		}
		::Il2CppArray<::System::Byte>* bytes; // 0x10
		::System::Int32 length; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::ByteString* AttachBytes(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET))(a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_FINALIZE_OFFSET))(this);
		}

		static ::Google::Protobuf::ByteString* get_Empty()
		{
			return ((::Google::Protobuf::ByteString*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GET_EMPTY_OFFSET))();
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GET_LENGTH_OFFSET))(this);
		}

		::System::ReadOnlyMemory_1<::System::Byte> get_Memory()
		{
			return ((::System::ReadOnlyMemory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GET_MEMORY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_TOBYTEARRAY_OFFSET))(this);
		}

		::System::String* ToBase64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_TOBASE64_OFFSET))(this);
		}

		static ::Google::Protobuf::ByteString* FromBase64(::System::String* a1)
		{
			return ((::Google::Protobuf::ByteString*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_FROMBASE64_OFFSET))(a1);
		}

		static ::Google::Protobuf::ByteString* CopyFrom(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Google::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_OFFSET))(a1);
		}

		static ::Google::Protobuf::ByteString* CopyFrom_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Google::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET))(a1, a2, a3);
		}

		static ::Google::Protobuf::ByteString* CopyFrom_2(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::Google::Protobuf::ByteString*(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_2_OFFSET))(a1);
		}

		static ::Google::Protobuf::ByteString* CopyFrom_3(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::Google::Protobuf::ByteString*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROM_3_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::ByteString* CopyFromUtf8(::System::String* a1)
		{
			return ((::Google::Protobuf::ByteString*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYFROMUTF8_OFFSET))(a1);
		}

		::System::String* ToString(::System::Text::Encoding* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToStringUtf8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_TOSTRINGUTF8_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Byte>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::Google::Protobuf::CodedInputStream* CreateCodedInput()
		{
			return ((::Google::Protobuf::CodedInputStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_CREATECODEDINPUT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Google::Protobuf::ByteString* a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::ByteString*, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::Google::Protobuf::ByteString* a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::ByteString*, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void WriteRawBytesTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_BYTESTRING_COPYTO_OFFSET))(this, a1, a2);
		}
	};
}
