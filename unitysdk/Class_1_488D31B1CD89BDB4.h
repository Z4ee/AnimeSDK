#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64B902E336FF3D37_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_488D31B1CD89BDB4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AD86D0)
#define CLASS_1_488D31B1CD89BDB4_CLONE_OFFSET UNITYSDK_OFFSET(0x17AD8310)
#define CLASS_1_488D31B1CD89BDB4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AD8500)
#define CLASS_1_488D31B1CD89BDB4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AD8420)
#define CLASS_1_488D31B1CD89BDB4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AD85B0)
#define CLASS_1_488D31B1CD89BDB4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AD8810)
#define CLASS_1_488D31B1CD89BDB4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AD8730)
#define CLASS_1_488D31B1CD89BDB4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17AD83E0)
#define CLASS_1_488D31B1CD89BDB4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17AD83F0)
#define CLASS_1_488D31B1CD89BDB4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17AD8410)
#define CLASS_1_488D31B1CD89BDB4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17AD8400)
#define CLASS_1_488D31B1CD89BDB4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AD8260)
#define CLASS_1_488D31B1CD89BDB4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AD85F0)
#define CLASS_1_488D31B1CD89BDB4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AD8650)
#define CLASS_1_488D31B1CD89BDB4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AD8280)
#define CLASS_1_488D31B1CD89BDB4__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD8270)

inline static constexpr unsigned int Class_1_488D31B1CD89BDB4_TypeDefinitionIndex = 26026;

class Class_1_488D31B1CD89BDB4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Class_1_64B902E336FF3D37_1* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_488D31B1CD89BDB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_488D31B1CD89BDB4*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_488D31B1CD89BDB4* Clone()
	{
		return ((::Class_1_488D31B1CD89BDB4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_CLONE_OFFSET))(this);
	}

	::Class_1_64B902E336FF3D37_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_64B902E336FF3D37_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_64B902E336FF3D37_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64B902E336FF3D37_1*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_488D31B1CD89BDB4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_488D31B1CD89BDB4*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_488D31B1CD89BDB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_488D31B1CD89BDB4*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
