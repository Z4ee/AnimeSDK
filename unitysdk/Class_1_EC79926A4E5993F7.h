#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5EB756264B1E13D9_3;
class Class_1_6E708EAB438EC183_66;
class Class_1_C8A33C9C75E4FF8B;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EC79926A4E5993F7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CE76D0)
#define CLASS_1_EC79926A4E5993F7_CLONE_OFFSET UNITYSDK_OFFSET(0x17CE7060)
#define CLASS_1_EC79926A4E5993F7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CE7160)
#define CLASS_1_EC79926A4E5993F7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CE7100)
#define CLASS_1_EC79926A4E5993F7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CE72B0)
#define CLASS_1_EC79926A4E5993F7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CE7A00)
#define CLASS_1_EC79926A4E5993F7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CE7840)
#define CLASS_1_EC79926A4E5993F7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17CE70D0)
#define CLASS_1_EC79926A4E5993F7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17CE70C0)
#define CLASS_1_EC79926A4E5993F7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17CE70F0)
#define CLASS_1_EC79926A4E5993F7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17CE70B0)
#define CLASS_1_EC79926A4E5993F7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17CE70E0)
#define CLASS_1_EC79926A4E5993F7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CE6E80)
#define CLASS_1_EC79926A4E5993F7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CE7530)
#define CLASS_1_EC79926A4E5993F7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CE7590)
#define CLASS_1_EC79926A4E5993F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CE7BF0)
#define CLASS_1_EC79926A4E5993F7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CE6F40)
#define CLASS_1_EC79926A4E5993F7__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE6E90)

inline static constexpr unsigned int Class_1_EC79926A4E5993F7_TypeDefinitionIndex = 25864;

class Class_1_EC79926A4E5993F7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC79926A4E5993F7_TypeDefinitionIndex)->GetStaticField(0xE250);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C8A33C9C75E4FF8B*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C8A33C9C75E4FF8B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC79926A4E5993F7_TypeDefinitionIndex)->GetStaticField(0xE258);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5EB756264B1E13D9_3*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5EB756264B1E13D9_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC79926A4E5993F7_TypeDefinitionIndex)->GetStaticField(0xE260);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5EB756264B1E13D9_3*>* Field_1_11; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C8A33C9C75E4FF8B*>* Field_1_3; // 0x28
	::Class_1_6E708EAB438EC183_66* Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EC79926A4E5993F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC79926A4E5993F7*))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EC79926A4E5993F7* Clone()
	{
		return ((::Class_1_EC79926A4E5993F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C8A33C9C75E4FF8B*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C8A33C9C75E4FF8B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_66* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6E708EAB438EC183_66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6E708EAB438EC183_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_66*))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5EB756264B1E13D9_3*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5EB756264B1E13D9_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EC79926A4E5993F7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EC79926A4E5993F7*))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EC79926A4E5993F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC79926A4E5993F7*))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EC79926A4E5993F7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
