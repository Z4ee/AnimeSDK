#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49AFAF7E1EDC93F8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_98_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E04510)
#define CLASS_1_C03D623E9F32FBCB_98_CLONE_OFFSET UNITYSDK_OFFSET(0x17E04210)
#define CLASS_1_C03D623E9F32FBCB_98_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E04360)
#define CLASS_1_C03D623E9F32FBCB_98_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E042B0)
#define CLASS_1_C03D623E9F32FBCB_98_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E04400)
#define CLASS_1_C03D623E9F32FBCB_98_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E045E0)
#define CLASS_1_C03D623E9F32FBCB_98_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E04570)
#define CLASS_1_C03D623E9F32FBCB_98_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E04290)
#define CLASS_1_C03D623E9F32FBCB_98_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E042A0)
#define CLASS_1_C03D623E9F32FBCB_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E04180)
#define CLASS_1_C03D623E9F32FBCB_98_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E04450)
#define CLASS_1_C03D623E9F32FBCB_98_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E044B0)
#define CLASS_1_C03D623E9F32FBCB_98__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E041A0)
#define CLASS_1_C03D623E9F32FBCB_98__CTOR_OFFSET UNITYSDK_OFFSET(0x17E04190)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_98_TypeDefinitionIndex = 26842;

class Class_1_C03D623E9F32FBCB_98 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_49AFAF7E1EDC93F8* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_98*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_98* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_CLONE_OFFSET))(this);
	}

	::Class_1_49AFAF7E1EDC93F8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_49AFAF7E1EDC93F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_49AFAF7E1EDC93F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_98* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_98*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_98*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_98_MERGEFROM_1_OFFSET))(this, a1);
	}
};
