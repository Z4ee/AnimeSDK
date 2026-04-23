#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/System/Object.h"

class Class_1_FB97E6BA44592C06_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_24F009C622EAE626_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1928EDA0)
#define CLASS_1_24F009C622EAE626_CLONE_OFFSET UNITYSDK_OFFSET(0x1928E8F0)
#define CLASS_1_24F009C622EAE626_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1928EA60)
#define CLASS_1_24F009C622EAE626_EQUALS_OFFSET UNITYSDK_OFFSET(0x1928E970)
#define CLASS_1_24F009C622EAE626_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1928EB30)
#define CLASS_1_24F009C622EAE626_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1928F030)
#define CLASS_1_24F009C622EAE626_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1928EF80)
#define CLASS_1_24F009C622EAE626_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1928E950)
#define CLASS_1_24F009C622EAE626_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1928E940)
#define CLASS_1_24F009C622EAE626_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1928E7A0)
#define CLASS_1_24F009C622EAE626_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1928E920)
#define CLASS_1_24F009C622EAE626_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1928E960)
#define CLASS_1_24F009C622EAE626_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1928E930)
#define CLASS_1_24F009C622EAE626_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1928E7D0)
#define CLASS_1_24F009C622EAE626_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1928EC30)
#define CLASS_1_24F009C622EAE626_WRITETO_OFFSET UNITYSDK_OFFSET(0x1928EC90)
#define CLASS_1_24F009C622EAE626__CCTOR_OFFSET UNITYSDK_OFFSET(0x1928F110)
#define CLASS_1_24F009C622EAE626__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1928E830)
#define CLASS_1_24F009C622EAE626__CTOR_OFFSET UNITYSDK_OFFSET(0x1928E7E0)

inline static constexpr unsigned int Class_1_24F009C622EAE626_TypeDefinitionIndex = 24816;

class Class_1_24F009C622EAE626 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24F009C622EAE626_TypeDefinitionIndex)->GetStaticField(0x30200);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FB97E6BA44592C06_2*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FB97E6BA44592C06_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24F009C622EAE626_TypeDefinitionIndex)->GetStaticField(0x30208);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FB97E6BA44592C06_2*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::Enum_3_0A3761FE34514D6C_3 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_24F009C622EAE626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_24F009C622EAE626* Clone()
	{
		return ((::Class_1_24F009C622EAE626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FB97E6BA44592C06_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FB97E6BA44592C06_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_24F009C622EAE626* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_24F009C622EAE626*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_24F009C622EAE626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_MERGEFROM_1_OFFSET))(this, a1);
	}
};
