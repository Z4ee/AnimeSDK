#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B21DCD6EBA71A939_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E77410)
#define CLASS_1_B21DCD6EBA71A939_CLONE_OFFSET UNITYSDK_OFFSET(0x17E76F90)
#define CLASS_1_B21DCD6EBA71A939_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E77130)
#define CLASS_1_B21DCD6EBA71A939_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E77010)
#define CLASS_1_B21DCD6EBA71A939_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E771E0)
#define CLASS_1_B21DCD6EBA71A939_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E77610)
#define CLASS_1_B21DCD6EBA71A939_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E77570)
#define CLASS_1_B21DCD6EBA71A939_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E77000)
#define CLASS_1_B21DCD6EBA71A939_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E76FE0)
#define CLASS_1_B21DCD6EBA71A939_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E76FF0)
#define CLASS_1_B21DCD6EBA71A939_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E76E70)
#define CLASS_1_B21DCD6EBA71A939_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E772D0)
#define CLASS_1_B21DCD6EBA71A939_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E77330)
#define CLASS_1_B21DCD6EBA71A939__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E776F0)
#define CLASS_1_B21DCD6EBA71A939__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E76ED0)
#define CLASS_1_B21DCD6EBA71A939__CTOR_OFFSET UNITYSDK_OFFSET(0x17E76E80)

inline static constexpr unsigned int Class_1_B21DCD6EBA71A939_TypeDefinitionIndex = 24924;

class Class_1_B21DCD6EBA71A939 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_8*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B21DCD6EBA71A939_TypeDefinitionIndex)->GetStaticField(0x25F50);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_8*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_0A3761FE34514D6C_37 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B21DCD6EBA71A939* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B21DCD6EBA71A939*))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B21DCD6EBA71A939* Clone()
	{
		return ((::Class_1_B21DCD6EBA71A939*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_8*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_37 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_37(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B21DCD6EBA71A939* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B21DCD6EBA71A939*))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B21DCD6EBA71A939* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B21DCD6EBA71A939*))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B21DCD6EBA71A939_MERGEFROM_1_OFFSET))(this, a1);
	}
};
