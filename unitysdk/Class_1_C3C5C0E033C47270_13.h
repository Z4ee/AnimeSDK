#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_78;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C3C5C0E033C47270_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D4BF30)
#define CLASS_1_C3C5C0E033C47270_13_CLONE_OFFSET UNITYSDK_OFFSET(0x17D4BBC0)
#define CLASS_1_C3C5C0E033C47270_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D4BD80)
#define CLASS_1_C3C5C0E033C47270_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D4BCB0)
#define CLASS_1_C3C5C0E033C47270_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D4BE20)
#define CLASS_1_C3C5C0E033C47270_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D4C060)
#define CLASS_1_C3C5C0E033C47270_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D4BF90)
#define CLASS_1_C3C5C0E033C47270_13_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D4BC90)
#define CLASS_1_C3C5C0E033C47270_13_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D4BCA0)
#define CLASS_1_C3C5C0E033C47270_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D4BB10)
#define CLASS_1_C3C5C0E033C47270_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D4BE70)
#define CLASS_1_C3C5C0E033C47270_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D4BED0)
#define CLASS_1_C3C5C0E033C47270_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D4BB30)
#define CLASS_1_C3C5C0E033C47270_13__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4BB20)

inline static constexpr unsigned int Class_1_C3C5C0E033C47270_13_TypeDefinitionIndex = 26251;

class Class_1_C3C5C0E033C47270_13 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_5FEFAED860528596_78* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C3C5C0E033C47270_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_13*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C3C5C0E033C47270_13* Clone()
	{
		return ((::Class_1_C3C5C0E033C47270_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_CLONE_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_78* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FEFAED860528596_78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FEFAED860528596_78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_78*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C3C5C0E033C47270_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C3C5C0E033C47270_13*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C3C5C0E033C47270_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_13*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
