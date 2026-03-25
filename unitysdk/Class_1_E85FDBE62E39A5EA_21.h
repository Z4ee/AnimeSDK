#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_97;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E85FDBE62E39A5EA_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BA0220)
#define CLASS_1_E85FDBE62E39A5EA_21_CLONE_OFFSET UNITYSDK_OFFSET(0x17B9FE50)
#define CLASS_1_E85FDBE62E39A5EA_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B9FF70)
#define CLASS_1_E85FDBE62E39A5EA_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B9FE90)
#define CLASS_1_E85FDBE62E39A5EA_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BA0020)
#define CLASS_1_E85FDBE62E39A5EA_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BA0360)
#define CLASS_1_E85FDBE62E39A5EA_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BA02C0)
#define CLASS_1_E85FDBE62E39A5EA_21_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B9FE80)
#define CLASS_1_E85FDBE62E39A5EA_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B9FD70)
#define CLASS_1_E85FDBE62E39A5EA_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BA0110)
#define CLASS_1_E85FDBE62E39A5EA_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BA0170)
#define CLASS_1_E85FDBE62E39A5EA_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BA0410)
#define CLASS_1_E85FDBE62E39A5EA_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B9FDC0)
#define CLASS_1_E85FDBE62E39A5EA_21__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9FD80)

inline static constexpr unsigned int Class_1_E85FDBE62E39A5EA_21_TypeDefinitionIndex = 26513;

class Class_1_E85FDBE62E39A5EA_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_97*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E85FDBE62E39A5EA_21_TypeDefinitionIndex)->GetStaticField(0x31D90);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_97*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E85FDBE62E39A5EA_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_21*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA_21* Clone()
	{
		return ((::Class_1_E85FDBE62E39A5EA_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_97*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E85FDBE62E39A5EA_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_21*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E85FDBE62E39A5EA_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_21*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
