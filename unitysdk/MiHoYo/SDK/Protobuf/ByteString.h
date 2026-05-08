#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYO_SDK_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET UNITYSDK_OFFSET(0x1C28A180)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET UNITYSDK_OFFSET(0x1C28A3E0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1C28A2D0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_CREATECODEDINPUT_OFFSET UNITYSDK_OFFSET(0x1C28A540)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C28A860)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C28A6E0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C28A450)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C28A7D0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1C28A1D0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C28A230)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C28A590)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C28A620)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C28A530)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_TOBASE64_OFFSET UNITYSDK_OFFSET(0x1C28A250)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET UNITYSDK_OFFSET(0x1C28A940)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C28A980)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C28A1C0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int ByteString_TypeDefinitionIndex = 25953;

	class ByteString : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::ByteString** StaticGet_empty()
		{
			return (::MiHoYo::SDK::Protobuf::ByteString**)Il2CppClass::FromTypeDefinitionIndex(ByteString_TypeDefinitionIndex)->GetStaticField(0x1F1B0);
		}
		::Il2CppArray<::System::Byte>* bytes; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING__CTOR_OFFSET))(this, bytes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::ByteString* AttachBytes(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET))(bytes);
		}

		static ::MiHoYo::SDK::Protobuf::ByteString* get_Empty()
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_GET_EMPTY_OFFSET))();
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_GET_LENGTH_OFFSET))(this);
		}

		::System::String* ToBase64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_TOBASE64_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Protobuf::ByteString* CopyFrom(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_OFFSET))(bytes);
		}

		static ::MiHoYo::SDK::Protobuf::ByteString* CopyFrom_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET))(bytes, offset, count);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Byte>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::CodedInputStream* CreateCodedInput()
		{
			return ((::MiHoYo::SDK::Protobuf::CodedInputStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_CREATECODEDINPUT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::MiHoYo::SDK::Protobuf::ByteString* lhs, ::MiHoYo::SDK::Protobuf::ByteString* rhs)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Protobuf::ByteString*, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MiHoYo::SDK::Protobuf::ByteString* lhs, ::MiHoYo::SDK::Protobuf::ByteString* rhs)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Protobuf::ByteString*, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::ByteString* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET))(this, other);
		}

		::System::Void WriteRawBytesTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* outputStream)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET))(this, outputStream);
		}
	};
}
