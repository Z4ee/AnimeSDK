#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_633744E9733BE855_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1812D9F0)
#define CLASS_1_633744E9733BE855_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1812D7E0)
#define CLASS_1_633744E9733BE855_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1812D8A0)
#define CLASS_1_633744E9733BE855_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1812D840)
#define CLASS_1_633744E9733BE855_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1812D8F0)
#define CLASS_1_633744E9733BE855_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1812DAD0)
#define CLASS_1_633744E9733BE855_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1812DAA0)
#define CLASS_1_633744E9733BE855_5_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1812D830)
#define CLASS_1_633744E9733BE855_5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1812D820)
#define CLASS_1_633744E9733BE855_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1812D790)
#define CLASS_1_633744E9733BE855_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1812D920)
#define CLASS_1_633744E9733BE855_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1812D980)
#define CLASS_1_633744E9733BE855_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1812D7B0)
#define CLASS_1_633744E9733BE855_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1812D7A0)

inline static constexpr unsigned int Class_1_633744E9733BE855_5_TypeDefinitionIndex = 23890;

class Class_1_633744E9733BE855_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_633744E9733BE855_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_5*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_633744E9733BE855_5* Clone()
	{
		return ((::Class_1_633744E9733BE855_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_633744E9733BE855_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_633744E9733BE855_5*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_633744E9733BE855_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_5*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
