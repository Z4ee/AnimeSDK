#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYO_SDK_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET UNITYSDK_OFFSET(0x1B0CEE70)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET UNITYSDK_OFFSET(0x1B0CF0A0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1B0CEF90)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_CREATECODEDINPUT_OFFSET UNITYSDK_OFFSET(0x1B0CF250)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B0CF730)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B0CF5B0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B0CF110)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B0CF6A0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B0CEEC0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B0CEF20)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B0CF460)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B0CF4F0)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B0CF240)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_TOBASE64_OFFSET UNITYSDK_OFFSET(0x1B0CEF40)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET UNITYSDK_OFFSET(0x1B0CF810)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0CF970)
#define MIHOYO_SDK_PROTOBUF_BYTESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0CEEB0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int ByteString_TypeDefinitionIndex = 35041;

	class ByteString : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::ByteString** StaticGet_empty()
		{
			return (::MiHoYo::SDK::Protobuf::ByteString**)Il2CppClass::FromTypeDefinitionIndex(ByteString_TypeDefinitionIndex)->GetStaticField(0x47850);
		}
		::Il2CppArray<::System::Byte>* bytes; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::ByteString* AttachBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_ATTACHBYTES_OFFSET))(a1);
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

		static ::MiHoYo::SDK::Protobuf::ByteString* CopyFrom(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::Protobuf::ByteString* CopyFrom_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_COPYFROM_1_OFFSET))(a1, a2, a3);
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

		static ::System::Boolean op_Equality(::MiHoYo::SDK::Protobuf::ByteString* a1, ::MiHoYo::SDK::Protobuf::ByteString* a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Protobuf::ByteString*, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::MiHoYo::SDK::Protobuf::ByteString* a1, ::MiHoYo::SDK::Protobuf::ByteString* a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Protobuf::ByteString*, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::ByteString* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void WriteRawBytesTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_BYTESTRING_WRITERAWBYTESTO_OFFSET))(this, a1);
		}
	};
}
