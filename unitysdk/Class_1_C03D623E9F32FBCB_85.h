#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CC65FF4377016C5E;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_85_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C9CE60)
#define CLASS_1_C03D623E9F32FBCB_85_CLONE_OFFSET UNITYSDK_OFFSET(0x17C9CB60)
#define CLASS_1_C03D623E9F32FBCB_85_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C9CCB0)
#define CLASS_1_C03D623E9F32FBCB_85_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C9CC00)
#define CLASS_1_C03D623E9F32FBCB_85_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C9CD50)
#define CLASS_1_C03D623E9F32FBCB_85_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C9CF90)
#define CLASS_1_C03D623E9F32FBCB_85_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C9CEC0)
#define CLASS_1_C03D623E9F32FBCB_85_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C9CBE0)
#define CLASS_1_C03D623E9F32FBCB_85_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C9CBF0)
#define CLASS_1_C03D623E9F32FBCB_85_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C9CAD0)
#define CLASS_1_C03D623E9F32FBCB_85_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C9CDA0)
#define CLASS_1_C03D623E9F32FBCB_85_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C9CE00)
#define CLASS_1_C03D623E9F32FBCB_85__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C9CAF0)
#define CLASS_1_C03D623E9F32FBCB_85__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9CAE0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_85_TypeDefinitionIndex = 26545;

class Class_1_C03D623E9F32FBCB_85 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_CC65FF4377016C5E* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_85*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_85* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_85*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_CLONE_OFFSET))(this);
	}

	::Class_1_CC65FF4377016C5E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CC65FF4377016C5E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_CC65FF4377016C5E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC65FF4377016C5E*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_85* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_85*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_85*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_85_MERGEFROM_1_OFFSET))(this, a1);
	}
};
