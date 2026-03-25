#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFFE981EB501B7BD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1385DB667F828745_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FF2E90)
#define CLASS_1_1385DB667F828745_CLONE_OFFSET UNITYSDK_OFFSET(0x17FF2AA0)
#define CLASS_1_1385DB667F828745_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FF2CA0)
#define CLASS_1_1385DB667F828745_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FF2BD0)
#define CLASS_1_1385DB667F828745_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FF2D40)
#define CLASS_1_1385DB667F828745_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FF2F60)
#define CLASS_1_1385DB667F828745_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FF2EF0)
#define CLASS_1_1385DB667F828745_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FF2BB0)
#define CLASS_1_1385DB667F828745_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FF2BC0)
#define CLASS_1_1385DB667F828745_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FF29B0)
#define CLASS_1_1385DB667F828745_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FF2DD0)
#define CLASS_1_1385DB667F828745_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FF2E30)
#define CLASS_1_1385DB667F828745__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FF29D0)
#define CLASS_1_1385DB667F828745__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF29C0)

inline static constexpr unsigned int Class_1_1385DB667F828745_TypeDefinitionIndex = 26547;

class Class_1_1385DB667F828745 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Class_1_EFFE981EB501B7BD* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1385DB667F828745* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1385DB667F828745*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1385DB667F828745* Clone()
	{
		return ((::Class_1_1385DB667F828745*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_CLONE_OFFSET))(this);
	}

	::Class_1_EFFE981EB501B7BD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EFFE981EB501B7BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EFFE981EB501B7BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFFE981EB501B7BD*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1385DB667F828745* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1385DB667F828745*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1385DB667F828745* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1385DB667F828745*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1385DB667F828745_MERGEFROM_1_OFFSET))(this, a1);
	}
};
