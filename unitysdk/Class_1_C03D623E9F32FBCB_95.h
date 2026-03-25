#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_24;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_95_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BFA3D0)
#define CLASS_1_C03D623E9F32FBCB_95_CLONE_OFFSET UNITYSDK_OFFSET(0x17BFA060)
#define CLASS_1_C03D623E9F32FBCB_95_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BFA200)
#define CLASS_1_C03D623E9F32FBCB_95_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BFA150)
#define CLASS_1_C03D623E9F32FBCB_95_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BFA2A0)
#define CLASS_1_C03D623E9F32FBCB_95_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BFA530)
#define CLASS_1_C03D623E9F32FBCB_95_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BFA430)
#define CLASS_1_C03D623E9F32FBCB_95_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17BFA130)
#define CLASS_1_C03D623E9F32FBCB_95_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17BFA140)
#define CLASS_1_C03D623E9F32FBCB_95_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BF9F80)
#define CLASS_1_C03D623E9F32FBCB_95_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BFA310)
#define CLASS_1_C03D623E9F32FBCB_95_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BFA370)
#define CLASS_1_C03D623E9F32FBCB_95__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BF9FA0)
#define CLASS_1_C03D623E9F32FBCB_95__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF9F90)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_95_TypeDefinitionIndex = 26760;

class Class_1_C03D623E9F32FBCB_95 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_EBB10EC01CCC4716_24* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_95*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_95* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_CLONE_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_24* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_24*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_95*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_95*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_95_MERGEFROM_1_OFFSET))(this, a1);
	}
};
