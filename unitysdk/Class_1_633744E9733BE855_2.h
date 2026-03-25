#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_633744E9733BE855_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FB8620)
#define CLASS_1_633744E9733BE855_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17FB8330)
#define CLASS_1_633744E9733BE855_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FB8480)
#define CLASS_1_633744E9733BE855_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FB83E0)
#define CLASS_1_633744E9733BE855_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FB84E0)
#define CLASS_1_633744E9733BE855_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FB87B0)
#define CLASS_1_633744E9733BE855_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FB8770)
#define CLASS_1_633744E9733BE855_2_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x17FB83D0)
#define CLASS_1_633744E9733BE855_2_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17FB83B0)
#define CLASS_1_633744E9733BE855_2_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x17FB83C0)
#define CLASS_1_633744E9733BE855_2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17FB83A0)
#define CLASS_1_633744E9733BE855_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FB82E0)
#define CLASS_1_633744E9733BE855_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FB8510)
#define CLASS_1_633744E9733BE855_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FB8570)
#define CLASS_1_633744E9733BE855_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FB8300)
#define CLASS_1_633744E9733BE855_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB82F0)

inline static constexpr unsigned int Class_1_633744E9733BE855_2_TypeDefinitionIndex = 23706;

class Class_1_633744E9733BE855_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_633744E9733BE855_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_2*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_633744E9733BE855_2* Clone()
	{
		return ((::Class_1_633744E9733BE855_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_633744E9733BE855_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_633744E9733BE855_2*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_633744E9733BE855_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_2*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_633744E9733BE855_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
