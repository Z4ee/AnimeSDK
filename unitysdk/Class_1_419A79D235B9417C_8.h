#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

class Class_1_1DD6AC150642D284;
class Class_1_C50F5982E5600913;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_419A79D235B9417C_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC84780)
#define CLASS_1_419A79D235B9417C_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC84170)
#define CLASS_1_419A79D235B9417C_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC84280)
#define CLASS_1_419A79D235B9417C_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC84250)
#define CLASS_1_419A79D235B9417C_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC843E0)
#define CLASS_1_419A79D235B9417C_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC84BE0)
#define CLASS_1_419A79D235B9417C_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC84AD0)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CC84230)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CC841F0)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CC841A0)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1CC84220)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CC841D0)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CC83FB0)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CC841E0)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CC84240)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CC84200)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CC841B0)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CC841C0)
#define CLASS_1_419A79D235B9417C_8_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1CC84210)
#define CLASS_1_419A79D235B9417C_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC83FE0)
#define CLASS_1_419A79D235B9417C_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC84490)
#define CLASS_1_419A79D235B9417C_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC844F0)
#define CLASS_1_419A79D235B9417C_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC84D30)
#define CLASS_1_419A79D235B9417C_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC84040)
#define CLASS_1_419A79D235B9417C_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC83FF0)

inline static constexpr unsigned int Class_1_419A79D235B9417C_8_TypeDefinitionIndex = 29161;

class Class_1_419A79D235B9417C_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C50F5982E5600913*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C50F5982E5600913*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_419A79D235B9417C_8_TypeDefinitionIndex)->GetStaticField(0x1ABC0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_419A79D235B9417C_8*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_419A79D235B9417C_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_419A79D235B9417C_8_TypeDefinitionIndex)->GetStaticField(0x1ABC8);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Class_1_1DD6AC150642D284* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x20
	::Enum_3_01618AD0437C8486_2 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::UInt32 Field_1_13; // 0x30
	::System::UInt64 Field_1_14; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_419A79D235B9417C_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_8*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_419A79D235B9417C_8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_419A79D235B9417C_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_419A79D235B9417C_8* Clone()
	{
		return ((::Class_1_419A79D235B9417C_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_CLONE_OFFSET))(this);
	}

	::Class_1_1DD6AC150642D284* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1DD6AC150642D284*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1DD6AC150642D284* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_419A79D235B9417C_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_419A79D235B9417C_8*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_419A79D235B9417C_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_8*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
