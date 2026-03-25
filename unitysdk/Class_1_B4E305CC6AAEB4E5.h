#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B4E305CC6AAEB4E5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FEEF50)
#define CLASS_1_B4E305CC6AAEB4E5_CLONE_OFFSET UNITYSDK_OFFSET(0x17FEEA80)
#define CLASS_1_B4E305CC6AAEB4E5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FEEC70)
#define CLASS_1_B4E305CC6AAEB4E5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FEEBB0)
#define CLASS_1_B4E305CC6AAEB4E5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FEED30)
#define CLASS_1_B4E305CC6AAEB4E5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FEF0B0)
#define CLASS_1_B4E305CC6AAEB4E5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FEF020)
#define CLASS_1_B4E305CC6AAEB4E5_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17FEEB00)
#define CLASS_1_B4E305CC6AAEB4E5_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x17FEEB10)
#define CLASS_1_B4E305CC6AAEB4E5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FEE9A0)
#define CLASS_1_B4E305CC6AAEB4E5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FEEE60)
#define CLASS_1_B4E305CC6AAEB4E5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FEEEC0)
#define CLASS_1_B4E305CC6AAEB4E5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FEEA00)
#define CLASS_1_B4E305CC6AAEB4E5__CTOR_OFFSET UNITYSDK_OFFSET(0x17FEE9B0)

inline static constexpr unsigned int Class_1_B4E305CC6AAEB4E5_TypeDefinitionIndex = 26005;

class Class_1_B4E305CC6AAEB4E5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Google::Protobuf::ByteString* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B4E305CC6AAEB4E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4E305CC6AAEB4E5*))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B4E305CC6AAEB4E5* Clone()
	{
		return ((::Class_1_B4E305CC6AAEB4E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B4E305CC6AAEB4E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B4E305CC6AAEB4E5*))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B4E305CC6AAEB4E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4E305CC6AAEB4E5*))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4E305CC6AAEB4E5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
