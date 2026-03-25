#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96722E0684D66029_Enum_3_2E741879C8CDBAFC_8.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_14;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_96722E0684D66029_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D9F130)
#define CLASS_1_96722E0684D66029_CLONE_OFFSET UNITYSDK_OFFSET(0x17D9EDA0)
#define CLASS_1_96722E0684D66029_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D9EE20)
#define CLASS_1_96722E0684D66029_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D9EDF0)
#define CLASS_1_96722E0684D66029_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D9EF90)
#define CLASS_1_96722E0684D66029_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D9F390)
#define CLASS_1_96722E0684D66029_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D9F1E0)
#define CLASS_1_96722E0684D66029_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17D9EDD0)
#define CLASS_1_96722E0684D66029_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x17D9ED20)
#define CLASS_1_96722E0684D66029_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17D9EDE0)
#define CLASS_1_96722E0684D66029_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D9ED80)
#define CLASS_1_96722E0684D66029_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D9EC30)
#define CLASS_1_96722E0684D66029_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D9F020)
#define CLASS_1_96722E0684D66029_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D9F080)
#define CLASS_1_96722E0684D66029__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D9EC50)
#define CLASS_1_96722E0684D66029__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9EC40)

inline static constexpr unsigned int Class_1_96722E0684D66029_TypeDefinitionIndex = 24084;

class Class_1_96722E0684D66029 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x197; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_96722E0684D66029_Enum_3_2E741879C8CDBAFC_8 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_96722E0684D66029* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96722E0684D66029*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_96722E0684D66029* Clone()
	{
		return ((::Class_1_96722E0684D66029*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_CLONE_OFFSET))(this);
	}

	::Class_1_3C58D309C7A040F5_14* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_3C58D309C7A040F5_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3C58D309C7A040F5_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_14*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_96722E0684D66029_Enum_3_2E741879C8CDBAFC_8 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_96722E0684D66029_Enum_3_2E741879C8CDBAFC_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_96722E0684D66029* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_96722E0684D66029*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_96722E0684D66029* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96722E0684D66029*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_96722E0684D66029_MERGEFROM_1_OFFSET))(this, a1);
	}
};
