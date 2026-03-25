#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0313D5D4D9EE076;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B1C2D0)
#define CLASS_1_E7C4009BCC22497A_27_CLONE_OFFSET UNITYSDK_OFFSET(0x17B1BEB0)
#define CLASS_1_E7C4009BCC22497A_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B1C020)
#define CLASS_1_E7C4009BCC22497A_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B1BF10)
#define CLASS_1_E7C4009BCC22497A_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B1C0D0)
#define CLASS_1_E7C4009BCC22497A_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B1C410)
#define CLASS_1_E7C4009BCC22497A_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B1C370)
#define CLASS_1_E7C4009BCC22497A_27_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B1BF00)
#define CLASS_1_E7C4009BCC22497A_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B1BDA0)
#define CLASS_1_E7C4009BCC22497A_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B1C1C0)
#define CLASS_1_E7C4009BCC22497A_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B1C220)
#define CLASS_1_E7C4009BCC22497A_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B1C4F0)
#define CLASS_1_E7C4009BCC22497A_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B1BE00)
#define CLASS_1_E7C4009BCC22497A_27__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1BDB0)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_27_TypeDefinitionIndex = 24495;

class Class_1_E7C4009BCC22497A_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F0313D5D4D9EE076*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F0313D5D4D9EE076*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_27_TypeDefinitionIndex)->GetStaticField(0x351C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F0313D5D4D9EE076*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_27*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_27* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F0313D5D4D9EE076*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F0313D5D4D9EE076*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_27*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_27*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
