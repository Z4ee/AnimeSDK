#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_77.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_78.h"
#include "unitysdk/System/Object.h"

class Class_1_E6D4CCE1AC88574F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_DBE1913405A6C120_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18199A00)
#define CLASS_1_DBE1913405A6C120_2_CLONE_OFFSET UNITYSDK_OFFSET(0x18199550)
#define CLASS_1_DBE1913405A6C120_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18199640)
#define CLASS_1_DBE1913405A6C120_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x18199610)
#define CLASS_1_DBE1913405A6C120_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18199720)
#define CLASS_1_DBE1913405A6C120_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18199DD0)
#define CLASS_1_DBE1913405A6C120_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18199D00)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181995F0)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18199580)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x181995E0)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x181995B0)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x181995C0)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18199600)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18199590)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x181995D0)
#define CLASS_1_DBE1913405A6C120_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x181995A0)
#define CLASS_1_DBE1913405A6C120_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18199460)
#define CLASS_1_DBE1913405A6C120_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18199820)
#define CLASS_1_DBE1913405A6C120_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x18199880)
#define CLASS_1_DBE1913405A6C120_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18199ED0)
#define CLASS_1_DBE1913405A6C120_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181994B0)
#define CLASS_1_DBE1913405A6C120_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18199470)

inline static constexpr unsigned int Class_1_DBE1913405A6C120_2_TypeDefinitionIndex = 27501;

class Class_1_DBE1913405A6C120_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E6D4CCE1AC88574F*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E6D4CCE1AC88574F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DBE1913405A6C120_2_TypeDefinitionIndex)->GetStaticField(0xD110);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E6D4CCE1AC88574F*>* Field_1_7; // 0x18
	::System::UInt32 Field_1_11; // 0x20
	::Enum_3_0A3761FE34514D6C_78 Field_1_4; // 0x24
	::System::UInt32 Field_1_2; // 0x28
	::Enum_3_0A3761FE34514D6C_77 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DBE1913405A6C120_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120_2*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DBE1913405A6C120_2* Clone()
	{
		return ((::Class_1_DBE1913405A6C120_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_78 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_78(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_78 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_78))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E6D4CCE1AC88574F*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E6D4CCE1AC88574F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_77 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_0A3761FE34514D6C_77(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_0A3761FE34514D6C_77 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_77))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DBE1913405A6C120_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DBE1913405A6C120_2*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DBE1913405A6C120_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120_2*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
