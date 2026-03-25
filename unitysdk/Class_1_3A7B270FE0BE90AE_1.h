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

#define CLASS_1_3A7B270FE0BE90AE_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AC3A30)
#define CLASS_1_3A7B270FE0BE90AE_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17AC3580)
#define CLASS_1_3A7B270FE0BE90AE_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AC3790)
#define CLASS_1_3A7B270FE0BE90AE_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AC3630)
#define CLASS_1_3A7B270FE0BE90AE_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AC38B0)
#define CLASS_1_3A7B270FE0BE90AE_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AC3C30)
#define CLASS_1_3A7B270FE0BE90AE_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AC3AF0)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17AC35F0)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x17AC3610)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17AC35D0)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17AC3600)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x17AC3620)
#define CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17AC35E0)
#define CLASS_1_3A7B270FE0BE90AE_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AC3490)
#define CLASS_1_3A7B270FE0BE90AE_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AC3920)
#define CLASS_1_3A7B270FE0BE90AE_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AC3980)
#define CLASS_1_3A7B270FE0BE90AE_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AC34B0)
#define CLASS_1_3A7B270FE0BE90AE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC34A0)

inline static constexpr unsigned int Class_1_3A7B270FE0BE90AE_1_TypeDefinitionIndex = 26371;

class Class_1_3A7B270FE0BE90AE_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	::Class_1_14E02E1F6D70E487_1* Field_1_2; // 0x10
	::Class_1_14E02E1F6D70E487_2* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_3AD2528CD53B1639_11* Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3A7B270FE0BE90AE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3A7B270FE0BE90AE_1* Clone()
	{
		return ((::Class_1_3A7B270FE0BE90AE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_CLONE_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_14E02E1F6D70E487_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_14E02E1F6D70E487_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_3AD2528CD53B1639_11* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_3AD2528CD53B1639_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_3AD2528CD53B1639_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_11*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3A7B270FE0BE90AE_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3A7B270FE0BE90AE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
