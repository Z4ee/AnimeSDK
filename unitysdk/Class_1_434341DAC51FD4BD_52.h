#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_434341DAC51FD4BD_52_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F66600)
#define CLASS_1_434341DAC51FD4BD_52_CLONE_OFFSET UNITYSDK_OFFSET(0x17F66470)
#define CLASS_1_434341DAC51FD4BD_52_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F66510)
#define CLASS_1_434341DAC51FD4BD_52_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F664B0)
#define CLASS_1_434341DAC51FD4BD_52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F66560)
#define CLASS_1_434341DAC51FD4BD_52_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F66650)
#define CLASS_1_434341DAC51FD4BD_52_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F66620)
#define CLASS_1_434341DAC51FD4BD_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F66420)
#define CLASS_1_434341DAC51FD4BD_52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F66590)
#define CLASS_1_434341DAC51FD4BD_52_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F665F0)
#define CLASS_1_434341DAC51FD4BD_52__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F66440)
#define CLASS_1_434341DAC51FD4BD_52__CTOR_OFFSET UNITYSDK_OFFSET(0x17F66430)

inline static constexpr unsigned int Class_1_434341DAC51FD4BD_52_TypeDefinitionIndex = 23687;

class Class_1_434341DAC51FD4BD_52 : public ::System::Object
{
public:
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_434341DAC51FD4BD_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_52*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_434341DAC51FD4BD_52* Clone()
	{
		return ((::Class_1_434341DAC51FD4BD_52*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_434341DAC51FD4BD_52* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_434341DAC51FD4BD_52*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_434341DAC51FD4BD_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_52*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_434341DAC51FD4BD_52_MERGEFROM_1_OFFSET))(this, a1);
	}
};
