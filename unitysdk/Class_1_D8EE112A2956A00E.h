#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E2E44FDCCFF6FA83_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D8EE112A2956A00E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1823FD10)
#define CLASS_1_D8EE112A2956A00E_CLONE_OFFSET UNITYSDK_OFFSET(0x1823F870)
#define CLASS_1_D8EE112A2956A00E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1823FA60)
#define CLASS_1_D8EE112A2956A00E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1823F950)
#define CLASS_1_D8EE112A2956A00E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1823FB40)
#define CLASS_1_D8EE112A2956A00E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1823FE70)
#define CLASS_1_D8EE112A2956A00E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1823FDA0)
#define CLASS_1_D8EE112A2956A00E_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1823F930)
#define CLASS_1_D8EE112A2956A00E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1823F910)
#define CLASS_1_D8EE112A2956A00E_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1823F940)
#define CLASS_1_D8EE112A2956A00E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1823F920)
#define CLASS_1_D8EE112A2956A00E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1823F7E0)
#define CLASS_1_D8EE112A2956A00E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1823FC30)
#define CLASS_1_D8EE112A2956A00E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1823FC90)
#define CLASS_1_D8EE112A2956A00E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1823F800)
#define CLASS_1_D8EE112A2956A00E__CTOR_OFFSET UNITYSDK_OFFSET(0x1823F7F0)

inline static constexpr unsigned int Class_1_D8EE112A2956A00E_TypeDefinitionIndex = 23783;

class Class_1_D8EE112A2956A00E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_E2E44FDCCFF6FA83_1* Field_1_2; // 0x18
	::Class_1_E2E44FDCCFF6FA83_1* Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8EE112A2956A00E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EE112A2956A00E*))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8EE112A2956A00E* Clone()
	{
		return ((::Class_1_D8EE112A2956A00E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_CLONE_OFFSET))(this);
	}

	::Class_1_E2E44FDCCFF6FA83_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E2E44FDCCFF6FA83_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E2E44FDCCFF6FA83_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_1*))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_E2E44FDCCFF6FA83_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_E2E44FDCCFF6FA83_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_E2E44FDCCFF6FA83_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_1*))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8EE112A2956A00E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8EE112A2956A00E*))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8EE112A2956A00E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EE112A2956A00E*))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EE112A2956A00E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
