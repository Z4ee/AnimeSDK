#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8EE7B3CF5CC1FA6_Enum_3_2E741879C8CDBAFC_7.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F8EE7B3CF5CC1FA6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1826DEB0)
#define CLASS_1_F8EE7B3CF5CC1FA6_CLONE_OFFSET UNITYSDK_OFFSET(0x1826DAC0)
#define CLASS_1_F8EE7B3CF5CC1FA6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1826DB40)
#define CLASS_1_F8EE7B3CF5CC1FA6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1826DB10)
#define CLASS_1_F8EE7B3CF5CC1FA6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1826DCE0)
#define CLASS_1_F8EE7B3CF5CC1FA6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1826DFA0)
#define CLASS_1_F8EE7B3CF5CC1FA6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1826DEE0)
#define CLASS_1_F8EE7B3CF5CC1FA6_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1826DAF0)
#define CLASS_1_F8EE7B3CF5CC1FA6_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1826DB00)
#define CLASS_1_F8EE7B3CF5CC1FA6_METHOD_1_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0x1826DA00)
#define CLASS_1_F8EE7B3CF5CC1FA6_METHOD_1_FA11E6DA8C301651_OFFSET UNITYSDK_OFFSET(0x1826DA90)
#define CLASS_1_F8EE7B3CF5CC1FA6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1826D920)
#define CLASS_1_F8EE7B3CF5CC1FA6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1826DD80)
#define CLASS_1_F8EE7B3CF5CC1FA6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1826DDE0)
#define CLASS_1_F8EE7B3CF5CC1FA6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1826D940)
#define CLASS_1_F8EE7B3CF5CC1FA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1826D930)

inline static constexpr unsigned int Class_1_F8EE7B3CF5CC1FA6_TypeDefinitionIndex = 24016;

class Class_1_F8EE7B3CF5CC1FA6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_F8EE7B3CF5CC1FA6_Enum_3_2E741879C8CDBAFC_7 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F8EE7B3CF5CC1FA6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8EE7B3CF5CC1FA6*))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F8EE7B3CF5CC1FA6* Clone()
	{
		return ((::Class_1_F8EE7B3CF5CC1FA6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_METHOD_1_B078C58C2CD24B5E_OFFSET))(this);
	}

	::System::Void Method_1_FA11E6DA8C301651(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_METHOD_1_FA11E6DA8C301651_OFFSET))(this, a1);
	}

	::Class_1_F8EE7B3CF5CC1FA6_Enum_3_2E741879C8CDBAFC_7 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_F8EE7B3CF5CC1FA6_Enum_3_2E741879C8CDBAFC_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F8EE7B3CF5CC1FA6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F8EE7B3CF5CC1FA6*))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F8EE7B3CF5CC1FA6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8EE7B3CF5CC1FA6*))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F8EE7B3CF5CC1FA6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
