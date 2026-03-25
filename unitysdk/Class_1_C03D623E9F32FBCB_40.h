#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1A263F5BDD91B9DA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_40_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181B4770)
#define CLASS_1_C03D623E9F32FBCB_40_CLONE_OFFSET UNITYSDK_OFFSET(0x181B4400)
#define CLASS_1_C03D623E9F32FBCB_40_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181B45C0)
#define CLASS_1_C03D623E9F32FBCB_40_EQUALS_OFFSET UNITYSDK_OFFSET(0x181B44F0)
#define CLASS_1_C03D623E9F32FBCB_40_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181B4660)
#define CLASS_1_C03D623E9F32FBCB_40_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181B4860)
#define CLASS_1_C03D623E9F32FBCB_40_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181B47D0)
#define CLASS_1_C03D623E9F32FBCB_40_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x181B44D0)
#define CLASS_1_C03D623E9F32FBCB_40_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x181B44E0)
#define CLASS_1_C03D623E9F32FBCB_40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181B4350)
#define CLASS_1_C03D623E9F32FBCB_40_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181B46B0)
#define CLASS_1_C03D623E9F32FBCB_40_WRITETO_OFFSET UNITYSDK_OFFSET(0x181B4710)
#define CLASS_1_C03D623E9F32FBCB_40__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181B4370)
#define CLASS_1_C03D623E9F32FBCB_40__CTOR_OFFSET UNITYSDK_OFFSET(0x181B4360)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_40_TypeDefinitionIndex = 25272;

class Class_1_C03D623E9F32FBCB_40 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::Class_1_1A263F5BDD91B9DA* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_40*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_40* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_CLONE_OFFSET))(this);
	}

	::Class_1_1A263F5BDD91B9DA* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1A263F5BDD91B9DA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1A263F5BDD91B9DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_40* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_40*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_40*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_40_MERGEFROM_1_OFFSET))(this, a1);
	}
};
