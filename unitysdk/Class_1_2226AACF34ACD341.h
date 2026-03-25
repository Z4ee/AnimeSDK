#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2226AACF34ACD341_Enum_3_2E741879C8CDBAFC_13.h"
#include "unitysdk/System/Object.h"

class Class_1_4C03BF72DA726FD1_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2226AACF34ACD341_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180AA440)
#define CLASS_1_2226AACF34ACD341_CLONE_OFFSET UNITYSDK_OFFSET(0x180AA090)
#define CLASS_1_2226AACF34ACD341_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180AA180)
#define CLASS_1_2226AACF34ACD341_EQUALS_OFFSET UNITYSDK_OFFSET(0x180AA120)
#define CLASS_1_2226AACF34ACD341_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180AA2C0)
#define CLASS_1_2226AACF34ACD341_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180AA640)
#define CLASS_1_2226AACF34ACD341_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180AA540)
#define CLASS_1_2226AACF34ACD341_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180AA0E0)
#define CLASS_1_2226AACF34ACD341_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x180AA100)
#define CLASS_1_2226AACF34ACD341_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180AA0F0)
#define CLASS_1_2226AACF34ACD341_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x180AA110)
#define CLASS_1_2226AACF34ACD341_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180AA070)
#define CLASS_1_2226AACF34ACD341_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x180AA030)
#define CLASS_1_2226AACF34ACD341_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180A9F80)
#define CLASS_1_2226AACF34ACD341_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180AA330)
#define CLASS_1_2226AACF34ACD341_WRITETO_OFFSET UNITYSDK_OFFSET(0x180AA390)
#define CLASS_1_2226AACF34ACD341__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180A9FA0)
#define CLASS_1_2226AACF34ACD341__CTOR_OFFSET UNITYSDK_OFFSET(0x180A9F90)

inline static constexpr unsigned int Class_1_2226AACF34ACD341_TypeDefinitionIndex = 25483;

class Class_1_2226AACF34ACD341 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xAD; // 0x0
	::System::Object* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::Class_1_2226AACF34ACD341_Enum_3_2E741879C8CDBAFC_13 Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2226AACF34ACD341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2226AACF34ACD341*))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2226AACF34ACD341* Clone()
	{
		return ((::Class_1_2226AACF34ACD341*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_4C03BF72DA726FD1_1* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_4C03BF72DA726FD1_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4C03BF72DA726FD1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C03BF72DA726FD1_1*))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_2226AACF34ACD341_Enum_3_2E741879C8CDBAFC_13 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_2226AACF34ACD341_Enum_3_2E741879C8CDBAFC_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2226AACF34ACD341* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2226AACF34ACD341*))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2226AACF34ACD341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2226AACF34ACD341*))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2226AACF34ACD341_MERGEFROM_1_OFFSET))(this, a1);
	}
};
