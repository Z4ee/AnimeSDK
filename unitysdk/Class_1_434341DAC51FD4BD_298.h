#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_298_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180582A0)
#define CLASS_1_434341DAC51FD4BD_298_CLONE_OFFSET UNITYSDK_OFFSET(0x18058110)
#define CLASS_1_434341DAC51FD4BD_298_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180581B0)
#define CLASS_1_434341DAC51FD4BD_298_EQUALS_OFFSET UNITYSDK_OFFSET(0x18058150)
#define CLASS_1_434341DAC51FD4BD_298_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18058200)
#define CLASS_1_434341DAC51FD4BD_298_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180582F0)
#define CLASS_1_434341DAC51FD4BD_298_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180582C0)
#define CLASS_1_434341DAC51FD4BD_298_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180580C0)
#define CLASS_1_434341DAC51FD4BD_298_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18058230)
#define CLASS_1_434341DAC51FD4BD_298_WRITETO_OFFSET UNITYSDK_OFFSET(0x18058290)
#define CLASS_1_434341DAC51FD4BD_298__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180580E0)
#define CLASS_1_434341DAC51FD4BD_298__CTOR_OFFSET UNITYSDK_OFFSET(0x180580D0)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_298_TypeDefinitionIndex = 26584;

class Class_1_434341DAC51FD4BD_298 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_298* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_298*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_298* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_298*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_298* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_298*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_298* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_298*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_298_MERGEFROM_1_OFFSET))(this, a1);
	}
};
