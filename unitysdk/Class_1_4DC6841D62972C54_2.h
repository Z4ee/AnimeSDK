#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_21.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E87D50)
#define CLASS_1_4DC6841D62972C54_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17E87AD0)
#define CLASS_1_4DC6841D62972C54_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E87C00)
#define CLASS_1_4DC6841D62972C54_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E87B60)
#define CLASS_1_4DC6841D62972C54_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E87C50)
#define CLASS_1_4DC6841D62972C54_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E87E50)
#define CLASS_1_4DC6841D62972C54_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E87E20)
#define CLASS_1_4DC6841D62972C54_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E87B50)
#define CLASS_1_4DC6841D62972C54_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E87B40)
#define CLASS_1_4DC6841D62972C54_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E87A80)
#define CLASS_1_4DC6841D62972C54_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E87C80)
#define CLASS_1_4DC6841D62972C54_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E87CE0)
#define CLASS_1_4DC6841D62972C54_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E87AA0)
#define CLASS_1_4DC6841D62972C54_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17E87A90)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_2_TypeDefinitionIndex = 23203;

class Class_1_4DC6841D62972C54_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_0A3761FE34514D6C_21 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_2*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_2* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_21 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_21(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_21 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_21))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_2*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_2*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
