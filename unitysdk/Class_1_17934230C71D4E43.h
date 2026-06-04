#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_29.h"
#include "unitysdk/System/Object.h"

class Class_1_74B82D648058B7A1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_17934230C71D4E43_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9705B0)
#define CLASS_1_17934230C71D4E43_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9700F0)
#define CLASS_1_17934230C71D4E43_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9701E0)
#define CLASS_1_17934230C71D4E43_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9701B0)
#define CLASS_1_17934230C71D4E43_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9702C0)
#define CLASS_1_17934230C71D4E43_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A9709B0)
#define CLASS_1_17934230C71D4E43_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9708E0)
#define CLASS_1_17934230C71D4E43_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A970190)
#define CLASS_1_17934230C71D4E43_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A970120)
#define CLASS_1_17934230C71D4E43_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A970180)
#define CLASS_1_17934230C71D4E43_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A970160)
#define CLASS_1_17934230C71D4E43_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A96FFD0)
#define CLASS_1_17934230C71D4E43_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A970140)
#define CLASS_1_17934230C71D4E43_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A9701A0)
#define CLASS_1_17934230C71D4E43_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A970130)
#define CLASS_1_17934230C71D4E43_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A970150)
#define CLASS_1_17934230C71D4E43_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A970170)
#define CLASS_1_17934230C71D4E43_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A970000)
#define CLASS_1_17934230C71D4E43_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9703D0)
#define CLASS_1_17934230C71D4E43_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A970430)
#define CLASS_1_17934230C71D4E43__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A970AB0)
#define CLASS_1_17934230C71D4E43__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A970050)
#define CLASS_1_17934230C71D4E43__CTOR_OFFSET UNITYSDK_OFFSET(0x1A970010)

inline static constexpr unsigned int Class_1_17934230C71D4E43_TypeDefinitionIndex = 28922;

class Class_1_17934230C71D4E43 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_74B82D648058B7A1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_74B82D648058B7A1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17934230C71D4E43_TypeDefinitionIndex)->GetStaticField(0x4FA60);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_17934230C71D4E43*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_17934230C71D4E43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17934230C71D4E43_TypeDefinitionIndex)->GetStaticField(0x4FA68);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_74B82D648058B7A1*>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::Int64 Field_1_9; // 0x20
	::Enum_3_DB663931210BBC27_29 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::System::UInt32 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_17934230C71D4E43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17934230C71D4E43*))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_17934230C71D4E43*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_17934230C71D4E43*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_17934230C71D4E43* Clone()
	{
		return ((::Class_1_17934230C71D4E43*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_74B82D648058B7A1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_74B82D648058B7A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_29 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_29(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_29 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_29))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_17934230C71D4E43* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_17934230C71D4E43*))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_17934230C71D4E43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17934230C71D4E43*))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_17934230C71D4E43_MERGEFROM_1_OFFSET))(this, a1);
	}
};
