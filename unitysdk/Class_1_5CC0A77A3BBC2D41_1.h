#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_84F790F6B4BFF34E_1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5CC0A77A3BBC2D41_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ABCF20)
#define CLASS_1_5CC0A77A3BBC2D41_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17ABCB70)
#define CLASS_1_5CC0A77A3BBC2D41_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ABCCC0)
#define CLASS_1_5CC0A77A3BBC2D41_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ABCBD0)
#define CLASS_1_5CC0A77A3BBC2D41_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ABCD70)
#define CLASS_1_5CC0A77A3BBC2D41_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ABD0D0)
#define CLASS_1_5CC0A77A3BBC2D41_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ABD030)
#define CLASS_1_5CC0A77A3BBC2D41_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17ABCBA0)
#define CLASS_1_5CC0A77A3BBC2D41_1_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x17ABCBC0)
#define CLASS_1_5CC0A77A3BBC2D41_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17ABCBB0)
#define CLASS_1_5CC0A77A3BBC2D41_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ABCA90)
#define CLASS_1_5CC0A77A3BBC2D41_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ABCDE0)
#define CLASS_1_5CC0A77A3BBC2D41_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ABCE40)
#define CLASS_1_5CC0A77A3BBC2D41_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ABD190)
#define CLASS_1_5CC0A77A3BBC2D41_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ABCAE0)
#define CLASS_1_5CC0A77A3BBC2D41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17ABCAA0)

inline static constexpr unsigned int Class_1_5CC0A77A3BBC2D41_1_TypeDefinitionIndex = 23465;

class Class_1_5CC0A77A3BBC2D41_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_84F790F6B4BFF34E_1>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_84F790F6B4BFF34E_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC0A77A3BBC2D41_1_TypeDefinitionIndex)->GetStaticField(0x22AA0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_84F790F6B4BFF34E_1>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5CC0A77A3BBC2D41_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CC0A77A3BBC2D41_1*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5CC0A77A3BBC2D41_1* Clone()
	{
		return ((::Class_1_5CC0A77A3BBC2D41_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_84F790F6B4BFF34E_1>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_84F790F6B4BFF34E_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5CC0A77A3BBC2D41_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5CC0A77A3BBC2D41_1*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5CC0A77A3BBC2D41_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CC0A77A3BBC2D41_1*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
