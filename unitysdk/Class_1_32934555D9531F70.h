#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_32934555D9531F70_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D3FE40)
#define CLASS_1_32934555D9531F70_CLONE_OFFSET UNITYSDK_OFFSET(0x17D3FAB0)
#define CLASS_1_32934555D9531F70_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D3FC70)
#define CLASS_1_32934555D9531F70_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D3FB90)
#define CLASS_1_32934555D9531F70_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D3FD20)
#define CLASS_1_32934555D9531F70_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D3FF30)
#define CLASS_1_32934555D9531F70_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D3FEA0)
#define CLASS_1_32934555D9531F70_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D3FB70)
#define CLASS_1_32934555D9531F70_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D3FB80)
#define CLASS_1_32934555D9531F70_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D3FB60)
#define CLASS_1_32934555D9531F70_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D3FB50)
#define CLASS_1_32934555D9531F70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D3FA20)
#define CLASS_1_32934555D9531F70_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D3FD60)
#define CLASS_1_32934555D9531F70_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D3FDC0)
#define CLASS_1_32934555D9531F70__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D3FA40)
#define CLASS_1_32934555D9531F70__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3FA30)

inline static constexpr unsigned int Class_1_32934555D9531F70_TypeDefinitionIndex = 25122;

class Class_1_32934555D9531F70 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Class_1_4D5D53619B020DDD* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_32934555D9531F70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32934555D9531F70*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_32934555D9531F70* Clone()
	{
		return ((::Class_1_32934555D9531F70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_32934555D9531F70* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_32934555D9531F70*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_32934555D9531F70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32934555D9531F70*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_MERGEFROM_1_OFFSET))(this, a1);
	}
};
