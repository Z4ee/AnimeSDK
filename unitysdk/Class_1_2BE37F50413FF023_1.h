#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_49;
class Class_1_21C7581DFE99F091_50;
class Class_1_D17272E82AE804C2_103;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2BE37F50413FF023_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5C6CF0)
#define CLASS_1_2BE37F50413FF023_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5C6660)
#define CLASS_1_2BE37F50413FF023_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5C6760)
#define CLASS_1_2BE37F50413FF023_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5C6700)
#define CLASS_1_2BE37F50413FF023_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5C68B0)
#define CLASS_1_2BE37F50413FF023_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5C6FC0)
#define CLASS_1_2BE37F50413FF023_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5C6E40)
#define CLASS_1_2BE37F50413FF023_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A5C66B0)
#define CLASS_1_2BE37F50413FF023_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A5C6400)
#define CLASS_1_2BE37F50413FF023_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A5C66F0)
#define CLASS_1_2BE37F50413FF023_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A5C66E0)
#define CLASS_1_2BE37F50413FF023_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A5C66D0)
#define CLASS_1_2BE37F50413FF023_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A5C66C0)
#define CLASS_1_2BE37F50413FF023_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5C6460)
#define CLASS_1_2BE37F50413FF023_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5C6B50)
#define CLASS_1_2BE37F50413FF023_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5C6BB0)
#define CLASS_1_2BE37F50413FF023_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C7180)
#define CLASS_1_2BE37F50413FF023_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5C6520)
#define CLASS_1_2BE37F50413FF023_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C6470)

inline static constexpr unsigned int Class_1_2BE37F50413FF023_1_TypeDefinitionIndex = 28170;

class Class_1_2BE37F50413FF023_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2BE37F50413FF023_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2BE37F50413FF023_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BE37F50413FF023_1_TypeDefinitionIndex)->GetStaticField(0x17FE0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BE37F50413FF023_1_TypeDefinitionIndex)->GetStaticField(0x17FE8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_103*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_103*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BE37F50413FF023_1_TypeDefinitionIndex)->GetStaticField(0x17FF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_49*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_49*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BE37F50413FF023_1_TypeDefinitionIndex)->GetStaticField(0x17FF8);
	}
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_103*>* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_49*>* Field_1_10; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x28
	::Class_1_21C7581DFE99F091_50* Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2BE37F50413FF023_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BE37F50413FF023_1*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2BE37F50413FF023_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2BE37F50413FF023_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2BE37F50413FF023_1* Clone()
	{
		return ((::Class_1_2BE37F50413FF023_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_CLONE_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_50* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_50*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_49*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_49*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_103*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_103*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2BE37F50413FF023_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2BE37F50413FF023_1*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2BE37F50413FF023_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BE37F50413FF023_1*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
