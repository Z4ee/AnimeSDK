#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_36F606812EC9EB69_Enum_3_FCBB2C507E9B21A3_1.h"
#include "unitysdk/System/Object.h"

class Class_1_BDBF4167CAB0A166_1;
class Class_1_F36D19497C26B279;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_36F606812EC9EB69_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FBD370)
#define CLASS_1_36F606812EC9EB69_CLONE_OFFSET UNITYSDK_OFFSET(0x17FBCF20)
#define CLASS_1_36F606812EC9EB69_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FBCFA0)
#define CLASS_1_36F606812EC9EB69_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FBCF70)
#define CLASS_1_36F606812EC9EB69_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FBD1C0)
#define CLASS_1_36F606812EC9EB69_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FBD640)
#define CLASS_1_36F606812EC9EB69_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FBD430)
#define CLASS_1_36F606812EC9EB69_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17FBCF50)
#define CLASS_1_36F606812EC9EB69_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17FBCF60)
#define CLASS_1_36F606812EC9EB69_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17FBCF00)
#define CLASS_1_36F606812EC9EB69_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FBCEB0)
#define CLASS_1_36F606812EC9EB69_METHOD_1_C4BFBB1BE6C0430A_1_OFFSET UNITYSDK_OFFSET(0x17FBCEC0)
#define CLASS_1_36F606812EC9EB69_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x17FBCE70)
#define CLASS_1_36F606812EC9EB69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FBCD60)
#define CLASS_1_36F606812EC9EB69_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FBD250)
#define CLASS_1_36F606812EC9EB69_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FBD2B0)
#define CLASS_1_36F606812EC9EB69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FBCD80)
#define CLASS_1_36F606812EC9EB69__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBCD70)

inline static constexpr unsigned int Class_1_36F606812EC9EB69_TypeDefinitionIndex = 23108;

class Class_1_36F606812EC9EB69 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::System::Object* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_36F606812EC9EB69_Enum_3_FCBB2C507E9B21A3_1 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_36F606812EC9EB69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69*))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_36F606812EC9EB69* Clone()
	{
		return ((::Class_1_36F606812EC9EB69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_CLONE_OFFSET))(this);
	}

	::Class_1_F36D19497C26B279* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_F36D19497C26B279*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F36D19497C26B279* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F36D19497C26B279*))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_BDBF4167CAB0A166_1* Method_1_C4BFBB1BE6C0430A_1()
	{
		return ((::Class_1_BDBF4167CAB0A166_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_METHOD_1_C4BFBB1BE6C0430A_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_BDBF4167CAB0A166_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDBF4167CAB0A166_1*))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_36F606812EC9EB69_Enum_3_FCBB2C507E9B21A3_1 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_36F606812EC9EB69_Enum_3_FCBB2C507E9B21A3_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_36F606812EC9EB69* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36F606812EC9EB69*))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_36F606812EC9EB69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69*))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_36F606812EC9EB69_MERGEFROM_1_OFFSET))(this, a1);
	}
};
