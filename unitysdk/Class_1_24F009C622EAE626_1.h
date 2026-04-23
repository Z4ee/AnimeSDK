#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_29.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_274;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_24F009C622EAE626_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19AD9B10)
#define CLASS_1_24F009C622EAE626_1_CLONE_OFFSET UNITYSDK_OFFSET(0x19AD9660)
#define CLASS_1_24F009C622EAE626_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19AD97E0)
#define CLASS_1_24F009C622EAE626_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19AD96E0)
#define CLASS_1_24F009C622EAE626_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19AD98A0)
#define CLASS_1_24F009C622EAE626_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19AD9D80)
#define CLASS_1_24F009C622EAE626_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19AD9CD0)
#define CLASS_1_24F009C622EAE626_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19AD96B0)
#define CLASS_1_24F009C622EAE626_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19AD96A0)
#define CLASS_1_24F009C622EAE626_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19AD9540)
#define CLASS_1_24F009C622EAE626_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19AD96D0)
#define CLASS_1_24F009C622EAE626_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19AD96C0)
#define CLASS_1_24F009C622EAE626_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19AD9690)
#define CLASS_1_24F009C622EAE626_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19AD9570)
#define CLASS_1_24F009C622EAE626_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19AD99A0)
#define CLASS_1_24F009C622EAE626_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19AD9A00)
#define CLASS_1_24F009C622EAE626_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AD9E60)
#define CLASS_1_24F009C622EAE626_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AD95C0)
#define CLASS_1_24F009C622EAE626_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9580)

inline static constexpr unsigned int Class_1_24F009C622EAE626_1_TypeDefinitionIndex = 26528;

class Class_1_24F009C622EAE626_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_274*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_274*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24F009C622EAE626_1_TypeDefinitionIndex)->GetStaticField(0x53100);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24F009C622EAE626_1_TypeDefinitionIndex)->GetStaticField(0x53108);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_274*>* Field_1_8; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::Enum_3_0A3761FE34514D6C_29 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_24F009C622EAE626_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626_1*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_24F009C622EAE626_1* Clone()
	{
		return ((::Class_1_24F009C622EAE626_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_29 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_29(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_29 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_29))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_274*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_274*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_24F009C622EAE626_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_24F009C622EAE626_1*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_24F009C622EAE626_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626_1*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
