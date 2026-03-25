#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D16597294F5284D;
class Class_1_C03D623E9F32FBCB_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5EB756264B1E13D9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FBFB00)
#define CLASS_1_5EB756264B1E13D9_CLONE_OFFSET UNITYSDK_OFFSET(0x17FBF670)
#define CLASS_1_5EB756264B1E13D9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FBF8B0)
#define CLASS_1_5EB756264B1E13D9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FBF7A0)
#define CLASS_1_5EB756264B1E13D9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FBF990)
#define CLASS_1_5EB756264B1E13D9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FBFCA0)
#define CLASS_1_5EB756264B1E13D9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FBFB90)
#define CLASS_1_5EB756264B1E13D9_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17FBF780)
#define CLASS_1_5EB756264B1E13D9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FBF760)
#define CLASS_1_5EB756264B1E13D9_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17FBF790)
#define CLASS_1_5EB756264B1E13D9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FBF770)
#define CLASS_1_5EB756264B1E13D9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FBF5B0)
#define CLASS_1_5EB756264B1E13D9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FBFA20)
#define CLASS_1_5EB756264B1E13D9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FBFA80)
#define CLASS_1_5EB756264B1E13D9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FBF5D0)
#define CLASS_1_5EB756264B1E13D9__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBF5C0)

inline static constexpr unsigned int Class_1_5EB756264B1E13D9_TypeDefinitionIndex = 23115;

class Class_1_5EB756264B1E13D9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Class_1_C03D623E9F32FBCB_1* Field_1_4; // 0x10
	::Class_1_6D16597294F5284D* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5EB756264B1E13D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EB756264B1E13D9*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5EB756264B1E13D9* Clone()
	{
		return ((::Class_1_5EB756264B1E13D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_CLONE_OFFSET))(this);
	}

	::Class_1_6D16597294F5284D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6D16597294F5284D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6D16597294F5284D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D16597294F5284D*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_C03D623E9F32FBCB_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_C03D623E9F32FBCB_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_C03D623E9F32FBCB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_1*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5EB756264B1E13D9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5EB756264B1E13D9*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5EB756264B1E13D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EB756264B1E13D9*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EB756264B1E13D9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
