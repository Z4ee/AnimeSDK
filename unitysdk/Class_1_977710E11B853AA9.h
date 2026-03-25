#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_977710E11B853AA9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18241160)
#define CLASS_1_977710E11B853AA9_CLONE_OFFSET UNITYSDK_OFFSET(0x18240E60)
#define CLASS_1_977710E11B853AA9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18240FD0)
#define CLASS_1_977710E11B853AA9_EQUALS_OFFSET UNITYSDK_OFFSET(0x18240F20)
#define CLASS_1_977710E11B853AA9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18241040)
#define CLASS_1_977710E11B853AA9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18241280)
#define CLASS_1_977710E11B853AA9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18241240)
#define CLASS_1_977710E11B853AA9_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18240EF0)
#define CLASS_1_977710E11B853AA9_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18240EE0)
#define CLASS_1_977710E11B853AA9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18240F10)
#define CLASS_1_977710E11B853AA9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18240F00)
#define CLASS_1_977710E11B853AA9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18240E00)
#define CLASS_1_977710E11B853AA9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18241070)
#define CLASS_1_977710E11B853AA9_WRITETO_OFFSET UNITYSDK_OFFSET(0x182410D0)
#define CLASS_1_977710E11B853AA9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18240E20)
#define CLASS_1_977710E11B853AA9__CTOR_OFFSET UNITYSDK_OFFSET(0x18240E10)

inline static constexpr unsigned int Class_1_977710E11B853AA9_TypeDefinitionIndex = 25142;

class Class_1_977710E11B853AA9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_0A3761FE34514D6C_45 Field_1_2; // 0x18
	::System::Boolean Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_977710E11B853AA9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_977710E11B853AA9*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_977710E11B853AA9* Clone()
	{
		return ((::Class_1_977710E11B853AA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_45 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_45(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_45 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_45))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_977710E11B853AA9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_977710E11B853AA9*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_977710E11B853AA9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_977710E11B853AA9*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
