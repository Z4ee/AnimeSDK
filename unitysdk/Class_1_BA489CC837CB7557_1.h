#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_30.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BA489CC837CB7557_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E9B4F0)
#define CLASS_1_BA489CC837CB7557_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17E9AF60)
#define CLASS_1_BA489CC837CB7557_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E9B220)
#define CLASS_1_BA489CC837CB7557_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E9B120)
#define CLASS_1_BA489CC837CB7557_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E9B2F0)
#define CLASS_1_BA489CC837CB7557_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E9B8F0)
#define CLASS_1_BA489CC837CB7557_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E9B7F0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E9B0A0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17E9B0C0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17E9B0E0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E9B080)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E9B060)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E9B110)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E9B0B0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17E9B0D0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17E9B0F0)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E9B090)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E9B070)
#define CLASS_1_BA489CC837CB7557_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E9B100)
#define CLASS_1_BA489CC837CB7557_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E9AE90)
#define CLASS_1_BA489CC837CB7557_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E9B350)
#define CLASS_1_BA489CC837CB7557_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E9B3B0)
#define CLASS_1_BA489CC837CB7557_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E9AEB0)
#define CLASS_1_BA489CC837CB7557_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9AEA0)

inline static constexpr unsigned int Class_1_BA489CC837CB7557_1_TypeDefinitionIndex = 24437;

class Class_1_BA489CC837CB7557_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_32044B0173B87B04_3* Field_1_2; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_8; // 0x28
	::Enum_3_DB663931210BBC27_30 Field_1_12; // 0x2C
	::System::UInt32 Field_1_10; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BA489CC837CB7557_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BA489CC837CB7557_1*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BA489CC837CB7557_1* Clone()
	{
		return ((::Class_1_BA489CC837CB7557_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_CLONE_OFFSET))(this);
	}

	::Class_1_32044B0173B87B04_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_32044B0173B87B04_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_32044B0173B87B04_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_3*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_30 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_30(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_30 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_30))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BA489CC837CB7557_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BA489CC837CB7557_1*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BA489CC837CB7557_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BA489CC837CB7557_1*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BA489CC837CB7557_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
