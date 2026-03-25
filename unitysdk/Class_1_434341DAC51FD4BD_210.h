#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_210_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180CDB90)
#define CLASS_1_434341DAC51FD4BD_210_CLONE_OFFSET UNITYSDK_OFFSET(0x180CD9A0)
#define CLASS_1_434341DAC51FD4BD_210_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180CDAA0)
#define CLASS_1_434341DAC51FD4BD_210_EQUALS_OFFSET UNITYSDK_OFFSET(0x180CDA10)
#define CLASS_1_434341DAC51FD4BD_210_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180CDAF0)
#define CLASS_1_434341DAC51FD4BD_210_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180CDBE0)
#define CLASS_1_434341DAC51FD4BD_210_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180CDBB0)
#define CLASS_1_434341DAC51FD4BD_210_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180CD950)
#define CLASS_1_434341DAC51FD4BD_210_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180CDB20)
#define CLASS_1_434341DAC51FD4BD_210_WRITETO_OFFSET UNITYSDK_OFFSET(0x180CDB80)
#define CLASS_1_434341DAC51FD4BD_210__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180CD970)
#define CLASS_1_434341DAC51FD4BD_210__CTOR_OFFSET UNITYSDK_OFFSET(0x180CD960)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_210_TypeDefinitionIndex = 25643;

class Class_1_434341DAC51FD4BD_210 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_210* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_210*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_210* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_210*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_210* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_210*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_210* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_210*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_210_MERGEFROM_1_OFFSET))(this, a1);
	}
};
