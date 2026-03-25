#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_13.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FCCDDA66801E0833_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180B8910)
#define CLASS_1_FCCDDA66801E0833_CLONE_OFFSET UNITYSDK_OFFSET(0x180B8530)
#define CLASS_1_FCCDDA66801E0833_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180B8720)
#define CLASS_1_FCCDDA66801E0833_EQUALS_OFFSET UNITYSDK_OFFSET(0x180B8640)
#define CLASS_1_FCCDDA66801E0833_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180B87D0)
#define CLASS_1_FCCDDA66801E0833_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180B8AC0)
#define CLASS_1_FCCDDA66801E0833_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180B8A20)
#define CLASS_1_FCCDDA66801E0833_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180B8600)
#define CLASS_1_FCCDDA66801E0833_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x180B8630)
#define CLASS_1_FCCDDA66801E0833_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180B8610)
#define CLASS_1_FCCDDA66801E0833_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x180B8620)
#define CLASS_1_FCCDDA66801E0833_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180B8480)
#define CLASS_1_FCCDDA66801E0833_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180B8820)
#define CLASS_1_FCCDDA66801E0833_WRITETO_OFFSET UNITYSDK_OFFSET(0x180B8880)
#define CLASS_1_FCCDDA66801E0833__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180B84A0)
#define CLASS_1_FCCDDA66801E0833__CTOR_OFFSET UNITYSDK_OFFSET(0x180B8490)

inline static constexpr unsigned int Class_1_FCCDDA66801E0833_TypeDefinitionIndex = 24525;

class Class_1_FCCDDA66801E0833 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Class_1_C9DFE5EE7107C629_7* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_96F6662CA3713095_13 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FCCDDA66801E0833* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCCDDA66801E0833*))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FCCDDA66801E0833* Clone()
	{
		return ((::Class_1_FCCDDA66801E0833*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_CLONE_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_13 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_13 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_13))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FCCDDA66801E0833* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FCCDDA66801E0833*))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FCCDDA66801E0833* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCCDDA66801E0833*))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FCCDDA66801E0833_MERGEFROM_1_OFFSET))(this, a1);
	}
};
