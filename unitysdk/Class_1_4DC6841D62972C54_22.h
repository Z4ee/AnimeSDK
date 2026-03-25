#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_76.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D1ACC0)
#define CLASS_1_4DC6841D62972C54_22_CLONE_OFFSET UNITYSDK_OFFSET(0x17D1AAB0)
#define CLASS_1_4DC6841D62972C54_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D1AB70)
#define CLASS_1_4DC6841D62972C54_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D1AB10)
#define CLASS_1_4DC6841D62972C54_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D1ABC0)
#define CLASS_1_4DC6841D62972C54_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D1ADC0)
#define CLASS_1_4DC6841D62972C54_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D1AD90)
#define CLASS_1_4DC6841D62972C54_22_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17D1AB00)
#define CLASS_1_4DC6841D62972C54_22_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17D1AAF0)
#define CLASS_1_4DC6841D62972C54_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D1AA60)
#define CLASS_1_4DC6841D62972C54_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D1ABF0)
#define CLASS_1_4DC6841D62972C54_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D1AC50)
#define CLASS_1_4DC6841D62972C54_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D1AA80)
#define CLASS_1_4DC6841D62972C54_22__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1AA70)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_22_TypeDefinitionIndex = 27491;

class Class_1_4DC6841D62972C54_22 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_0A3761FE34514D6C_76 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_22*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_22* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_76 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_76(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_76 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_76))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_22*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_22*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
