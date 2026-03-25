#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13.h"
#include "unitysdk/System/Object.h"

class Class_1_1D123525F0B0B4C7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A4E2764947F50E01_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18115760)
#define CLASS_1_A4E2764947F50E01_CLONE_OFFSET UNITYSDK_OFFSET(0x181153A0)
#define CLASS_1_A4E2764947F50E01_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18115580)
#define CLASS_1_A4E2764947F50E01_EQUALS_OFFSET UNITYSDK_OFFSET(0x181154A0)
#define CLASS_1_A4E2764947F50E01_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18115630)
#define CLASS_1_A4E2764947F50E01_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18115900)
#define CLASS_1_A4E2764947F50E01_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18115870)
#define CLASS_1_A4E2764947F50E01_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18115480)
#define CLASS_1_A4E2764947F50E01_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18115470)
#define CLASS_1_A4E2764947F50E01_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18115490)
#define CLASS_1_A4E2764947F50E01_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18115460)
#define CLASS_1_A4E2764947F50E01_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18115300)
#define CLASS_1_A4E2764947F50E01_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18115670)
#define CLASS_1_A4E2764947F50E01_WRITETO_OFFSET UNITYSDK_OFFSET(0x181156D0)
#define CLASS_1_A4E2764947F50E01__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18115320)
#define CLASS_1_A4E2764947F50E01__CTOR_OFFSET UNITYSDK_OFFSET(0x18115310)

inline static constexpr unsigned int Class_1_A4E2764947F50E01_TypeDefinitionIndex = 22934;

class Class_1_A4E2764947F50E01 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Class_1_1D123525F0B0B4C7* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_0F1B992870941C13 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A4E2764947F50E01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A4E2764947F50E01* Clone()
	{
		return ((::Class_1_A4E2764947F50E01*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_CLONE_OFFSET))(this);
	}

	::Enum_3_0F1B992870941C13 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0F1B992870941C13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0F1B992870941C13 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_1D123525F0B0B4C7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1D123525F0B0B4C7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1D123525F0B0B4C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D123525F0B0B4C7*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A4E2764947F50E01* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A4E2764947F50E01*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A4E2764947F50E01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_MERGEFROM_1_OFFSET))(this, a1);
	}
};
