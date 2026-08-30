#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D35B8B3A660BD597_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA88FC0)
#define CLASS_1_D35B8B3A660BD597_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA88A80)
#define CLASS_1_D35B8B3A660BD597_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA88B60)
#define CLASS_1_D35B8B3A660BD597_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA88B30)
#define CLASS_1_D35B8B3A660BD597_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA88C20)
#define CLASS_1_D35B8B3A660BD597_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA892D0)
#define CLASS_1_D35B8B3A660BD597_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA891F0)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1EA88AF0)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1EA88B10)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EA88AB0)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EA88AE0)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EA888C0)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1EA88AD0)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1EA88B00)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1EA88B20)
#define CLASS_1_D35B8B3A660BD597_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EA88AC0)
#define CLASS_1_D35B8B3A660BD597_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA888F0)
#define CLASS_1_D35B8B3A660BD597_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA88D80)
#define CLASS_1_D35B8B3A660BD597_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA88DE0)
#define CLASS_1_D35B8B3A660BD597__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA89440)
#define CLASS_1_D35B8B3A660BD597__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA88980)
#define CLASS_1_D35B8B3A660BD597__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA88900)

inline static constexpr unsigned int Class_1_D35B8B3A660BD597_TypeDefinitionIndex = 25679;

class Class_1_D35B8B3A660BD597 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HPMBHPJILKK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D35B8B3A660BD597_TypeDefinitionIndex)->GetStaticField(0x2FFC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_075C34D03AFA1215_12*>** StaticGet_OCILIBJONGM()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_075C34D03AFA1215_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D35B8B3A660BD597_TypeDefinitionIndex)->GetStaticField(0x2FFC8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D35B8B3A660BD597*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D35B8B3A660BD597*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D35B8B3A660BD597_TypeDefinitionIndex)->GetStaticField(0x2FFD0);
	}
	// static const ::System::Int32 HCNNIHOAGEM = 0x2; // 0x0
	// static const ::System::Int32 IGIGANJLNPM = 0x3; // 0x0
	// static const ::System::Int32 DDMCEKKKDHB = 0xB; // 0x0
	// static const ::System::Int32 EBOOHBBAGIC = 0xA; // 0x0
	// static const ::System::Int32 NKLILADIPNI = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MOCFIAEMBFL; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_075C34D03AFA1215_12*>* PCPNJJDJEJL; // 0x20
	::System::UInt32 CHMFPHPJAIA; // 0x28
	::System::UInt32 KHMPKKJMHNM; // 0x2C
	::System::UInt32 HHKEHNKMILI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D35B8B3A660BD597* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D35B8B3A660BD597*))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D35B8B3A660BD597*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D35B8B3A660BD597*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D35B8B3A660BD597* Clone()
	{
		return ((::Class_1_D35B8B3A660BD597*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_075C34D03AFA1215_12*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_075C34D03AFA1215_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D35B8B3A660BD597* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D35B8B3A660BD597*))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D35B8B3A660BD597* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D35B8B3A660BD597*))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D35B8B3A660BD597_MERGEFROM_1_OFFSET))(this, a1);
	}
};
