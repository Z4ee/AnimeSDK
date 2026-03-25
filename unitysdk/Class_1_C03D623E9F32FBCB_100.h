#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E14A0A1A8B1F847C_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_100_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18096D50)
#define CLASS_1_C03D623E9F32FBCB_100_CLONE_OFFSET UNITYSDK_OFFSET(0x18096A50)
#define CLASS_1_C03D623E9F32FBCB_100_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18096BA0)
#define CLASS_1_C03D623E9F32FBCB_100_EQUALS_OFFSET UNITYSDK_OFFSET(0x18096AF0)
#define CLASS_1_C03D623E9F32FBCB_100_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18096C40)
#define CLASS_1_C03D623E9F32FBCB_100_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18096E60)
#define CLASS_1_C03D623E9F32FBCB_100_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18096DB0)
#define CLASS_1_C03D623E9F32FBCB_100_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18096AD0)
#define CLASS_1_C03D623E9F32FBCB_100_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18096AE0)
#define CLASS_1_C03D623E9F32FBCB_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180969C0)
#define CLASS_1_C03D623E9F32FBCB_100_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18096C90)
#define CLASS_1_C03D623E9F32FBCB_100_WRITETO_OFFSET UNITYSDK_OFFSET(0x18096CF0)
#define CLASS_1_C03D623E9F32FBCB_100__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180969E0)
#define CLASS_1_C03D623E9F32FBCB_100__CTOR_OFFSET UNITYSDK_OFFSET(0x180969D0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_100_TypeDefinitionIndex = 26874;

class Class_1_C03D623E9F32FBCB_100 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Class_1_E14A0A1A8B1F847C_5* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_100*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_100* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_CLONE_OFFSET))(this);
	}

	::Class_1_E14A0A1A8B1F847C_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E14A0A1A8B1F847C_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E14A0A1A8B1F847C_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_5*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_100* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_100*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_100*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_100_MERGEFROM_1_OFFSET))(this, a1);
	}
};
