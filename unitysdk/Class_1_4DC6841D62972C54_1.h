#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_9.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180B56A0)
#define CLASS_1_4DC6841D62972C54_1_CLONE_OFFSET UNITYSDK_OFFSET(0x180B53B0)
#define CLASS_1_4DC6841D62972C54_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180B5500)
#define CLASS_1_4DC6841D62972C54_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x180B5460)
#define CLASS_1_4DC6841D62972C54_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180B5560)
#define CLASS_1_4DC6841D62972C54_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180B5870)
#define CLASS_1_4DC6841D62972C54_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180B5830)
#define CLASS_1_4DC6841D62972C54_1_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x180B5450)
#define CLASS_1_4DC6841D62972C54_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x180B5430)
#define CLASS_1_4DC6841D62972C54_1_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x180B5440)
#define CLASS_1_4DC6841D62972C54_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x180B5420)
#define CLASS_1_4DC6841D62972C54_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180B5360)
#define CLASS_1_4DC6841D62972C54_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180B5590)
#define CLASS_1_4DC6841D62972C54_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x180B55F0)
#define CLASS_1_4DC6841D62972C54_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180B5380)
#define CLASS_1_4DC6841D62972C54_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180B5370)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_1_TypeDefinitionIndex = 23183;

class Class_1_4DC6841D62972C54_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DB663931210BBC27_9 Field_1_2; // 0x18
	::Enum_3_F80BFD5B986D5503_4 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_1*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_1* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_9 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_9))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_F80BFD5B986D5503_4 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_F80BFD5B986D5503_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_F80BFD5B986D5503_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_1*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_1*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
