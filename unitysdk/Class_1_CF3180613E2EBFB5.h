#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_224;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_CF3180613E2EBFB5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC060D0)
#define CLASS_1_CF3180613E2EBFB5_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC05A90)
#define CLASS_1_CF3180613E2EBFB5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC05D20)
#define CLASS_1_CF3180613E2EBFB5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC05B80)
#define CLASS_1_CF3180613E2EBFB5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC05EA0)
#define CLASS_1_CF3180613E2EBFB5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC06260)
#define CLASS_1_CF3180613E2EBFB5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC061B0)
#define CLASS_1_CF3180613E2EBFB5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CC05B20)
#define CLASS_1_CF3180613E2EBFB5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CC05B40)
#define CLASS_1_CF3180613E2EBFB5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CC059C0)
#define CLASS_1_CF3180613E2EBFB5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CC05B30)
#define CLASS_1_CF3180613E2EBFB5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CC05B50)
#define CLASS_1_CF3180613E2EBFB5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CC05B70)
#define CLASS_1_CF3180613E2EBFB5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CC05B60)
#define CLASS_1_CF3180613E2EBFB5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC059F0)
#define CLASS_1_CF3180613E2EBFB5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC05F00)
#define CLASS_1_CF3180613E2EBFB5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC05F60)
#define CLASS_1_CF3180613E2EBFB5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC06410)
#define CLASS_1_CF3180613E2EBFB5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC05A10)
#define CLASS_1_CF3180613E2EBFB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC05A00)

inline static constexpr unsigned int Class_1_CF3180613E2EBFB5_TypeDefinitionIndex = 26205;

class Class_1_CF3180613E2EBFB5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_CF3180613E2EBFB5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_CF3180613E2EBFB5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF3180613E2EBFB5_TypeDefinitionIndex)->GetStaticField(0x3BF90);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Class_1_D17272E82AE804C2_224* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::Boolean Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CF3180613E2EBFB5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF3180613E2EBFB5*))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_CF3180613E2EBFB5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_CF3180613E2EBFB5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CF3180613E2EBFB5* Clone()
	{
		return ((::Class_1_CF3180613E2EBFB5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_224* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_224*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_224* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_224*))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CF3180613E2EBFB5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CF3180613E2EBFB5*))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CF3180613E2EBFB5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF3180613E2EBFB5*))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CF3180613E2EBFB5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
