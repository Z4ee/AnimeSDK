#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_681;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E85FDBE62E39A5EA_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FA8380)
#define CLASS_1_E85FDBE62E39A5EA_19_CLONE_OFFSET UNITYSDK_OFFSET(0x17FA7F60)
#define CLASS_1_E85FDBE62E39A5EA_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FA80D0)
#define CLASS_1_E85FDBE62E39A5EA_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FA7FC0)
#define CLASS_1_E85FDBE62E39A5EA_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FA8180)
#define CLASS_1_E85FDBE62E39A5EA_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FA84C0)
#define CLASS_1_E85FDBE62E39A5EA_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FA8420)
#define CLASS_1_E85FDBE62E39A5EA_19_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17FA7FB0)
#define CLASS_1_E85FDBE62E39A5EA_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FA7E80)
#define CLASS_1_E85FDBE62E39A5EA_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FA8270)
#define CLASS_1_E85FDBE62E39A5EA_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FA82D0)
#define CLASS_1_E85FDBE62E39A5EA_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FA85A0)
#define CLASS_1_E85FDBE62E39A5EA_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FA7ED0)
#define CLASS_1_E85FDBE62E39A5EA_19__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA7E90)

inline static constexpr unsigned int Class_1_E85FDBE62E39A5EA_19_TypeDefinitionIndex = 26046;

class Class_1_E85FDBE62E39A5EA_19 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_681*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_681*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E85FDBE62E39A5EA_19_TypeDefinitionIndex)->GetStaticField(0x35C00);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_681*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E85FDBE62E39A5EA_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_19*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA_19* Clone()
	{
		return ((::Class_1_E85FDBE62E39A5EA_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_681*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_681*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E85FDBE62E39A5EA_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_19*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E85FDBE62E39A5EA_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_19*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
