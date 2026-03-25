#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CF95189016D01A2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_6A727999361D63EB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F3CE00)
#define CLASS_1_6A727999361D63EB_CLONE_OFFSET UNITYSDK_OFFSET(0x17F3C960)
#define CLASS_1_6A727999361D63EB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F3CA00)
#define CLASS_1_6A727999361D63EB_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F3C9D0)
#define CLASS_1_6A727999361D63EB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F3CAF0)
#define CLASS_1_6A727999361D63EB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F3D040)
#define CLASS_1_6A727999361D63EB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F3CF40)
#define CLASS_1_6A727999361D63EB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F3C990)
#define CLASS_1_6A727999361D63EB_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17F3C9B0)
#define CLASS_1_6A727999361D63EB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F3C9A0)
#define CLASS_1_6A727999361D63EB_METHOD_1_959BA94B4EE67881_OFFSET UNITYSDK_OFFSET(0x17F3C9C0)
#define CLASS_1_6A727999361D63EB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F3C7D0)
#define CLASS_1_6A727999361D63EB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F3CC90)
#define CLASS_1_6A727999361D63EB_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F3CCF0)
#define CLASS_1_6A727999361D63EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F3D170)
#define CLASS_1_6A727999361D63EB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F3C850)
#define CLASS_1_6A727999361D63EB__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3C7E0)

inline static constexpr unsigned int Class_1_6A727999361D63EB_TypeDefinitionIndex = 24626;

class Class_1_6A727999361D63EB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CF95189016D01A2*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CF95189016D01A2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A727999361D63EB_TypeDefinitionIndex)->GetStaticField(0x31540);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A727999361D63EB_TypeDefinitionIndex)->GetStaticField(0x31548);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CF95189016D01A2*>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6A727999361D63EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A727999361D63EB*))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6A727999361D63EB* Clone()
	{
		return ((::Class_1_6A727999361D63EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CF95189016D01A2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CF95189016D01A2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Method_1_959BA94B4EE67881()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_METHOD_1_959BA94B4EE67881_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6A727999361D63EB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6A727999361D63EB*))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6A727999361D63EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A727999361D63EB*))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6A727999361D63EB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
