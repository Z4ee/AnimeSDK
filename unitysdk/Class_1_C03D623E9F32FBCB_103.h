#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_79;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_103_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C95230)
#define CLASS_1_C03D623E9F32FBCB_103_CLONE_OFFSET UNITYSDK_OFFSET(0x17C94F30)
#define CLASS_1_C03D623E9F32FBCB_103_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C95080)
#define CLASS_1_C03D623E9F32FBCB_103_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C94FD0)
#define CLASS_1_C03D623E9F32FBCB_103_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C95120)
#define CLASS_1_C03D623E9F32FBCB_103_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C953D0)
#define CLASS_1_C03D623E9F32FBCB_103_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C95290)
#define CLASS_1_C03D623E9F32FBCB_103_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C94FB0)
#define CLASS_1_C03D623E9F32FBCB_103_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C94FC0)
#define CLASS_1_C03D623E9F32FBCB_103_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C94EA0)
#define CLASS_1_C03D623E9F32FBCB_103_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C95170)
#define CLASS_1_C03D623E9F32FBCB_103_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C951D0)
#define CLASS_1_C03D623E9F32FBCB_103__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C94EC0)
#define CLASS_1_C03D623E9F32FBCB_103__CTOR_OFFSET UNITYSDK_OFFSET(0x17C94EB0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_103_TypeDefinitionIndex = 26974;

class Class_1_C03D623E9F32FBCB_103 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Class_1_735612C94F558EAE_79* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_103*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_103* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_103*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_CLONE_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_79* Method_1_24748FC20F375725()
	{
		return ((::Class_1_735612C94F558EAE_79*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_735612C94F558EAE_79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_79*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_103* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_103*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_103*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_103_MERGEFROM_1_OFFSET))(this, a1);
	}
};
