#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_905995C4C61F81F7_13;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_59_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1945CD40)
#define CLASS_1_D40936EF3BF54118_59_CLONE_OFFSET UNITYSDK_OFFSET(0x1945C970)
#define CLASS_1_D40936EF3BF54118_59_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1945CA90)
#define CLASS_1_D40936EF3BF54118_59_EQUALS_OFFSET UNITYSDK_OFFSET(0x1945C9B0)
#define CLASS_1_D40936EF3BF54118_59_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1945CB40)
#define CLASS_1_D40936EF3BF54118_59_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1945CE80)
#define CLASS_1_D40936EF3BF54118_59_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1945CDE0)
#define CLASS_1_D40936EF3BF54118_59_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1945C830)
#define CLASS_1_D40936EF3BF54118_59_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1945C9A0)
#define CLASS_1_D40936EF3BF54118_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1945C860)
#define CLASS_1_D40936EF3BF54118_59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1945CC30)
#define CLASS_1_D40936EF3BF54118_59_WRITETO_OFFSET UNITYSDK_OFFSET(0x1945CC90)
#define CLASS_1_D40936EF3BF54118_59__CCTOR_OFFSET UNITYSDK_OFFSET(0x1945CF60)
#define CLASS_1_D40936EF3BF54118_59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1945C8C0)
#define CLASS_1_D40936EF3BF54118_59__CTOR_OFFSET UNITYSDK_OFFSET(0x1945C870)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_59_TypeDefinitionIndex = 29335;

class Class_1_D40936EF3BF54118_59 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_905995C4C61F81F7_13*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_905995C4C61F81F7_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_59_TypeDefinitionIndex)->GetStaticField(0x17080);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_59*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_59_TypeDefinitionIndex)->GetStaticField(0x17088);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_905995C4C61F81F7_13*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_59*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_59*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_59* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_59*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_905995C4C61F81F7_13*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_905995C4C61F81F7_13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_59_MERGEFROM_1_OFFSET))(this, a1);
	}
};
