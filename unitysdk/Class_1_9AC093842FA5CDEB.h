#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9AC093842FA5CDEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D59260)
#define CLASS_1_9AC093842FA5CDEB_CLONE_OFFSET UNITYSDK_OFFSET(0x17D58EE0)
#define CLASS_1_9AC093842FA5CDEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D59050)
#define CLASS_1_9AC093842FA5CDEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D58FC0)
#define CLASS_1_9AC093842FA5CDEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D590D0)
#define CLASS_1_9AC093842FA5CDEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D594D0)
#define CLASS_1_9AC093842FA5CDEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D59480)
#define CLASS_1_9AC093842FA5CDEB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D58FA0)
#define CLASS_1_9AC093842FA5CDEB_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17D58F70)
#define CLASS_1_9AC093842FA5CDEB_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17D58F50)
#define CLASS_1_9AC093842FA5CDEB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D58FB0)
#define CLASS_1_9AC093842FA5CDEB_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17D58F40)
#define CLASS_1_9AC093842FA5CDEB_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17D58F60)
#define CLASS_1_9AC093842FA5CDEB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D58F90)
#define CLASS_1_9AC093842FA5CDEB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D58F80)
#define CLASS_1_9AC093842FA5CDEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D58E70)
#define CLASS_1_9AC093842FA5CDEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D59120)
#define CLASS_1_9AC093842FA5CDEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D59180)
#define CLASS_1_9AC093842FA5CDEB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D58E90)
#define CLASS_1_9AC093842FA5CDEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D58E80)

inline static constexpr unsigned int Class_1_9AC093842FA5CDEB_TypeDefinitionIndex = 25987;

class Class_1_9AC093842FA5CDEB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DFCB42601400F441 Field_1_4; // 0x18
	::System::Boolean Field_1_6; // 0x1C
	::System::Int64 Field_1_2; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9AC093842FA5CDEB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AC093842FA5CDEB*))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9AC093842FA5CDEB* Clone()
	{
		return ((::Class_1_9AC093842FA5CDEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9AC093842FA5CDEB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AC093842FA5CDEB*))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9AC093842FA5CDEB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AC093842FA5CDEB*))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AC093842FA5CDEB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
