#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
class Class_1_3AD2528CD53B1639_1;
class Class_1_BB4B99DE4C2501EC_6;
class Class_1_DEFDE65E54078F00;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2BE37F50413FF023_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8446C0)
#define CLASS_1_2BE37F50413FF023_CLONE_OFFSET UNITYSDK_OFFSET(0x1C844000)
#define CLASS_1_2BE37F50413FF023_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8440F0)
#define CLASS_1_2BE37F50413FF023_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8440C0)
#define CLASS_1_2BE37F50413FF023_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C844380)
#define CLASS_1_2BE37F50413FF023_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C844A30)
#define CLASS_1_2BE37F50413FF023_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C844880)
#define CLASS_1_2BE37F50413FF023_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8440A0)
#define CLASS_1_2BE37F50413FF023_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C844050)
#define CLASS_1_2BE37F50413FF023_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1C844070)
#define CLASS_1_2BE37F50413FF023_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C844030)
#define CLASS_1_2BE37F50413FF023_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C843E10)
#define CLASS_1_2BE37F50413FF023_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C844090)
#define CLASS_1_2BE37F50413FF023_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8440B0)
#define CLASS_1_2BE37F50413FF023_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C844060)
#define CLASS_1_2BE37F50413FF023_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1C844080)
#define CLASS_1_2BE37F50413FF023_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C844040)
#define CLASS_1_2BE37F50413FF023_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C843E40)
#define CLASS_1_2BE37F50413FF023_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C844430)
#define CLASS_1_2BE37F50413FF023_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C844490)
#define CLASS_1_2BE37F50413FF023__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C844C00)
#define CLASS_1_2BE37F50413FF023__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C843E90)
#define CLASS_1_2BE37F50413FF023__CTOR_OFFSET UNITYSDK_OFFSET(0x1C843E50)

inline static constexpr unsigned int Class_1_2BE37F50413FF023_TypeDefinitionIndex = 25630;

class Class_1_2BE37F50413FF023 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2BE37F50413FF023*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2BE37F50413FF023*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BE37F50413FF023_TypeDefinitionIndex)->GetStaticField(0x38D20);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BE37F50413FF023_TypeDefinitionIndex)->GetStaticField(0x38D28);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Field_1_7; // 0x10
	::Class_1_BB4B99DE4C2501EC_6* Field_1_8; // 0x18
	::Class_1_DEFDE65E54078F00* Field_1_9; // 0x20
	::Class_1_3AD2528CD53B1639_1* Field_1_10; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x30
	::System::UInt32 Field_1_12; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2BE37F50413FF023* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BE37F50413FF023*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2BE37F50413FF023*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2BE37F50413FF023*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2BE37F50413FF023* Clone()
	{
		return ((::Class_1_2BE37F50413FF023*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_CLONE_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3AD2528CD53B1639_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3AD2528CD53B1639_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_1*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_DEFDE65E54078F00* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_DEFDE65E54078F00*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_DEFDE65E54078F00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DEFDE65E54078F00*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_BB4B99DE4C2501EC_6* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_BB4B99DE4C2501EC_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2BE37F50413FF023* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2BE37F50413FF023*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2BE37F50413FF023* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BE37F50413FF023*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2BE37F50413FF023_MERGEFROM_1_OFFSET))(this, a1);
	}
};
