#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2341347423DFDC46;
class Class_1_6E708EAB438EC183_17;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C12420)
#define CLASS_1_1660DAA49693852E_CLONE_OFFSET UNITYSDK_OFFSET(0x17C11F90)
#define CLASS_1_1660DAA49693852E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C12200)
#define CLASS_1_1660DAA49693852E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C120F0)
#define CLASS_1_1660DAA49693852E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C122E0)
#define CLASS_1_1660DAA49693852E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C12630)
#define CLASS_1_1660DAA49693852E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C124B0)
#define CLASS_1_1660DAA49693852E_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17C120D0)
#define CLASS_1_1660DAA49693852E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C120B0)
#define CLASS_1_1660DAA49693852E_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17C120E0)
#define CLASS_1_1660DAA49693852E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C120C0)
#define CLASS_1_1660DAA49693852E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C11E90)
#define CLASS_1_1660DAA49693852E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C12340)
#define CLASS_1_1660DAA49693852E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C123A0)
#define CLASS_1_1660DAA49693852E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C11EB0)
#define CLASS_1_1660DAA49693852E__CTOR_OFFSET UNITYSDK_OFFSET(0x17C11EA0)

inline static constexpr unsigned int Class_1_1660DAA49693852E_TypeDefinitionIndex = 23808;

class Class_1_1660DAA49693852E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Class_1_6E708EAB438EC183_17* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_2341347423DFDC46* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E* Clone()
	{
		return ((::Class_1_1660DAA49693852E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_CLONE_OFFSET))(this);
	}

	::Class_1_2341347423DFDC46* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2341347423DFDC46*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_2341347423DFDC46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2341347423DFDC46*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_6E708EAB438EC183_17* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_6E708EAB438EC183_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_6E708EAB438EC183_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_17*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
