#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B976504DB8ABA968_Enum_3_2E741879C8CDBAFC_14.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B976504DB8ABA968_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DB6110)
#define CLASS_1_B976504DB8ABA968_CLONE_OFFSET UNITYSDK_OFFSET(0x17DB5CB0)
#define CLASS_1_B976504DB8ABA968_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DB5D80)
#define CLASS_1_B976504DB8ABA968_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DB5D20)
#define CLASS_1_B976504DB8ABA968_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DB5F30)
#define CLASS_1_B976504DB8ABA968_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DB6330)
#define CLASS_1_B976504DB8ABA968_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DB6270)
#define CLASS_1_B976504DB8ABA968_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17DB5D00)
#define CLASS_1_B976504DB8ABA968_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17DB5D10)
#define CLASS_1_B976504DB8ABA968_METHOD_1_AA935885E31AA701_OFFSET UNITYSDK_OFFSET(0x17DB5C80)
#define CLASS_1_B976504DB8ABA968_METHOD_1_EA1C8FD1B81E659E_OFFSET UNITYSDK_OFFSET(0x17DB5C00)
#define CLASS_1_B976504DB8ABA968_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DB5B10)
#define CLASS_1_B976504DB8ABA968_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DB5FE0)
#define CLASS_1_B976504DB8ABA968_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DB6040)
#define CLASS_1_B976504DB8ABA968__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DB5B30)
#define CLASS_1_B976504DB8ABA968__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB5B20)

inline static constexpr unsigned int Class_1_B976504DB8ABA968_TypeDefinitionIndex = 25821;

class Class_1_B976504DB8ABA968 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_2; // 0x18
	::Class_1_B976504DB8ABA968_Enum_3_2E741879C8CDBAFC_14 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B976504DB8ABA968* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B976504DB8ABA968*))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B976504DB8ABA968* Clone()
	{
		return ((::Class_1_B976504DB8ABA968*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_EA1C8FD1B81E659E()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_METHOD_1_EA1C8FD1B81E659E_OFFSET))(this);
	}

	::System::Void Method_1_AA935885E31AA701(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_METHOD_1_AA935885E31AA701_OFFSET))(this, a1);
	}

	::Class_1_B976504DB8ABA968_Enum_3_2E741879C8CDBAFC_14 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_B976504DB8ABA968_Enum_3_2E741879C8CDBAFC_14(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B976504DB8ABA968* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B976504DB8ABA968*))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B976504DB8ABA968* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B976504DB8ABA968*))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B976504DB8ABA968_MERGEFROM_1_OFFSET))(this, a1);
	}
};
