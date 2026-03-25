#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F955916D7B4EE18B;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1808A1D0)
#define CLASS_1_C03D623E9F32FBCB_29_CLONE_OFFSET UNITYSDK_OFFSET(0x18089E80)
#define CLASS_1_C03D623E9F32FBCB_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1808A000)
#define CLASS_1_C03D623E9F32FBCB_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x18089F50)
#define CLASS_1_C03D623E9F32FBCB_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1808A0A0)
#define CLASS_1_C03D623E9F32FBCB_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1808A2F0)
#define CLASS_1_C03D623E9F32FBCB_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1808A230)
#define CLASS_1_C03D623E9F32FBCB_29_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18089F30)
#define CLASS_1_C03D623E9F32FBCB_29_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18089F40)
#define CLASS_1_C03D623E9F32FBCB_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18089DC0)
#define CLASS_1_C03D623E9F32FBCB_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1808A110)
#define CLASS_1_C03D623E9F32FBCB_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x1808A170)
#define CLASS_1_C03D623E9F32FBCB_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18089DE0)
#define CLASS_1_C03D623E9F32FBCB_29__CTOR_OFFSET UNITYSDK_OFFSET(0x18089DD0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_29_TypeDefinitionIndex = 24395;

class Class_1_C03D623E9F32FBCB_29 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Class_1_F955916D7B4EE18B* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_29*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_29* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_CLONE_OFFSET))(this);
	}

	::Class_1_F955916D7B4EE18B* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F955916D7B4EE18B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F955916D7B4EE18B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F955916D7B4EE18B*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_29*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_29*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
