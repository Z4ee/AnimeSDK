#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C742B0)
#define CLASS_1_4DC6841D62972C54_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17C74030)
#define CLASS_1_4DC6841D62972C54_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C74160)
#define CLASS_1_4DC6841D62972C54_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C740C0)
#define CLASS_1_4DC6841D62972C54_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C741B0)
#define CLASS_1_4DC6841D62972C54_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C743B0)
#define CLASS_1_4DC6841D62972C54_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C74380)
#define CLASS_1_4DC6841D62972C54_5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17C740B0)
#define CLASS_1_4DC6841D62972C54_5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17C740A0)
#define CLASS_1_4DC6841D62972C54_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C73FE0)
#define CLASS_1_4DC6841D62972C54_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C741E0)
#define CLASS_1_4DC6841D62972C54_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C74240)
#define CLASS_1_4DC6841D62972C54_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C74000)
#define CLASS_1_4DC6841D62972C54_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17C73FF0)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_5_TypeDefinitionIndex = 23479;

class Class_1_4DC6841D62972C54_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DFCB42601400F441 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_5*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_5* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_CLONE_OFFSET))(this);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_5*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_5*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
