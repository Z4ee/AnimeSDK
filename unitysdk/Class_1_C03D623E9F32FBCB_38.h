#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_468;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_38_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A895F0)
#define CLASS_1_C03D623E9F32FBCB_38_CLONE_OFFSET UNITYSDK_OFFSET(0x17A892C0)
#define CLASS_1_C03D623E9F32FBCB_38_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A89430)
#define CLASS_1_C03D623E9F32FBCB_38_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A89380)
#define CLASS_1_C03D623E9F32FBCB_38_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A894D0)
#define CLASS_1_C03D623E9F32FBCB_38_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A89700)
#define CLASS_1_C03D623E9F32FBCB_38_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A89650)
#define CLASS_1_C03D623E9F32FBCB_38_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17A89360)
#define CLASS_1_C03D623E9F32FBCB_38_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17A89370)
#define CLASS_1_C03D623E9F32FBCB_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A89210)
#define CLASS_1_C03D623E9F32FBCB_38_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A89530)
#define CLASS_1_C03D623E9F32FBCB_38_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A89590)
#define CLASS_1_C03D623E9F32FBCB_38__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A89230)
#define CLASS_1_C03D623E9F32FBCB_38__CTOR_OFFSET UNITYSDK_OFFSET(0x17A89220)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_38_TypeDefinitionIndex = 25132;

class Class_1_C03D623E9F32FBCB_38 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_FA4F4A67B1C04320_468* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_38*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_38* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_CLONE_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_468* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FA4F4A67B1C04320_468*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_468* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_468*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_38* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_38*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_38*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_38_MERGEFROM_1_OFFSET))(this, a1);
	}
};
