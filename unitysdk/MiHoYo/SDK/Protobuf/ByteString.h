#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYO_SDK_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET UNITYSDK_OFFSET(0x1E5DA1B0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5DA410)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1E5DA300)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_CREATECODEDINPUT_OFFSET UNITYSDK_OFFSET(0x1E5DA570)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5DA890)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5DA710)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E5DA480)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5DA800)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1E5DA200)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E5DA260)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E5DA5C0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E5DA650)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E5DA560)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_TOBASE64_OFFSET UNITYSDK_OFFSET(0x1E5DA280)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET UNITYSDK_OFFSET(0x1E5DA970)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DA9B0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DA1F0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int ByteString_TypeDefinitionIndex = 28447;

	class ByteString : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::ByteString** StaticGet_empty()
		{
			return (::MiHoYo::SDK::Protobuf::ByteString**)Il2CppClass::FromTypeDefinitionIndex(ByteString_TypeDefinitionIndex)->GetStaticField(0x22DE0);
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
