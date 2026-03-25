#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_3.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18041E20)
#define CLASS_1_4DC6841D62972C54_6_CLONE_OFFSET UNITYSDK_OFFSET(0x18041C10)
#define CLASS_1_4DC6841D62972C54_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18041CD0)
#define CLASS_1_4DC6841D62972C54_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x18041C70)
#define CLASS_1_4DC6841D62972C54_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18041D20)
#define CLASS_1_4DC6841D62972C54_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18041F20)
#define CLASS_1_4DC6841D62972C54_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18041EF0)
#define CLASS_1_4DC6841D62972C54_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18041C60)
#define CLASS_1_4DC6841D62972C54_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18041C50)
#define CLASS_1_4DC6841D62972C54_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18041BC0)
#define CLASS_1_4DC6841D62972C54_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18041D50)
#define CLASS_1_4DC6841D62972C54_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x18041DB0)
#define CLASS_1_4DC6841D62972C54_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18041BE0)
#define CLASS_1_4DC6841D62972C54_6__CTOR_OFFSET UNITYSDK_OFFSET(0x18041BD0)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_6_TypeDefinitionIndex = 23612;

class Class_1_4DC6841D62972C54_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_63C076C405BE0674_3 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_6*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_6* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_CLONE_OFFSET))(this);
	}

	::Enum_3_63C076C405BE0674_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63C076C405BE0674_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63C076C405BE0674_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_3))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_6*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_6*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
