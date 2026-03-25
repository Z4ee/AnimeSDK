#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFFE981EB501B7BD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1385DB667F828745_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1814BF20)
#define CLASS_1_1385DB667F828745_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1814BB30)
#define CLASS_1_1385DB667F828745_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1814BD30)
#define CLASS_1_1385DB667F828745_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1814BC60)
#define CLASS_1_1385DB667F828745_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1814BDD0)
#define CLASS_1_1385DB667F828745_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1814BFF0)
#define CLASS_1_1385DB667F828745_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1814BF80)
#define CLASS_1_1385DB667F828745_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1814BC40)
#define CLASS_1_1385DB667F828745_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1814BC50)
#define CLASS_1_1385DB667F828745_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1814BA40)
#define CLASS_1_1385DB667F828745_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1814BE60)
#define CLASS_1_1385DB667F828745_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1814BEC0)
#define CLASS_1_1385DB667F828745_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1814BA60)
#define CLASS_1_1385DB667F828745_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1814BA50)

inline static constexpr unsigned int Class_1_1385DB667F828745_2_TypeDefinitionIndex = 26552;

class Class_1_1385DB667F828745_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Class_1_EFFE981EB501B7BD* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1385DB667F828745_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1385DB667F828745_2*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1385DB667F828745_2* Clone()
	{
		return ((::Class_1_1385DB667F828745_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_CLONE_OFFSET))(this);
	}

	::Class_1_EFFE981EB501B7BD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EFFE981EB501B7BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EFFE981EB501B7BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFFE981EB501B7BD*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1385DB667F828745_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1385DB667F828745_2*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1385DB667F828745_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1385DB667F828745_2*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
