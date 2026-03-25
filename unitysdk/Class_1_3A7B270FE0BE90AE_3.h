#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_14E02E1F6D70E487_2;
class Class_1_3AD2528CD53B1639_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3A7B270FE0BE90AE_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18032B00)
#define CLASS_1_3A7B270FE0BE90AE_3_CLONE_OFFSET UNITYSDK_OFFSET(0x180326A0)
#define CLASS_1_3A7B270FE0BE90AE_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18032860)
#define CLASS_1_3A7B270FE0BE90AE_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x18032730)
#define CLASS_1_3A7B270FE0BE90AE_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18032980)
#define CLASS_1_3A7B270FE0BE90AE_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18032D00)
#define CLASS_1_3A7B270FE0BE90AE_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18032BC0)
#define CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x180326F0)
#define CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x18032710)
#define CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180326D0)
#define CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x18032700)
#define CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x18032720)
#define CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180326E0)
#define CLASS_1_3A7B270FE0BE90AE_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180325B0)
#define CLASS_1_3A7B270FE0BE90AE_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180329F0)
#define CLASS_1_3A7B270FE0BE90AE_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x18032A50)
#define CLASS_1_3A7B270FE0BE90AE_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180325D0)
#define CLASS_1_3A7B270FE0BE90AE_3__CTOR_OFFSET UNITYSDK_OFFSET(0x180325C0)

inline static constexpr unsigned int Class_1_3A7B270FE0BE90AE_3_TypeDefinitionIndex = 26734;

class Class_1_3A7B270FE0BE90AE_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_14E02E1F6D70E487_1* Field_1_6; // 0x18
	::Class_1_3AD2528CD53B1639_11* Field_1_4; // 0x20
	::Class_1_14E02E1F6D70E487_2* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3A7B270FE0BE90AE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_3*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3A7B270FE0BE90AE_3* Clone()
	{
		return ((::Class_1_3A7B270FE0BE90AE_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_CLONE_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_3AD2528CD53B1639_11* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_3AD2528CD53B1639_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_3AD2528CD53B1639_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_11*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3A7B270FE0BE90AE_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_3*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3A7B270FE0BE90AE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_3*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
