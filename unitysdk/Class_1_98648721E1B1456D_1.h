#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98648721E1B1456D_1_Enum_3_2E741879C8CDBAFC_17.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_98648721E1B1456D_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F101E0)
#define CLASS_1_98648721E1B1456D_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17F0FDA0)
#define CLASS_1_98648721E1B1456D_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F0FE70)
#define CLASS_1_98648721E1B1456D_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F0FE10)
#define CLASS_1_98648721E1B1456D_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F10010)
#define CLASS_1_98648721E1B1456D_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F103B0)
#define CLASS_1_98648721E1B1456D_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F102F0)
#define CLASS_1_98648721E1B1456D_1_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17F0FDF0)
#define CLASS_1_98648721E1B1456D_1_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x17F0FCF0)
#define CLASS_1_98648721E1B1456D_1_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17F0FE00)
#define CLASS_1_98648721E1B1456D_1_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x17F0FD70)
#define CLASS_1_98648721E1B1456D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F0FC10)
#define CLASS_1_98648721E1B1456D_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F100B0)
#define CLASS_1_98648721E1B1456D_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F10110)
#define CLASS_1_98648721E1B1456D_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F0FC30)
#define CLASS_1_98648721E1B1456D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0FC20)

inline static constexpr unsigned int Class_1_98648721E1B1456D_1_TypeDefinitionIndex = 26232;

class Class_1_98648721E1B1456D_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_98648721E1B1456D_1_Enum_3_2E741879C8CDBAFC_17 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_98648721E1B1456D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98648721E1B1456D_1*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_98648721E1B1456D_1* Clone()
	{
		return ((::Class_1_98648721E1B1456D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Class_1_98648721E1B1456D_1_Enum_3_2E741879C8CDBAFC_17 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_98648721E1B1456D_1_Enum_3_2E741879C8CDBAFC_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_98648721E1B1456D_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98648721E1B1456D_1*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_98648721E1B1456D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98648721E1B1456D_1*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
