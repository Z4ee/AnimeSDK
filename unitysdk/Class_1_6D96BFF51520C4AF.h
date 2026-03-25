#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D96BFF51520C4AF_Enum_3_FCBB2C507E9B21A3.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_4.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6D96BFF51520C4AF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EC1BE0)
#define CLASS_1_6D96BFF51520C4AF_CLONE_OFFSET UNITYSDK_OFFSET(0x17EC1490)
#define CLASS_1_6D96BFF51520C4AF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EC1580)
#define CLASS_1_6D96BFF51520C4AF_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EC1520)
#define CLASS_1_6D96BFF51520C4AF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EC1820)
#define CLASS_1_6D96BFF51520C4AF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EC2100)
#define CLASS_1_6D96BFF51520C4AF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EC1F20)
#define CLASS_1_6D96BFF51520C4AF_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17EC1500)
#define CLASS_1_6D96BFF51520C4AF_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17EC14F0)
#define CLASS_1_6D96BFF51520C4AF_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x17EC12F0)
#define CLASS_1_6D96BFF51520C4AF_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17EC1510)
#define CLASS_1_6D96BFF51520C4AF_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17EC14E0)
#define CLASS_1_6D96BFF51520C4AF_METHOD_1_AA24ACE6DC9948B7_OFFSET UNITYSDK_OFFSET(0x17EC13A0)
#define CLASS_1_6D96BFF51520C4AF_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x17EC1440)
#define CLASS_1_6D96BFF51520C4AF_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x17EC1370)
#define CLASS_1_6D96BFF51520C4AF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EC10F0)
#define CLASS_1_6D96BFF51520C4AF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EC1980)
#define CLASS_1_6D96BFF51520C4AF_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EC19E0)
#define CLASS_1_6D96BFF51520C4AF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EC1110)
#define CLASS_1_6D96BFF51520C4AF__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC1100)

inline static constexpr unsigned int Class_1_6D96BFF51520C4AF_TypeDefinitionIndex = 22935;

class Class_1_6D96BFF51520C4AF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_5; // 0x18
	::Enum_3_0A3761FE34514D6C_3 Field_1_2; // 0x20
	::Class_1_6D96BFF51520C4AF_Enum_3_FCBB2C507E9B21A3 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6D96BFF51520C4AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D96BFF51520C4AF*))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6D96BFF51520C4AF* Clone()
	{
		return ((::Class_1_6D96BFF51520C4AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_4 Method_1_AA24ACE6DC9948B7()
	{
		return ((::Enum_3_0A3761FE34514D6C_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_METHOD_1_AA24ACE6DC9948B7_OFFSET))(this);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_0A3761FE34514D6C_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_4))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::Class_1_6D96BFF51520C4AF_Enum_3_FCBB2C507E9B21A3 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_6D96BFF51520C4AF_Enum_3_FCBB2C507E9B21A3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6D96BFF51520C4AF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6D96BFF51520C4AF*))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6D96BFF51520C4AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D96BFF51520C4AF*))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6D96BFF51520C4AF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
