#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_333B902B2174BECA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197F1640)
#define CLASS_1_333B902B2174BECA_CLONE_OFFSET UNITYSDK_OFFSET(0x197F1190)
#define CLASS_1_333B902B2174BECA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197F12F0)
#define CLASS_1_333B902B2174BECA_EQUALS_OFFSET UNITYSDK_OFFSET(0x197F1210)
#define CLASS_1_333B902B2174BECA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197F13D0)
#define CLASS_1_333B902B2174BECA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197F1860)
#define CLASS_1_333B902B2174BECA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197F1750)
#define CLASS_1_333B902B2174BECA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x197F11C0)
#define CLASS_1_333B902B2174BECA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x197F11F0)
#define CLASS_1_333B902B2174BECA_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x197F11E0)
#define CLASS_1_333B902B2174BECA_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x197F0F80)
#define CLASS_1_333B902B2174BECA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x197F11D0)
#define CLASS_1_333B902B2174BECA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x197F1200)
#define CLASS_1_333B902B2174BECA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197F0FB0)
#define CLASS_1_333B902B2174BECA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197F1510)
#define CLASS_1_333B902B2174BECA_WRITETO_OFFSET UNITYSDK_OFFSET(0x197F1570)
#define CLASS_1_333B902B2174BECA__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F1950)
#define CLASS_1_333B902B2174BECA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197F1010)
#define CLASS_1_333B902B2174BECA__CTOR_OFFSET UNITYSDK_OFFSET(0x197F0FC0)

inline static constexpr unsigned int Class_1_333B902B2174BECA_TypeDefinitionIndex = 25776;

class Class_1_333B902B2174BECA : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_TypeDefinitionIndex)->GetStaticField(0x64230);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_TypeDefinitionIndex)->GetStaticField(0x64238);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	::Class_1_355A2207C3B7A99D_8* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_333B902B2174BECA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_333B902B2174BECA* Clone()
	{
		return ((::Class_1_333B902B2174BECA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_355A2207C3B7A99D_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_355A2207C3B7A99D_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_8*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_333B902B2174BECA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_333B902B2174BECA*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_333B902B2174BECA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
