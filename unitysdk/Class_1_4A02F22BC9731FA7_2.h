#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69EEE63CE134E1EF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4A02F22BC9731FA7_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A71260)
#define CLASS_1_4A02F22BC9731FA7_2_CLONE_OFFSET UNITYSDK_OFFSET(0x19A70EC0)
#define CLASS_1_4A02F22BC9731FA7_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A70FE0)
#define CLASS_1_4A02F22BC9731FA7_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A70F00)
#define CLASS_1_4A02F22BC9731FA7_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A71090)
#define CLASS_1_4A02F22BC9731FA7_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A713A0)
#define CLASS_1_4A02F22BC9731FA7_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A71300)
#define CLASS_1_4A02F22BC9731FA7_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19A70DB0)
#define CLASS_1_4A02F22BC9731FA7_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19A70EF0)
#define CLASS_1_4A02F22BC9731FA7_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A70DE0)
#define CLASS_1_4A02F22BC9731FA7_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A71180)
#define CLASS_1_4A02F22BC9731FA7_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A711E0)
#define CLASS_1_4A02F22BC9731FA7_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A71480)
#define CLASS_1_4A02F22BC9731FA7_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A70E30)
#define CLASS_1_4A02F22BC9731FA7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19A70DF0)

inline static constexpr unsigned int Class_1_4A02F22BC9731FA7_2_TypeDefinitionIndex = 32180;

class Class_1_4A02F22BC9731FA7_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4A02F22BC9731FA7_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4A02F22BC9731FA7_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A02F22BC9731FA7_2_TypeDefinitionIndex)->GetStaticField(0x50710);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_69EEE63CE134E1EF*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_69EEE63CE134E1EF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A02F22BC9731FA7_2_TypeDefinitionIndex)->GetStaticField(0x50718);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69EEE63CE134E1EF*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4A02F22BC9731FA7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A02F22BC9731FA7_2*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4A02F22BC9731FA7_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4A02F22BC9731FA7_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4A02F22BC9731FA7_2* Clone()
	{
		return ((::Class_1_4A02F22BC9731FA7_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69EEE63CE134E1EF*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69EEE63CE134E1EF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4A02F22BC9731FA7_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4A02F22BC9731FA7_2*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4A02F22BC9731FA7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A02F22BC9731FA7_2*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
