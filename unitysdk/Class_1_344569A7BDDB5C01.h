#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_87;
class Class_1_21C7581DFE99F091_88;
class Class_1_53763D498DB8321D_5;
class Class_1_D17272E82AE804C2_852;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_344569A7BDDB5C01_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AAA1B50)
#define CLASS_1_344569A7BDDB5C01_CLONE_OFFSET UNITYSDK_OFFSET(0x1AAA14E0)
#define CLASS_1_344569A7BDDB5C01_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AAA1580)
#define CLASS_1_344569A7BDDB5C01_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AAA1550)
#define CLASS_1_344569A7BDDB5C01_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AAA16C0)
#define CLASS_1_344569A7BDDB5C01_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AAA1E30)
#define CLASS_1_344569A7BDDB5C01_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AAA1C90)
#define CLASS_1_344569A7BDDB5C01_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AAA12A0)
#define CLASS_1_344569A7BDDB5C01_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1AAA1520)
#define CLASS_1_344569A7BDDB5C01_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1AAA1530)
#define CLASS_1_344569A7BDDB5C01_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1AAA1540)
#define CLASS_1_344569A7BDDB5C01_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AAA1510)
#define CLASS_1_344569A7BDDB5C01_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AAA12D0)
#define CLASS_1_344569A7BDDB5C01_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AAA19A0)
#define CLASS_1_344569A7BDDB5C01_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AAA1A00)
#define CLASS_1_344569A7BDDB5C01__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAA2000)
#define CLASS_1_344569A7BDDB5C01__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AAA1380)
#define CLASS_1_344569A7BDDB5C01__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAA12E0)

inline static constexpr unsigned int Class_1_344569A7BDDB5C01_TypeDefinitionIndex = 31388;

class Class_1_344569A7BDDB5C01 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_87*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_87*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_344569A7BDDB5C01_TypeDefinitionIndex)->GetStaticField(0xCC50);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_852*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_852*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_344569A7BDDB5C01_TypeDefinitionIndex)->GetStaticField(0xCC58);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_53763D498DB8321D_5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_53763D498DB8321D_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_344569A7BDDB5C01_TypeDefinitionIndex)->GetStaticField(0xCC60);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_344569A7BDDB5C01*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_344569A7BDDB5C01*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_344569A7BDDB5C01_TypeDefinitionIndex)->GetStaticField(0xCC68);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_88*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_344569A7BDDB5C01_TypeDefinitionIndex)->GetStaticField(0xCC70);
	}
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_87*>* Field_1_9; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_852*>* Field_1_11; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_88*>* Field_1_12; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_5*>* Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_344569A7BDDB5C01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_344569A7BDDB5C01*))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_344569A7BDDB5C01*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_344569A7BDDB5C01*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_344569A7BDDB5C01* Clone()
	{
		return ((::Class_1_344569A7BDDB5C01*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_852*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_852*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_87*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_5*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_88*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_88*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_344569A7BDDB5C01* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_344569A7BDDB5C01*))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_344569A7BDDB5C01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_344569A7BDDB5C01*))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_344569A7BDDB5C01_MERGEFROM_1_OFFSET))(this, a1);
	}
};
