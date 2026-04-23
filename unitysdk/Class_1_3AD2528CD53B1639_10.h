#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_17.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_26;
class Class_1_C9DFE5EE7107C629_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3AD2528CD53B1639_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194EA460)
#define CLASS_1_3AD2528CD53B1639_10_CLONE_OFFSET UNITYSDK_OFFSET(0x194E9EA0)
#define CLASS_1_3AD2528CD53B1639_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x194EA000)
#define CLASS_1_3AD2528CD53B1639_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x194E9FA0)
#define CLASS_1_3AD2528CD53B1639_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x194EA120)
#define CLASS_1_3AD2528CD53B1639_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x194EA910)
#define CLASS_1_3AD2528CD53B1639_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x194EA7F0)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x194E9F50)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x194E9F30)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x194E9F00)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x194E9CB0)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x194E9F20)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x194E9F70)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x194E9F60)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x194E9F40)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x194E9F10)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x194E9F90)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x194E9F80)
#define CLASS_1_3AD2528CD53B1639_10_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x194E9EF0)
#define CLASS_1_3AD2528CD53B1639_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x194E9D10)
#define CLASS_1_3AD2528CD53B1639_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x194EA240)
#define CLASS_1_3AD2528CD53B1639_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x194EA2A0)
#define CLASS_1_3AD2528CD53B1639_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x194EAA80)
#define CLASS_1_3AD2528CD53B1639_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194E9D70)
#define CLASS_1_3AD2528CD53B1639_10__CTOR_OFFSET UNITYSDK_OFFSET(0x194E9D20)

inline static constexpr unsigned int Class_1_3AD2528CD53B1639_10_TypeDefinitionIndex = 27103;

class Class_1_3AD2528CD53B1639_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3AD2528CD53B1639_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3AD2528CD53B1639_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AD2528CD53B1639_10_TypeDefinitionIndex)->GetStaticField(0x40B60);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_26*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AD2528CD53B1639_10_TypeDefinitionIndex)->GetStaticField(0x40B68);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_26*>* Field_1_12; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_C9DFE5EE7107C629_12* Field_1_7; // 0x20
	::System::Int32 Field_1_14; // 0x28
	::System::UInt64 Field_1_3; // 0x30
	::Enum_3_4608E37A1B3D374A_17 Field_1_5; // 0x38
	::System::UInt32 Field_1_9; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3AD2528CD53B1639_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_10*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3AD2528CD53B1639_10*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3AD2528CD53B1639_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_10* Clone()
	{
		return ((::Class_1_3AD2528CD53B1639_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_17 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_17 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_17))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_26*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_26*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3AD2528CD53B1639_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3AD2528CD53B1639_10*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3AD2528CD53B1639_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_10*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
