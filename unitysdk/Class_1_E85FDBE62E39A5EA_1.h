#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E85FDBE62E39A5EA_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BDA200)
#define CLASS_1_E85FDBE62E39A5EA_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17BD9DE0)
#define CLASS_1_E85FDBE62E39A5EA_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BD9F50)
#define CLASS_1_E85FDBE62E39A5EA_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BD9E40)
#define CLASS_1_E85FDBE62E39A5EA_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BDA000)
#define CLASS_1_E85FDBE62E39A5EA_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BDA340)
#define CLASS_1_E85FDBE62E39A5EA_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BDA2A0)
#define CLASS_1_E85FDBE62E39A5EA_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17BD9E30)
#define CLASS_1_E85FDBE62E39A5EA_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BD9D00)
#define CLASS_1_E85FDBE62E39A5EA_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BDA0F0)
#define CLASS_1_E85FDBE62E39A5EA_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BDA150)
#define CLASS_1_E85FDBE62E39A5EA_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BDA420)
#define CLASS_1_E85FDBE62E39A5EA_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BD9D50)
#define CLASS_1_E85FDBE62E39A5EA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD9D10)

inline static constexpr unsigned int Class_1_E85FDBE62E39A5EA_1_TypeDefinitionIndex = 23398;

class Class_1_E85FDBE62E39A5EA_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_3*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E85FDBE62E39A5EA_1_TypeDefinitionIndex)->GetStaticField(0x35850);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_3*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E85FDBE62E39A5EA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_1*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA_1* Clone()
	{
		return ((::Class_1_E85FDBE62E39A5EA_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E85FDBE62E39A5EA_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_1*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E85FDBE62E39A5EA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_1*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
