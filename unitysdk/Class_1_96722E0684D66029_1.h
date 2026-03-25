#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96722E0684D66029_1_Enum_3_2E741879C8CDBAFC_19.h"
#include "unitysdk/System/Object.h"

class Class_1_D000DCBE9BBC74C2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_96722E0684D66029_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ADBB40)
#define CLASS_1_96722E0684D66029_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17ADB780)
#define CLASS_1_96722E0684D66029_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ADB850)
#define CLASS_1_96722E0684D66029_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ADB7F0)
#define CLASS_1_96722E0684D66029_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ADB9C0)
#define CLASS_1_96722E0684D66029_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ADBD80)
#define CLASS_1_96722E0684D66029_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ADBBE0)
#define CLASS_1_96722E0684D66029_1_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17ADB7D0)
#define CLASS_1_96722E0684D66029_1_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x17ADB700)
#define CLASS_1_96722E0684D66029_1_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17ADB7E0)
#define CLASS_1_96722E0684D66029_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17ADB760)
#define CLASS_1_96722E0684D66029_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ADB610)
#define CLASS_1_96722E0684D66029_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ADBA40)
#define CLASS_1_96722E0684D66029_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ADBAA0)
#define CLASS_1_96722E0684D66029_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ADB630)
#define CLASS_1_96722E0684D66029_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADB620)

inline static constexpr unsigned int Class_1_96722E0684D66029_1_TypeDefinitionIndex = 26469;

class Class_1_96722E0684D66029_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_96722E0684D66029_1_Enum_3_2E741879C8CDBAFC_19 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_96722E0684D66029_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96722E0684D66029_1*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_96722E0684D66029_1* Clone()
	{
		return ((::Class_1_96722E0684D66029_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_CLONE_OFFSET))(this);
	}

	::Class_1_D000DCBE9BBC74C2* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_D000DCBE9BBC74C2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D000DCBE9BBC74C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D000DCBE9BBC74C2*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_96722E0684D66029_1_Enum_3_2E741879C8CDBAFC_19 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_96722E0684D66029_1_Enum_3_2E741879C8CDBAFC_19(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_96722E0684D66029_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_96722E0684D66029_1*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_96722E0684D66029_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96722E0684D66029_1*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
