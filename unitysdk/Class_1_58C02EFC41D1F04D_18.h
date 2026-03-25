#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_45;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_58C02EFC41D1F04D_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180CABE0)
#define CLASS_1_58C02EFC41D1F04D_18_CLONE_OFFSET UNITYSDK_OFFSET(0x180CA850)
#define CLASS_1_58C02EFC41D1F04D_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180CA9E0)
#define CLASS_1_58C02EFC41D1F04D_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x180CA930)
#define CLASS_1_58C02EFC41D1F04D_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180CAA90)
#define CLASS_1_58C02EFC41D1F04D_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180CADA0)
#define CLASS_1_58C02EFC41D1F04D_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180CACB0)
#define CLASS_1_58C02EFC41D1F04D_18_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180CA8F0)
#define CLASS_1_58C02EFC41D1F04D_18_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180CA910)
#define CLASS_1_58C02EFC41D1F04D_18_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180CA900)
#define CLASS_1_58C02EFC41D1F04D_18_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180CA920)
#define CLASS_1_58C02EFC41D1F04D_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180CA7A0)
#define CLASS_1_58C02EFC41D1F04D_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180CAB00)
#define CLASS_1_58C02EFC41D1F04D_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x180CAB60)
#define CLASS_1_58C02EFC41D1F04D_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180CA7C0)
#define CLASS_1_58C02EFC41D1F04D_18__CTOR_OFFSET UNITYSDK_OFFSET(0x180CA7B0)

inline static constexpr unsigned int Class_1_58C02EFC41D1F04D_18_TypeDefinitionIndex = 26341;

class Class_1_58C02EFC41D1F04D_18 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Class_1_352A8B3482C80E7D_45* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_58C02EFC41D1F04D_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_18*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_58C02EFC41D1F04D_18* Clone()
	{
		return ((::Class_1_58C02EFC41D1F04D_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_352A8B3482C80E7D_45* Method_1_24748FC20F375725()
	{
		return ((::Class_1_352A8B3482C80E7D_45*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_352A8B3482C80E7D_45* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_45*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_58C02EFC41D1F04D_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_18*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_58C02EFC41D1F04D_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_18*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_58C02EFC41D1F04D_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
