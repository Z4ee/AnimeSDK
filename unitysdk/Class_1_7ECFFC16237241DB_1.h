#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7ECFFC16237241DB_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C97620)
#define CLASS_1_7ECFFC16237241DB_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C96FD0)
#define CLASS_1_7ECFFC16237241DB_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C97260)
#define CLASS_1_7ECFFC16237241DB_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C971A0)
#define CLASS_1_7ECFFC16237241DB_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C97350)
#define CLASS_1_7ECFFC16237241DB_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C97A80)
#define CLASS_1_7ECFFC16237241DB_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C979C0)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17C97180)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C970E0)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17C97100)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17C97060)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17C97110)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17C97070)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17C97050)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17C97190)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C970F0)
#define CLASS_1_7ECFFC16237241DB_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17C97040)
#define CLASS_1_7ECFFC16237241DB_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C96F40)
#define CLASS_1_7ECFFC16237241DB_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C97490)
#define CLASS_1_7ECFFC16237241DB_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C974F0)
#define CLASS_1_7ECFFC16237241DB_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C96F70)
#define CLASS_1_7ECFFC16237241DB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C96F50)

inline static constexpr unsigned int Class_1_7ECFFC16237241DB_1_TypeDefinitionIndex = 26257;

class Class_1_7ECFFC16237241DB_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	::System::String* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::Enum_3_ED790DAC948A65A9_1 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7ECFFC16237241DB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ECFFC16237241DB_1*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7ECFFC16237241DB_1* Clone()
	{
		return ((::Class_1_7ECFFC16237241DB_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_CLONE_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_1))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7ECFFC16237241DB_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7ECFFC16237241DB_1*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7ECFFC16237241DB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ECFFC16237241DB_1*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7ECFFC16237241DB_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
