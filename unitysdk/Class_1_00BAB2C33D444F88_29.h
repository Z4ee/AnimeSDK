#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C6018135E54E36D_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_00BAB2C33D444F88_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9CAD20)
#define CLASS_1_00BAB2C33D444F88_29_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9CA960)
#define CLASS_1_00BAB2C33D444F88_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9CAA80)
#define CLASS_1_00BAB2C33D444F88_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9CA9A0)
#define CLASS_1_00BAB2C33D444F88_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9CAB30)
#define CLASS_1_00BAB2C33D444F88_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A9CAE60)
#define CLASS_1_00BAB2C33D444F88_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9CADC0)
#define CLASS_1_00BAB2C33D444F88_29_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A9CA850)
#define CLASS_1_00BAB2C33D444F88_29_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A9CA990)
#define CLASS_1_00BAB2C33D444F88_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9CA880)
#define CLASS_1_00BAB2C33D444F88_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9CAC10)
#define CLASS_1_00BAB2C33D444F88_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A9CAC70)
#define CLASS_1_00BAB2C33D444F88_29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9CB000)
#define CLASS_1_00BAB2C33D444F88_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9CA8D0)
#define CLASS_1_00BAB2C33D444F88_29__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9CA890)

inline static constexpr unsigned int Class_1_00BAB2C33D444F88_29_TypeDefinitionIndex = 31581;

class Class_1_00BAB2C33D444F88_29 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00BAB2C33D444F88_29_TypeDefinitionIndex)->GetStaticField(0x67790);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_29*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00BAB2C33D444F88_29_TypeDefinitionIndex)->GetStaticField(0x67798);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_00BAB2C33D444F88_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_29*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_29*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_29*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_00BAB2C33D444F88_29* Clone()
	{
		return ((::Class_1_00BAB2C33D444F88_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_00BAB2C33D444F88_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_00BAB2C33D444F88_29*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_00BAB2C33D444F88_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_29*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
