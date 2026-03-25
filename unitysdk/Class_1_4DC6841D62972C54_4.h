#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1821C330)
#define CLASS_1_4DC6841D62972C54_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1821C0B0)
#define CLASS_1_4DC6841D62972C54_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1821C1E0)
#define CLASS_1_4DC6841D62972C54_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1821C140)
#define CLASS_1_4DC6841D62972C54_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1821C230)
#define CLASS_1_4DC6841D62972C54_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1821C430)
#define CLASS_1_4DC6841D62972C54_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1821C400)
#define CLASS_1_4DC6841D62972C54_4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1821C130)
#define CLASS_1_4DC6841D62972C54_4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1821C120)
#define CLASS_1_4DC6841D62972C54_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1821C060)
#define CLASS_1_4DC6841D62972C54_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1821C260)
#define CLASS_1_4DC6841D62972C54_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1821C2C0)
#define CLASS_1_4DC6841D62972C54_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1821C080)
#define CLASS_1_4DC6841D62972C54_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1821C070)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_4_TypeDefinitionIndex = 23474;

class Class_1_4DC6841D62972C54_4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DFCB42601400F441 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_4*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_4* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_CLONE_OFFSET))(this);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_4*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_4*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
