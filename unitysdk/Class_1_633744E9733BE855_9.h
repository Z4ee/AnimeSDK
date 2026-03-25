#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_633744E9733BE855_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4C490)
#define CLASS_1_633744E9733BE855_9_CLONE_OFFSET UNITYSDK_OFFSET(0x17E4C210)
#define CLASS_1_633744E9733BE855_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E4C340)
#define CLASS_1_633744E9733BE855_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E4C2A0)
#define CLASS_1_633744E9733BE855_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4C390)
#define CLASS_1_633744E9733BE855_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4C570)
#define CLASS_1_633744E9733BE855_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4C540)
#define CLASS_1_633744E9733BE855_9_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17E4C290)
#define CLASS_1_633744E9733BE855_9_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17E4C280)
#define CLASS_1_633744E9733BE855_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4C1C0)
#define CLASS_1_633744E9733BE855_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4C3C0)
#define CLASS_1_633744E9733BE855_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4C420)
#define CLASS_1_633744E9733BE855_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E4C1E0)
#define CLASS_1_633744E9733BE855_9__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4C1D0)

inline static constexpr unsigned int Class_1_633744E9733BE855_9_TypeDefinitionIndex = 26463;

class Class_1_633744E9733BE855_9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_633744E9733BE855_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_9*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_633744E9733BE855_9* Clone()
	{
		return ((::Class_1_633744E9733BE855_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_633744E9733BE855_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_633744E9733BE855_9*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_633744E9733BE855_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_9*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
