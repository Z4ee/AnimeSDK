#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_64.h"
#include "unitysdk/System/Object.h"

class Class_1_E9FAC3539FD8861A_18;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A21ACB7E0A72D3E4_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DC1700)
#define CLASS_1_A21ACB7E0A72D3E4_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17DC1250)
#define CLASS_1_A21ACB7E0A72D3E4_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DC13D0)
#define CLASS_1_A21ACB7E0A72D3E4_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DC12D0)
#define CLASS_1_A21ACB7E0A72D3E4_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DC1490)
#define CLASS_1_A21ACB7E0A72D3E4_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DC1980)
#define CLASS_1_A21ACB7E0A72D3E4_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DC18D0)
#define CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DC12B0)
#define CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17DC1290)
#define CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17DC12A0)
#define CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DC12C0)
#define CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17DC1280)
#define CLASS_1_A21ACB7E0A72D3E4_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DC1160)
#define CLASS_1_A21ACB7E0A72D3E4_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DC1590)
#define CLASS_1_A21ACB7E0A72D3E4_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DC15F0)
#define CLASS_1_A21ACB7E0A72D3E4_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DC1A50)
#define CLASS_1_A21ACB7E0A72D3E4_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DC11B0)
#define CLASS_1_A21ACB7E0A72D3E4_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC1170)

inline static constexpr unsigned int Class_1_A21ACB7E0A72D3E4_5_TypeDefinitionIndex = 26635;

class Class_1_A21ACB7E0A72D3E4_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E9FAC3539FD8861A_18*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E9FAC3539FD8861A_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A21ACB7E0A72D3E4_5_TypeDefinitionIndex)->GetStaticField(0x1A100);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_18*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::Enum_3_0A3761FE34514D6C_64 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A21ACB7E0A72D3E4_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_5*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A21ACB7E0A72D3E4_5* Clone()
	{
		return ((::Class_1_A21ACB7E0A72D3E4_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_64 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_64))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_18*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_18*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A21ACB7E0A72D3E4_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_5*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A21ACB7E0A72D3E4_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_5*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
