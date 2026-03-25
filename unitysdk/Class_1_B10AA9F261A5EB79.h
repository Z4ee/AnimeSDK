#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B10AA9F261A5EB79_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DDC130)
#define CLASS_1_B10AA9F261A5EB79_CLONE_OFFSET UNITYSDK_OFFSET(0x17DDBCF0)
#define CLASS_1_B10AA9F261A5EB79_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DDBED0)
#define CLASS_1_B10AA9F261A5EB79_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DDBE00)
#define CLASS_1_B10AA9F261A5EB79_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DDBF60)
#define CLASS_1_B10AA9F261A5EB79_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DDC370)
#define CLASS_1_B10AA9F261A5EB79_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DDC300)
#define CLASS_1_B10AA9F261A5EB79_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17DDBD60)
#define CLASS_1_B10AA9F261A5EB79_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17DDBD70)
#define CLASS_1_B10AA9F261A5EB79_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17DDBDF0)
#define CLASS_1_B10AA9F261A5EB79_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17DDBDE0)
#define CLASS_1_B10AA9F261A5EB79_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DDBC90)
#define CLASS_1_B10AA9F261A5EB79_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DDC030)
#define CLASS_1_B10AA9F261A5EB79_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DDC090)
#define CLASS_1_B10AA9F261A5EB79__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DDBCB0)
#define CLASS_1_B10AA9F261A5EB79__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDBCA0)

inline static constexpr unsigned int Class_1_B10AA9F261A5EB79_TypeDefinitionIndex = 26004;

class Class_1_B10AA9F261A5EB79 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::Enum_3_DB663931210BBC27_1 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B10AA9F261A5EB79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B10AA9F261A5EB79*))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B10AA9F261A5EB79* Clone()
	{
		return ((::Class_1_B10AA9F261A5EB79*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_1))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B10AA9F261A5EB79* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B10AA9F261A5EB79*))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B10AA9F261A5EB79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B10AA9F261A5EB79*))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B10AA9F261A5EB79_MERGEFROM_1_OFFSET))(this, a1);
	}
};
