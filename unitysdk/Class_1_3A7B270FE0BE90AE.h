#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35379441886C7D20;
class Class_1_4DC6841D62972C54_1;
class Class_1_EBB10EC01CCC4716_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3A7B270FE0BE90AE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CF3D40)
#define CLASS_1_3A7B270FE0BE90AE_CLONE_OFFSET UNITYSDK_OFFSET(0x17CF3880)
#define CLASS_1_3A7B270FE0BE90AE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CF3A90)
#define CLASS_1_3A7B270FE0BE90AE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CF3930)
#define CLASS_1_3A7B270FE0BE90AE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CF3BB0)
#define CLASS_1_3A7B270FE0BE90AE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CF3F80)
#define CLASS_1_3A7B270FE0BE90AE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CF3E00)
#define CLASS_1_3A7B270FE0BE90AE_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17CF38F0)
#define CLASS_1_3A7B270FE0BE90AE_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x17CF3910)
#define CLASS_1_3A7B270FE0BE90AE_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17CF38D0)
#define CLASS_1_3A7B270FE0BE90AE_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17CF3900)
#define CLASS_1_3A7B270FE0BE90AE_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x17CF3920)
#define CLASS_1_3A7B270FE0BE90AE_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17CF38E0)
#define CLASS_1_3A7B270FE0BE90AE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CF36C0)
#define CLASS_1_3A7B270FE0BE90AE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CF3C30)
#define CLASS_1_3A7B270FE0BE90AE_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CF3C90)
#define CLASS_1_3A7B270FE0BE90AE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CF36E0)
#define CLASS_1_3A7B270FE0BE90AE__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF36D0)

inline static constexpr unsigned int Class_1_3A7B270FE0BE90AE_TypeDefinitionIndex = 23196;

class Class_1_3A7B270FE0BE90AE : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Class_1_4DC6841D62972C54_1* Field_1_4; // 0x10
	::Class_1_EBB10EC01CCC4716_10* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_35379441886C7D20* Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3A7B270FE0BE90AE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3A7B270FE0BE90AE* Clone()
	{
		return ((::Class_1_3A7B270FE0BE90AE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_CLONE_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_10* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_10*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_4DC6841D62972C54_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4DC6841D62972C54_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4DC6841D62972C54_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_1*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_35379441886C7D20* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_35379441886C7D20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_35379441886C7D20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3A7B270FE0BE90AE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3A7B270FE0BE90AE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A7B270FE0BE90AE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
