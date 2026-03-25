#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_697;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_65_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EDC210)
#define CLASS_1_C03D623E9F32FBCB_65_CLONE_OFFSET UNITYSDK_OFFSET(0x17EDBEE0)
#define CLASS_1_C03D623E9F32FBCB_65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EDC050)
#define CLASS_1_C03D623E9F32FBCB_65_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EDBFA0)
#define CLASS_1_C03D623E9F32FBCB_65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EDC0F0)
#define CLASS_1_C03D623E9F32FBCB_65_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EDC320)
#define CLASS_1_C03D623E9F32FBCB_65_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EDC270)
#define CLASS_1_C03D623E9F32FBCB_65_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17EDBF80)
#define CLASS_1_C03D623E9F32FBCB_65_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17EDBF90)
#define CLASS_1_C03D623E9F32FBCB_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EDBE30)
#define CLASS_1_C03D623E9F32FBCB_65_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EDC150)
#define CLASS_1_C03D623E9F32FBCB_65_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EDC1B0)
#define CLASS_1_C03D623E9F32FBCB_65__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EDBE50)
#define CLASS_1_C03D623E9F32FBCB_65__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDBE40)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_65_TypeDefinitionIndex = 26145;

class Class_1_C03D623E9F32FBCB_65 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Class_1_FA4F4A67B1C04320_697* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_65*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_65* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_CLONE_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_697* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FA4F4A67B1C04320_697*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_697* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_697*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_65* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_65*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_65*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_65_MERGEFROM_1_OFFSET))(this, a1);
	}
};
