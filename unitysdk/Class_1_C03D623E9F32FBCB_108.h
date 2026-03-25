#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13D46CC8D6D092DC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_108_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D01D20)
#define CLASS_1_C03D623E9F32FBCB_108_CLONE_OFFSET UNITYSDK_OFFSET(0x17D019B0)
#define CLASS_1_C03D623E9F32FBCB_108_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D01B70)
#define CLASS_1_C03D623E9F32FBCB_108_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D01AA0)
#define CLASS_1_C03D623E9F32FBCB_108_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D01C10)
#define CLASS_1_C03D623E9F32FBCB_108_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D01E10)
#define CLASS_1_C03D623E9F32FBCB_108_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D01D80)
#define CLASS_1_C03D623E9F32FBCB_108_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D01A80)
#define CLASS_1_C03D623E9F32FBCB_108_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D01A90)
#define CLASS_1_C03D623E9F32FBCB_108_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D01900)
#define CLASS_1_C03D623E9F32FBCB_108_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D01C60)
#define CLASS_1_C03D623E9F32FBCB_108_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D01CC0)
#define CLASS_1_C03D623E9F32FBCB_108__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D01920)
#define CLASS_1_C03D623E9F32FBCB_108__CTOR_OFFSET UNITYSDK_OFFSET(0x17D01910)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_108_TypeDefinitionIndex = 27410;

class Class_1_C03D623E9F32FBCB_108 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Class_1_13D46CC8D6D092DC* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_108* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_108*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_108* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_108*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_CLONE_OFFSET))(this);
	}

	::Class_1_13D46CC8D6D092DC* Method_1_24748FC20F375725()
	{
		return ((::Class_1_13D46CC8D6D092DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_13D46CC8D6D092DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13D46CC8D6D092DC*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_108* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_108*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_108* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_108*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_108_MERGEFROM_1_OFFSET))(this, a1);
	}
};
