#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_58C02EFC41D1F04D_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C40870)
#define CLASS_1_58C02EFC41D1F04D_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C40520)
#define CLASS_1_58C02EFC41D1F04D_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C40690)
#define CLASS_1_58C02EFC41D1F04D_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C405E0)
#define CLASS_1_58C02EFC41D1F04D_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C40740)
#define CLASS_1_58C02EFC41D1F04D_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C409C0)
#define CLASS_1_58C02EFC41D1F04D_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C40940)
#define CLASS_1_58C02EFC41D1F04D_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C405C0)
#define CLASS_1_58C02EFC41D1F04D_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C405A0)
#define CLASS_1_58C02EFC41D1F04D_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C405D0)
#define CLASS_1_58C02EFC41D1F04D_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C405B0)
#define CLASS_1_58C02EFC41D1F04D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C40490)
#define CLASS_1_58C02EFC41D1F04D_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C40790)
#define CLASS_1_58C02EFC41D1F04D_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C407F0)
#define CLASS_1_58C02EFC41D1F04D_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C404B0)
#define CLASS_1_58C02EFC41D1F04D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C404A0)

inline static constexpr unsigned int Class_1_58C02EFC41D1F04D_1_TypeDefinitionIndex = 23291;

class Class_1_58C02EFC41D1F04D_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_14E02E1F6D70E487_1* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_58C02EFC41D1F04D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_1*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_58C02EFC41D1F04D_1* Clone()
	{
		return ((::Class_1_58C02EFC41D1F04D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_CLONE_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_58C02EFC41D1F04D_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_1*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_58C02EFC41D1F04D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_1*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
