#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7ECFFC16237241DB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F99B20)
#define CLASS_1_7ECFFC16237241DB_CLONE_OFFSET UNITYSDK_OFFSET(0x17F99470)
#define CLASS_1_7ECFFC16237241DB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F99750)
#define CLASS_1_7ECFFC16237241DB_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F99670)
#define CLASS_1_7ECFFC16237241DB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F99810)
#define CLASS_1_7ECFFC16237241DB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F9A000)
#define CLASS_1_7ECFFC16237241DB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F99F40)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F99510)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17F995D0)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F994F0)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17F995F0)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17F99550)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17F99600)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17F99560)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F99540)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F99520)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17F995E0)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F99500)
#define CLASS_1_7ECFFC16237241DB_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F99530)
#define CLASS_1_7ECFFC16237241DB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F993F0)
#define CLASS_1_7ECFFC16237241DB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F99960)
#define CLASS_1_7ECFFC16237241DB_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F999C0)
#define CLASS_1_7ECFFC16237241DB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F99420)
#define CLASS_1_7ECFFC16237241DB__CTOR_OFFSET UNITYSDK_OFFSET(0x17F99400)

inline static constexpr unsigned int Class_1_7ECFFC16237241DB_TypeDefinitionIndex = 26256;

class Class_1_7ECFFC16237241DB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_12; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::Enum_3_ED790DAC948A65A9_1 Field_1_6; // 0x30
	::System::UInt32 Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7ECFFC16237241DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ECFFC16237241DB*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7ECFFC16237241DB* Clone()
	{
		return ((::Class_1_7ECFFC16237241DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_1))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7ECFFC16237241DB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7ECFFC16237241DB*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7ECFFC16237241DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ECFFC16237241DB*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
