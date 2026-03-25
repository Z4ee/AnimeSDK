#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/System/Object.h"

class Class_1_35379441886C7D20;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AC225A1BAAB9FACC_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18239CB0)
#define CLASS_1_AC225A1BAAB9FACC_5_CLONE_OFFSET UNITYSDK_OFFSET(0x182398A0)
#define CLASS_1_AC225A1BAAB9FACC_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18239AA0)
#define CLASS_1_AC225A1BAAB9FACC_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x182399C0)
#define CLASS_1_AC225A1BAAB9FACC_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18239B50)
#define CLASS_1_AC225A1BAAB9FACC_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18239F30)
#define CLASS_1_AC225A1BAAB9FACC_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18239E40)
#define CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182399A0)
#define CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18239980)
#define CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18239970)
#define CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182399B0)
#define CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18239990)
#define CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18239960)
#define CLASS_1_AC225A1BAAB9FACC_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182397F0)
#define CLASS_1_AC225A1BAAB9FACC_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18239B90)
#define CLASS_1_AC225A1BAAB9FACC_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x18239BF0)
#define CLASS_1_AC225A1BAAB9FACC_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18239810)
#define CLASS_1_AC225A1BAAB9FACC_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18239800)

inline static constexpr unsigned int Class_1_AC225A1BAAB9FACC_5_TypeDefinitionIndex = 25261;

class Class_1_AC225A1BAAB9FACC_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_35379441886C7D20* Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::Enum_3_63C076C405BE0674_1 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AC225A1BAAB9FACC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_5*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AC225A1BAAB9FACC_5* Clone()
	{
		return ((::Class_1_AC225A1BAAB9FACC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_CLONE_OFFSET))(this);
	}

	::Enum_3_63C076C405BE0674_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63C076C405BE0674_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63C076C405BE0674_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_35379441886C7D20* Method_1_24748FC20F375725()
	{
		return ((::Class_1_35379441886C7D20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_35379441886C7D20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AC225A1BAAB9FACC_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_5*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AC225A1BAAB9FACC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_5*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
