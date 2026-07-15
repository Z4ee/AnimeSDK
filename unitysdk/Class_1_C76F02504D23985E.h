#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/System/Object.h"

class Class_1_8654F1DF226F6DE3_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C76F02504D23985E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C815C60)
#define CLASS_1_C76F02504D23985E_CLONE_OFFSET UNITYSDK_OFFSET(0x1C815700)
#define CLASS_1_C76F02504D23985E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8158E0)
#define CLASS_1_C76F02504D23985E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C815780)
#define CLASS_1_C76F02504D23985E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C815A10)
#define CLASS_1_C76F02504D23985E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C815ED0)
#define CLASS_1_C76F02504D23985E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C815E20)
#define CLASS_1_C76F02504D23985E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C815750)
#define CLASS_1_C76F02504D23985E_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C815740)
#define CLASS_1_C76F02504D23985E_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C8155B0)
#define CLASS_1_C76F02504D23985E_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C815770)
#define CLASS_1_C76F02504D23985E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C815760)
#define CLASS_1_C76F02504D23985E_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C815730)
#define CLASS_1_C76F02504D23985E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8155E0)
#define CLASS_1_C76F02504D23985E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C815A80)
#define CLASS_1_C76F02504D23985E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C815AE0)
#define CLASS_1_C76F02504D23985E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8160C0)
#define CLASS_1_C76F02504D23985E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C815640)
#define CLASS_1_C76F02504D23985E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8155F0)

inline static constexpr unsigned int Class_1_C76F02504D23985E_TypeDefinitionIndex = 25171;

class Class_1_C76F02504D23985E : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C76F02504D23985E*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C76F02504D23985E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C76F02504D23985E_TypeDefinitionIndex)->GetStaticField(0x2AB00);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_8654F1DF226F6DE3_4*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_8654F1DF226F6DE3_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C76F02504D23985E_TypeDefinitionIndex)->GetStaticField(0x2AB08);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8654F1DF226F6DE3_4*>* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::Enum_3_0A3761FE34514D6C_3 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C76F02504D23985E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C76F02504D23985E*))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C76F02504D23985E*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C76F02504D23985E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C76F02504D23985E* Clone()
	{
		return ((::Class_1_C76F02504D23985E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8654F1DF226F6DE3_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8654F1DF226F6DE3_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C76F02504D23985E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C76F02504D23985E*))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C76F02504D23985E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C76F02504D23985E*))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
