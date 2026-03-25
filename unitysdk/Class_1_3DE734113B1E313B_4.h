#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE_3;
class Class_1_E621F95B064E7051_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3DE734113B1E313B_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C422B0)
#define CLASS_1_3DE734113B1E313B_4_CLONE_OFFSET UNITYSDK_OFFSET(0x17C41E60)
#define CLASS_1_3DE734113B1E313B_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C42040)
#define CLASS_1_3DE734113B1E313B_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C41F50)
#define CLASS_1_3DE734113B1E313B_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C42120)
#define CLASS_1_3DE734113B1E313B_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C423E0)
#define CLASS_1_3DE734113B1E313B_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C42340)
#define CLASS_1_3DE734113B1E313B_4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17C41F30)
#define CLASS_1_3DE734113B1E313B_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C41F10)
#define CLASS_1_3DE734113B1E313B_4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17C41F40)
#define CLASS_1_3DE734113B1E313B_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C41F20)
#define CLASS_1_3DE734113B1E313B_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C41DA0)
#define CLASS_1_3DE734113B1E313B_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C421D0)
#define CLASS_1_3DE734113B1E313B_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C42230)
#define CLASS_1_3DE734113B1E313B_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C41DC0)
#define CLASS_1_3DE734113B1E313B_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17C41DB0)

inline static constexpr unsigned int Class_1_3DE734113B1E313B_4_TypeDefinitionIndex = 26963;

class Class_1_3DE734113B1E313B_4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Class_1_3A7B270FE0BE90AE_3* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_E621F95B064E7051_5* Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3DE734113B1E313B_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_4*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3DE734113B1E313B_4* Clone()
	{
		return ((::Class_1_3DE734113B1E313B_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_CLONE_OFFSET))(this);
	}

	::Class_1_3A7B270FE0BE90AE_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3A7B270FE0BE90AE_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3A7B270FE0BE90AE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_3*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_E621F95B064E7051_5* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_E621F95B064E7051_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_E621F95B064E7051_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E621F95B064E7051_5*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3DE734113B1E313B_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DE734113B1E313B_4*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3DE734113B1E313B_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_4*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
