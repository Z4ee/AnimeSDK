#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E3BF1E96389B67AF_Enum_3_2E741879C8CDBAFC_3.h"
#include "unitysdk/System/Object.h"

class Class_1_51BA4980ED225F7B;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E3BF1E96389B67AF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FF4B00)
#define CLASS_1_E3BF1E96389B67AF_CLONE_OFFSET UNITYSDK_OFFSET(0x17FF4810)
#define CLASS_1_E3BF1E96389B67AF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FF4890)
#define CLASS_1_E3BF1E96389B67AF_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FF4860)
#define CLASS_1_E3BF1E96389B67AF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FF49C0)
#define CLASS_1_E3BF1E96389B67AF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FF4C50)
#define CLASS_1_E3BF1E96389B67AF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FF4B70)
#define CLASS_1_E3BF1E96389B67AF_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17FF4840)
#define CLASS_1_E3BF1E96389B67AF_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17FF4850)
#define CLASS_1_E3BF1E96389B67AF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FF47F0)
#define CLASS_1_E3BF1E96389B67AF_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x17FF47B0)
#define CLASS_1_E3BF1E96389B67AF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FF4700)
#define CLASS_1_E3BF1E96389B67AF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FF4A20)
#define CLASS_1_E3BF1E96389B67AF_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FF4A80)
#define CLASS_1_E3BF1E96389B67AF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FF4720)
#define CLASS_1_E3BF1E96389B67AF__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF4710)

inline static constexpr unsigned int Class_1_E3BF1E96389B67AF_TypeDefinitionIndex = 23632;

class Class_1_E3BF1E96389B67AF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_E3BF1E96389B67AF_Enum_3_2E741879C8CDBAFC_3 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E3BF1E96389B67AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3BF1E96389B67AF*))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E3BF1E96389B67AF* Clone()
	{
		return ((::Class_1_E3BF1E96389B67AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_CLONE_OFFSET))(this);
	}

	::Class_1_51BA4980ED225F7B* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_51BA4980ED225F7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_51BA4980ED225F7B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_51BA4980ED225F7B*))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_E3BF1E96389B67AF_Enum_3_2E741879C8CDBAFC_3 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_E3BF1E96389B67AF_Enum_3_2E741879C8CDBAFC_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E3BF1E96389B67AF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E3BF1E96389B67AF*))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E3BF1E96389B67AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3BF1E96389B67AF*))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E3BF1E96389B67AF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
