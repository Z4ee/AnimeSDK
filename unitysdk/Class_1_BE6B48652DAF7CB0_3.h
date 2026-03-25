#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BE6B48652DAF7CB0_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CAAC20)
#define CLASS_1_BE6B48652DAF7CB0_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17CAA860)
#define CLASS_1_BE6B48652DAF7CB0_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CAAA10)
#define CLASS_1_BE6B48652DAF7CB0_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CAA950)
#define CLASS_1_BE6B48652DAF7CB0_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CAAAA0)
#define CLASS_1_BE6B48652DAF7CB0_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CAADA0)
#define CLASS_1_BE6B48652DAF7CB0_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CAAD40)
#define CLASS_1_BE6B48652DAF7CB0_3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17CAA8D0)
#define CLASS_1_BE6B48652DAF7CB0_3_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17CAA8E0)
#define CLASS_1_BE6B48652DAF7CB0_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CAA800)
#define CLASS_1_BE6B48652DAF7CB0_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CAAB60)
#define CLASS_1_BE6B48652DAF7CB0_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CAABC0)
#define CLASS_1_BE6B48652DAF7CB0_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CAA820)
#define CLASS_1_BE6B48652DAF7CB0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17CAA810)

inline static constexpr unsigned int Class_1_BE6B48652DAF7CB0_3_TypeDefinitionIndex = 25439;

class Class_1_BE6B48652DAF7CB0_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BE6B48652DAF7CB0_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE6B48652DAF7CB0_3*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BE6B48652DAF7CB0_3* Clone()
	{
		return ((::Class_1_BE6B48652DAF7CB0_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BE6B48652DAF7CB0_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BE6B48652DAF7CB0_3*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BE6B48652DAF7CB0_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE6B48652DAF7CB0_3*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
