#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_8;
class Class_1_36F606812EC9EB69_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6238D7FF0191672E_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B2F310)
#define CLASS_1_6238D7FF0191672E_18_CLONE_OFFSET UNITYSDK_OFFSET(0x17B2EEA0)
#define CLASS_1_6238D7FF0191672E_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B2F0C0)
#define CLASS_1_6238D7FF0191672E_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B2EFC0)
#define CLASS_1_6238D7FF0191672E_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B2F1B0)
#define CLASS_1_6238D7FF0191672E_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B2F540)
#define CLASS_1_6238D7FF0191672E_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B2F420)
#define CLASS_1_6238D7FF0191672E_18_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B2EFA0)
#define CLASS_1_6238D7FF0191672E_18_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17B2EF80)
#define CLASS_1_6238D7FF0191672E_18_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B2EF60)
#define CLASS_1_6238D7FF0191672E_18_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B2EFB0)
#define CLASS_1_6238D7FF0191672E_18_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17B2EF90)
#define CLASS_1_6238D7FF0191672E_18_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B2EF70)
#define CLASS_1_6238D7FF0191672E_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B2EDD0)
#define CLASS_1_6238D7FF0191672E_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B2F210)
#define CLASS_1_6238D7FF0191672E_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B2F270)
#define CLASS_1_6238D7FF0191672E_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B2EDF0)
#define CLASS_1_6238D7FF0191672E_18__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2EDE0)

inline static constexpr unsigned int Class_1_6238D7FF0191672E_18_TypeDefinitionIndex = 26902;

class Class_1_6238D7FF0191672E_18 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Class_1_14E02E1F6D70E487_8* Field_1_2; // 0x10
	::Class_1_36F606812EC9EB69_7* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6238D7FF0191672E_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_18*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6238D7FF0191672E_18* Clone()
	{
		return ((::Class_1_6238D7FF0191672E_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_CLONE_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_8*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_36F606812EC9EB69_7* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_36F606812EC9EB69_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_36F606812EC9EB69_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69_7*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6238D7FF0191672E_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6238D7FF0191672E_18*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6238D7FF0191672E_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_18*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
