#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_21;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4FE6DADC546DF06C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A60C450)
#define CLASS_1_4FE6DADC546DF06C_CLONE_OFFSET UNITYSDK_OFFSET(0x1A60BEE0)
#define CLASS_1_4FE6DADC546DF06C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A60BFC0)
#define CLASS_1_4FE6DADC546DF06C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A60BF90)
#define CLASS_1_4FE6DADC546DF06C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A60C0D0)
#define CLASS_1_4FE6DADC546DF06C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A60C7A0)
#define CLASS_1_4FE6DADC546DF06C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A60C6C0)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A60BF40)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A60BF70)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A60BF20)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A60BF10)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A60BD30)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A60BF60)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A60BF50)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A60BF80)
#define CLASS_1_4FE6DADC546DF06C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A60BF30)
#define CLASS_1_4FE6DADC546DF06C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A60BD60)
#define CLASS_1_4FE6DADC546DF06C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A60C290)
#define CLASS_1_4FE6DADC546DF06C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A60C2F0)
#define CLASS_1_4FE6DADC546DF06C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A60C900)
#define CLASS_1_4FE6DADC546DF06C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A60BDE0)
#define CLASS_1_4FE6DADC546DF06C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60BD70)

inline static constexpr unsigned int Class_1_4FE6DADC546DF06C_TypeDefinitionIndex = 26938;

class Class_1_4FE6DADC546DF06C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4FE6DADC546DF06C_TypeDefinitionIndex)->GetStaticField(0x23D30);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4FE6DADC546DF06C*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4FE6DADC546DF06C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4FE6DADC546DF06C_TypeDefinitionIndex)->GetStaticField(0x23D38);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4FE6DADC546DF06C_TypeDefinitionIndex)->GetStaticField(0x23D40);
	}
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_21*>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::UInt32 Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4FE6DADC546DF06C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4FE6DADC546DF06C*))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4FE6DADC546DF06C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4FE6DADC546DF06C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4FE6DADC546DF06C* Clone()
	{
		return ((::Class_1_4FE6DADC546DF06C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_21*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4FE6DADC546DF06C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4FE6DADC546DF06C*))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4FE6DADC546DF06C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4FE6DADC546DF06C*))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4FE6DADC546DF06C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
