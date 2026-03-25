#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_54_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B2D350)
#define CLASS_1_434341DAC51FD4BD_54_CLONE_OFFSET UNITYSDK_OFFSET(0x17B2D1C0)
#define CLASS_1_434341DAC51FD4BD_54_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B2D260)
#define CLASS_1_434341DAC51FD4BD_54_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B2D200)
#define CLASS_1_434341DAC51FD4BD_54_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B2D2B0)
#define CLASS_1_434341DAC51FD4BD_54_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B2D3A0)
#define CLASS_1_434341DAC51FD4BD_54_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B2D370)
#define CLASS_1_434341DAC51FD4BD_54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B2D170)
#define CLASS_1_434341DAC51FD4BD_54_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B2D2E0)
#define CLASS_1_434341DAC51FD4BD_54_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B2D340)
#define CLASS_1_434341DAC51FD4BD_54__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B2D190)
#define CLASS_1_434341DAC51FD4BD_54__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2D180)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_54_TypeDefinitionIndex = 23714;

class Class_1_434341DAC51FD4BD_54 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_54*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_54* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_54* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_54*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_54*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_54_MERGEFROM_1_OFFSET))(this, a1);
	}
};
