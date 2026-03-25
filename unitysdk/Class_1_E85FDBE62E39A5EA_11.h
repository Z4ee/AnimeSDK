#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_273;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E85FDBE62E39A5EA_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182CABD0)
#define CLASS_1_E85FDBE62E39A5EA_11_CLONE_OFFSET UNITYSDK_OFFSET(0x182CA7B0)
#define CLASS_1_E85FDBE62E39A5EA_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182CA920)
#define CLASS_1_E85FDBE62E39A5EA_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x182CA810)
#define CLASS_1_E85FDBE62E39A5EA_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182CA9D0)
#define CLASS_1_E85FDBE62E39A5EA_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182CAD10)
#define CLASS_1_E85FDBE62E39A5EA_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182CAC70)
#define CLASS_1_E85FDBE62E39A5EA_11_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x182CA800)
#define CLASS_1_E85FDBE62E39A5EA_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182CA6D0)
#define CLASS_1_E85FDBE62E39A5EA_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182CAAC0)
#define CLASS_1_E85FDBE62E39A5EA_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x182CAB20)
#define CLASS_1_E85FDBE62E39A5EA_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x182CADF0)
#define CLASS_1_E85FDBE62E39A5EA_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182CA720)
#define CLASS_1_E85FDBE62E39A5EA_11__CTOR_OFFSET UNITYSDK_OFFSET(0x182CA6E0)

inline static constexpr unsigned int Class_1_E85FDBE62E39A5EA_11_TypeDefinitionIndex = 24274;

class Class_1_E85FDBE62E39A5EA_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_273*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_273*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E85FDBE62E39A5EA_11_TypeDefinitionIndex)->GetStaticField(0x30670);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_273*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E85FDBE62E39A5EA_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_11*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA_11* Clone()
	{
		return ((::Class_1_E85FDBE62E39A5EA_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_273*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_273*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E85FDBE62E39A5EA_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_11*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E85FDBE62E39A5EA_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_11*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
