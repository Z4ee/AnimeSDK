#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB3B9C6F3C34D789;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_55_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F77B80)
#define CLASS_1_C03D623E9F32FBCB_55_CLONE_OFFSET UNITYSDK_OFFSET(0x17F77860)
#define CLASS_1_C03D623E9F32FBCB_55_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F779D0)
#define CLASS_1_C03D623E9F32FBCB_55_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F77920)
#define CLASS_1_C03D623E9F32FBCB_55_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F77A70)
#define CLASS_1_C03D623E9F32FBCB_55_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F77C70)
#define CLASS_1_C03D623E9F32FBCB_55_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F77BE0)
#define CLASS_1_C03D623E9F32FBCB_55_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F77900)
#define CLASS_1_C03D623E9F32FBCB_55_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F77910)
#define CLASS_1_C03D623E9F32FBCB_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F777B0)
#define CLASS_1_C03D623E9F32FBCB_55_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F77AC0)
#define CLASS_1_C03D623E9F32FBCB_55_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F77B20)
#define CLASS_1_C03D623E9F32FBCB_55__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F777D0)
#define CLASS_1_C03D623E9F32FBCB_55__CTOR_OFFSET UNITYSDK_OFFSET(0x17F777C0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_55_TypeDefinitionIndex = 25671;

class Class_1_C03D623E9F32FBCB_55 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Class_1_BB3B9C6F3C34D789* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_55*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_55* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_CLONE_OFFSET))(this);
	}

	::Class_1_BB3B9C6F3C34D789* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BB3B9C6F3C34D789*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BB3B9C6F3C34D789* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB3B9C6F3C34D789*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_55* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_55*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_55*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_55_MERGEFROM_1_OFFSET))(this, a1);
	}
};
