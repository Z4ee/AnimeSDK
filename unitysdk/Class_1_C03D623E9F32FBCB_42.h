#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_512;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_42_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18077B90)
#define CLASS_1_C03D623E9F32FBCB_42_CLONE_OFFSET UNITYSDK_OFFSET(0x18077800)
#define CLASS_1_C03D623E9F32FBCB_42_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180779D0)
#define CLASS_1_C03D623E9F32FBCB_42_EQUALS_OFFSET UNITYSDK_OFFSET(0x18077900)
#define CLASS_1_C03D623E9F32FBCB_42_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18077A70)
#define CLASS_1_C03D623E9F32FBCB_42_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18077CA0)
#define CLASS_1_C03D623E9F32FBCB_42_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18077BF0)
#define CLASS_1_C03D623E9F32FBCB_42_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180778E0)
#define CLASS_1_C03D623E9F32FBCB_42_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180778F0)
#define CLASS_1_C03D623E9F32FBCB_42_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18077750)
#define CLASS_1_C03D623E9F32FBCB_42_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18077AD0)
#define CLASS_1_C03D623E9F32FBCB_42_WRITETO_OFFSET UNITYSDK_OFFSET(0x18077B30)
#define CLASS_1_C03D623E9F32FBCB_42__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18077770)
#define CLASS_1_C03D623E9F32FBCB_42__CTOR_OFFSET UNITYSDK_OFFSET(0x18077760)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_42_TypeDefinitionIndex = 25302;

class Class_1_C03D623E9F32FBCB_42 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_FA4F4A67B1C04320_512* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_42*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_42* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_42*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_CLONE_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_512* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FA4F4A67B1C04320_512*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_512* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_512*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_42* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_42*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_42*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_42_MERGEFROM_1_OFFSET))(this, a1);
	}
};
