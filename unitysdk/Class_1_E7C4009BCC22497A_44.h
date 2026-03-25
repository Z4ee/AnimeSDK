#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9D5608F598A30CAC_21;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D42F80)
#define CLASS_1_E7C4009BCC22497A_44_CLONE_OFFSET UNITYSDK_OFFSET(0x17D42B60)
#define CLASS_1_E7C4009BCC22497A_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D42CD0)
#define CLASS_1_E7C4009BCC22497A_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D42BC0)
#define CLASS_1_E7C4009BCC22497A_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D42D80)
#define CLASS_1_E7C4009BCC22497A_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D430C0)
#define CLASS_1_E7C4009BCC22497A_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D43020)
#define CLASS_1_E7C4009BCC22497A_44_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17D42BB0)
#define CLASS_1_E7C4009BCC22497A_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D42A50)
#define CLASS_1_E7C4009BCC22497A_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D42E70)
#define CLASS_1_E7C4009BCC22497A_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D42ED0)
#define CLASS_1_E7C4009BCC22497A_44__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D431A0)
#define CLASS_1_E7C4009BCC22497A_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D42AB0)
#define CLASS_1_E7C4009BCC22497A_44__CTOR_OFFSET UNITYSDK_OFFSET(0x17D42A60)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_44_TypeDefinitionIndex = 25108;

class Class_1_E7C4009BCC22497A_44 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9D5608F598A30CAC_21*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9D5608F598A30CAC_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_44_TypeDefinitionIndex)->GetStaticField(0x128E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_21*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_44*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_44* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_21*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_44*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_44*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};
