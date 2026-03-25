#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32B7518AB42A91DE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1812BBE0)
#define CLASS_1_C03D623E9F32FBCB_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1812B850)
#define CLASS_1_C03D623E9F32FBCB_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1812BA30)
#define CLASS_1_C03D623E9F32FBCB_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1812B960)
#define CLASS_1_C03D623E9F32FBCB_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1812BAD0)
#define CLASS_1_C03D623E9F32FBCB_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1812BD40)
#define CLASS_1_C03D623E9F32FBCB_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1812BC40)
#define CLASS_1_C03D623E9F32FBCB_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1812B940)
#define CLASS_1_C03D623E9F32FBCB_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1812B950)
#define CLASS_1_C03D623E9F32FBCB_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1812B780)
#define CLASS_1_C03D623E9F32FBCB_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1812BB20)
#define CLASS_1_C03D623E9F32FBCB_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1812BB80)
#define CLASS_1_C03D623E9F32FBCB_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1812B7A0)
#define CLASS_1_C03D623E9F32FBCB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1812B790)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_1_TypeDefinitionIndex = 23114;

class Class_1_C03D623E9F32FBCB_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Class_1_32B7518AB42A91DE* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_1*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_1* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_CLONE_OFFSET))(this);
	}

	::Class_1_32B7518AB42A91DE* Method_1_24748FC20F375725()
	{
		return ((::Class_1_32B7518AB42A91DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_32B7518AB42A91DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32B7518AB42A91DE*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_1*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_1*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
