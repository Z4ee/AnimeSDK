#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C6136935592F69D0_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF17B60)
#define CLASS_1_C6136935592F69D0_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF174E0)
#define CLASS_1_C6136935592F69D0_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF175F0)
#define CLASS_1_C6136935592F69D0_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF175C0)
#define CLASS_1_C6136935592F69D0_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF17730)
#define CLASS_1_C6136935592F69D0_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF17E50)
#define CLASS_1_C6136935592F69D0_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF17D80)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1BF17580)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1BF175A0)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1BF17540)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1BF17560)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1BF17530)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BF17380)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1BF17590)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1BF175B0)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1BF17550)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1BF17570)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1BF17520)
#define CLASS_1_C6136935592F69D0_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BF17510)
#define CLASS_1_C6136935592F69D0_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF173B0)
#define CLASS_1_C6136935592F69D0_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF17890)
#define CLASS_1_C6136935592F69D0_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF178F0)
#define CLASS_1_C6136935592F69D0_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF17FE0)
#define CLASS_1_C6136935592F69D0_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF17410)
#define CLASS_1_C6136935592F69D0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF173C0)

inline static constexpr unsigned int Class_1_C6136935592F69D0_1_TypeDefinitionIndex = 31658;

class Class_1_C6136935592F69D0_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C6136935592F69D0_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C6136935592F69D0_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6136935592F69D0_1_TypeDefinitionIndex)->GetStaticField(0x24010);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6136935592F69D0_1_TypeDefinitionIndex)->GetStaticField(0x24018);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	::Class_1_C3162D2F7EA647B9* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::UInt32 Field_1_13; // 0x30
	::System::Boolean Field_1_14; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C6136935592F69D0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6136935592F69D0_1*))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C6136935592F69D0_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C6136935592F69D0_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C6136935592F69D0_1* Clone()
	{
		return ((::Class_1_C6136935592F69D0_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_C3162D2F7EA647B9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C3162D2F7EA647B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C6136935592F69D0_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C6136935592F69D0_1*))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C6136935592F69D0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6136935592F69D0_1*))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C6136935592F69D0_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
