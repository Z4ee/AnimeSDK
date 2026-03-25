#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_39;
class Class_1_FF746D82C24EA645;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2CCC2AA1393FA2C4_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FC8CB0)
#define CLASS_1_2CCC2AA1393FA2C4_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17FC88B0)
#define CLASS_1_2CCC2AA1393FA2C4_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FC8A90)
#define CLASS_1_2CCC2AA1393FA2C4_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FC89A0)
#define CLASS_1_2CCC2AA1393FA2C4_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FC8B70)
#define CLASS_1_2CCC2AA1393FA2C4_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FC8EE0)
#define CLASS_1_2CCC2AA1393FA2C4_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FC8D40)
#define CLASS_1_2CCC2AA1393FA2C4_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17FC8980)
#define CLASS_1_2CCC2AA1393FA2C4_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FC8960)
#define CLASS_1_2CCC2AA1393FA2C4_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17FC8990)
#define CLASS_1_2CCC2AA1393FA2C4_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FC8970)
#define CLASS_1_2CCC2AA1393FA2C4_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FC87F0)
#define CLASS_1_2CCC2AA1393FA2C4_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FC8BD0)
#define CLASS_1_2CCC2AA1393FA2C4_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FC8C30)
#define CLASS_1_2CCC2AA1393FA2C4_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FC8810)
#define CLASS_1_2CCC2AA1393FA2C4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC8800)

inline static constexpr unsigned int Class_1_2CCC2AA1393FA2C4_1_TypeDefinitionIndex = 24942;

class Class_1_2CCC2AA1393FA2C4_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Class_1_FF746D82C24EA645* Field_1_2; // 0x10
	::Class_1_6E708EAB438EC183_39* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2CCC2AA1393FA2C4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CCC2AA1393FA2C4_1*))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2CCC2AA1393FA2C4_1* Clone()
	{
		return ((::Class_1_2CCC2AA1393FA2C4_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_CLONE_OFFSET))(this);
	}

	::Class_1_FF746D82C24EA645* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FF746D82C24EA645*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FF746D82C24EA645* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF746D82C24EA645*))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_6E708EAB438EC183_39* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_6E708EAB438EC183_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_6E708EAB438EC183_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_39*))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2CCC2AA1393FA2C4_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2CCC2AA1393FA2C4_1*))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2CCC2AA1393FA2C4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CCC2AA1393FA2C4_1*))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2CCC2AA1393FA2C4_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
