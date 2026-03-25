#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_32044B0173B87B04_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1808F240)
#define CLASS_1_32044B0173B87B04_CLONE_OFFSET UNITYSDK_OFFSET(0x1808EF30)
#define CLASS_1_32044B0173B87B04_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1808F050)
#define CLASS_1_32044B0173B87B04_EQUALS_OFFSET UNITYSDK_OFFSET(0x1808EFE0)
#define CLASS_1_32044B0173B87B04_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1808F0C0)
#define CLASS_1_32044B0173B87B04_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1808F470)
#define CLASS_1_32044B0173B87B04_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1808F420)
#define CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1808EFB0)
#define CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x1808EFD0)
#define CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1808EF90)
#define CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1808EFA0)
#define CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x1808EFC0)
#define CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1808EF80)
#define CLASS_1_32044B0173B87B04_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1808EED0)
#define CLASS_1_32044B0173B87B04_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1808F0F0)
#define CLASS_1_32044B0173B87B04_WRITETO_OFFSET UNITYSDK_OFFSET(0x1808F150)
#define CLASS_1_32044B0173B87B04__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1808EEF0)
#define CLASS_1_32044B0173B87B04__CTOR_OFFSET UNITYSDK_OFFSET(0x1808EEE0)

inline static constexpr unsigned int Class_1_32044B0173B87B04_TypeDefinitionIndex = 23058;

class Class_1_32044B0173B87B04 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_6; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_32044B0173B87B04* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_32044B0173B87B04* Clone()
	{
		return ((::Class_1_32044B0173B87B04*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_32044B0173B87B04* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_32044B0173B87B04*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_32044B0173B87B04* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32044B0173B87B04_MERGEFROM_1_OFFSET))(this, a1);
	}
};
