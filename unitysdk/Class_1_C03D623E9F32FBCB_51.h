#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_53;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_51_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B43880)
#define CLASS_1_C03D623E9F32FBCB_51_CLONE_OFFSET UNITYSDK_OFFSET(0x17B43560)
#define CLASS_1_C03D623E9F32FBCB_51_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B436D0)
#define CLASS_1_C03D623E9F32FBCB_51_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B43620)
#define CLASS_1_C03D623E9F32FBCB_51_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B43770)
#define CLASS_1_C03D623E9F32FBCB_51_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B43A40)
#define CLASS_1_C03D623E9F32FBCB_51_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B438E0)
#define CLASS_1_C03D623E9F32FBCB_51_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B43600)
#define CLASS_1_C03D623E9F32FBCB_51_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B43610)
#define CLASS_1_C03D623E9F32FBCB_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B434B0)
#define CLASS_1_C03D623E9F32FBCB_51_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B437C0)
#define CLASS_1_C03D623E9F32FBCB_51_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B43820)
#define CLASS_1_C03D623E9F32FBCB_51__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B434D0)
#define CLASS_1_C03D623E9F32FBCB_51__CTOR_OFFSET UNITYSDK_OFFSET(0x17B434C0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_51_TypeDefinitionIndex = 25529;

class Class_1_C03D623E9F32FBCB_51 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Class_1_735612C94F558EAE_53* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_51*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_51* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_51*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_CLONE_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_53* Method_1_24748FC20F375725()
	{
		return ((::Class_1_735612C94F558EAE_53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_735612C94F558EAE_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_53*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_51* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_51*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_51*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_51_MERGEFROM_1_OFFSET))(this, a1);
	}
};
