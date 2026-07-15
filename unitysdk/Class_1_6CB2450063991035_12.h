#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_56;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6CB2450063991035_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9363E0)
#define CLASS_1_6CB2450063991035_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1C935EE0)
#define CLASS_1_6CB2450063991035_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C935F90)
#define CLASS_1_6CB2450063991035_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C935F60)
#define CLASS_1_6CB2450063991035_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C936170)
#define CLASS_1_6CB2450063991035_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C936670)
#define CLASS_1_6CB2450063991035_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C936540)
#define CLASS_1_6CB2450063991035_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C935F40)
#define CLASS_1_6CB2450063991035_12_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C935F20)
#define CLASS_1_6CB2450063991035_12_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C935D80)
#define CLASS_1_6CB2450063991035_12_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C935F10)
#define CLASS_1_6CB2450063991035_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C935F50)
#define CLASS_1_6CB2450063991035_12_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C935F30)
#define CLASS_1_6CB2450063991035_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C935DB0)
#define CLASS_1_6CB2450063991035_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C936210)
#define CLASS_1_6CB2450063991035_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C936270)
#define CLASS_1_6CB2450063991035_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C936870)
#define CLASS_1_6CB2450063991035_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C935E00)
#define CLASS_1_6CB2450063991035_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1C935DC0)

inline static constexpr unsigned int Class_1_6CB2450063991035_12_TypeDefinitionIndex = 29556;

class Class_1_6CB2450063991035_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_56*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB2450063991035_12_TypeDefinitionIndex)->GetStaticField(0x5E3C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035_12*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB2450063991035_12_TypeDefinitionIndex)->GetStaticField(0x5E3C8);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_56*>* Field_1_5; // 0x10
	::Class_1_1CBA230307F9C289_56* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6CB2450063991035_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB2450063991035_12*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035_12*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6CB2450063991035_12* Clone()
	{
		return ((::Class_1_6CB2450063991035_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_56*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_56*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_56* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1CBA230307F9C289_56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1CBA230307F9C289_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_56*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6CB2450063991035_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6CB2450063991035_12*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6CB2450063991035_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB2450063991035_12*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
