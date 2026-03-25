#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1660DAA49693852E_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1818CDC0)
#define CLASS_1_E7C4009BCC22497A_17_CLONE_OFFSET UNITYSDK_OFFSET(0x1818C9A0)
#define CLASS_1_E7C4009BCC22497A_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1818CB10)
#define CLASS_1_E7C4009BCC22497A_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1818CA00)
#define CLASS_1_E7C4009BCC22497A_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1818CBC0)
#define CLASS_1_E7C4009BCC22497A_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1818CF00)
#define CLASS_1_E7C4009BCC22497A_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1818CE60)
#define CLASS_1_E7C4009BCC22497A_17_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1818C9F0)
#define CLASS_1_E7C4009BCC22497A_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1818C890)
#define CLASS_1_E7C4009BCC22497A_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1818CCB0)
#define CLASS_1_E7C4009BCC22497A_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1818CD10)
#define CLASS_1_E7C4009BCC22497A_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818CFE0)
#define CLASS_1_E7C4009BCC22497A_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1818C8F0)
#define CLASS_1_E7C4009BCC22497A_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1818C8A0)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_17_TypeDefinitionIndex = 24370;

class Class_1_E7C4009BCC22497A_17 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1660DAA49693852E_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1660DAA49693852E_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_17_TypeDefinitionIndex)->GetStaticField(0xC6C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1660DAA49693852E_1*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_17*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_17* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1660DAA49693852E_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1660DAA49693852E_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_17*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_17*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
