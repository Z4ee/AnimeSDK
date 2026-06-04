#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F753D12928E830D;
class Class_1_D17272E82AE804C2_49;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_90116BE96AF7B744_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7A3550)
#define CLASS_1_90116BE96AF7B744_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7A2FA0)
#define CLASS_1_90116BE96AF7B744_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7A3100)
#define CLASS_1_90116BE96AF7B744_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7A30A0)
#define CLASS_1_90116BE96AF7B744_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7A3220)
#define CLASS_1_90116BE96AF7B744_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7A3A30)
#define CLASS_1_90116BE96AF7B744_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7A38B0)
#define CLASS_1_90116BE96AF7B744_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A7A3080)
#define CLASS_1_90116BE96AF7B744_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7A3060)
#define CLASS_1_90116BE96AF7B744_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A7A3000)
#define CLASS_1_90116BE96AF7B744_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A7A2E10)
#define CLASS_1_90116BE96AF7B744_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1A7A3050)
#define CLASS_1_90116BE96AF7B744_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A7A3030)
#define CLASS_1_90116BE96AF7B744_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A7A2FF0)
#define CLASS_1_90116BE96AF7B744_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A7A3090)
#define CLASS_1_90116BE96AF7B744_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7A3070)
#define CLASS_1_90116BE96AF7B744_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1A7A3040)
#define CLASS_1_90116BE96AF7B744_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A7A3020)
#define CLASS_1_90116BE96AF7B744_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A7A3010)
#define CLASS_1_90116BE96AF7B744_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7A2E70)
#define CLASS_1_90116BE96AF7B744_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7A3360)
#define CLASS_1_90116BE96AF7B744_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7A33C0)
#define CLASS_1_90116BE96AF7B744__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7A3C00)
#define CLASS_1_90116BE96AF7B744__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7A2EC0)
#define CLASS_1_90116BE96AF7B744__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A2E80)

inline static constexpr unsigned int Class_1_90116BE96AF7B744_TypeDefinitionIndex = 24437;

class Class_1_90116BE96AF7B744 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_49*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_49*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90116BE96AF7B744_TypeDefinitionIndex)->GetStaticField(0x48D10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_90116BE96AF7B744*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_90116BE96AF7B744*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90116BE96AF7B744_TypeDefinitionIndex)->GetStaticField(0x48D18);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_49*>* Field_1_8; // 0x10
	::Class_1_7F753D12928E830D* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::Int64 Field_1_13; // 0x30
	::System::Int64 Field_1_14; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_90116BE96AF7B744* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_90116BE96AF7B744*))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_90116BE96AF7B744*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_90116BE96AF7B744*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_90116BE96AF7B744* Clone()
	{
		return ((::Class_1_90116BE96AF7B744*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_49*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_49*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_7F753D12928E830D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7F753D12928E830D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7F753D12928E830D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F753D12928E830D*))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_90116BE96AF7B744* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_90116BE96AF7B744*))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_90116BE96AF7B744* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_90116BE96AF7B744*))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_90116BE96AF7B744_MERGEFROM_1_OFFSET))(this, a1);
	}
};
