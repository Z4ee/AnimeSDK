#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_2;
class Class_1_F7C690251CDD3A9D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5EB756264B1E13D9_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181107F0)
#define CLASS_1_5EB756264B1E13D9_1_CLONE_OFFSET UNITYSDK_OFFSET(0x181103A0)
#define CLASS_1_5EB756264B1E13D9_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181105C0)
#define CLASS_1_5EB756264B1E13D9_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x181104D0)
#define CLASS_1_5EB756264B1E13D9_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181106A0)
#define CLASS_1_5EB756264B1E13D9_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18110A30)
#define CLASS_1_5EB756264B1E13D9_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18110880)
#define CLASS_1_5EB756264B1E13D9_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x181104B0)
#define CLASS_1_5EB756264B1E13D9_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18110490)
#define CLASS_1_5EB756264B1E13D9_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x181104C0)
#define CLASS_1_5EB756264B1E13D9_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x181104A0)
#define CLASS_1_5EB756264B1E13D9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181102A0)
#define CLASS_1_5EB756264B1E13D9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18110710)
#define CLASS_1_5EB756264B1E13D9_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x18110770)
#define CLASS_1_5EB756264B1E13D9_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181102C0)
#define CLASS_1_5EB756264B1E13D9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x181102B0)

inline static constexpr unsigned int Class_1_5EB756264B1E13D9_1_TypeDefinitionIndex = 25298;

class Class_1_5EB756264B1E13D9_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_32044B0173B87B04_2* Field_1_4; // 0x18
	::Class_1_F7C690251CDD3A9D* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5EB756264B1E13D9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EB756264B1E13D9_1*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5EB756264B1E13D9_1* Clone()
	{
		return ((::Class_1_5EB756264B1E13D9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_CLONE_OFFSET))(this);
	}

	::Class_1_F7C690251CDD3A9D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F7C690251CDD3A9D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F7C690251CDD3A9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7C690251CDD3A9D*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_32044B0173B87B04_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_32044B0173B87B04_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_32044B0173B87B04_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5EB756264B1E13D9_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5EB756264B1E13D9_1*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5EB756264B1E13D9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EB756264B1E13D9_1*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
