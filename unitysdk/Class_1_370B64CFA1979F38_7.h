#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6806B887413448C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_370B64CFA1979F38_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18185400)
#define CLASS_1_370B64CFA1979F38_7_CLONE_OFFSET UNITYSDK_OFFSET(0x18185120)
#define CLASS_1_370B64CFA1979F38_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18185250)
#define CLASS_1_370B64CFA1979F38_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x181851A0)
#define CLASS_1_370B64CFA1979F38_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181852F0)
#define CLASS_1_370B64CFA1979F38_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181854F0)
#define CLASS_1_370B64CFA1979F38_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18185460)
#define CLASS_1_370B64CFA1979F38_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18185180)
#define CLASS_1_370B64CFA1979F38_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18185190)
#define CLASS_1_370B64CFA1979F38_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181850B0)
#define CLASS_1_370B64CFA1979F38_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18185340)
#define CLASS_1_370B64CFA1979F38_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x181853A0)
#define CLASS_1_370B64CFA1979F38_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181850D0)
#define CLASS_1_370B64CFA1979F38_7__CTOR_OFFSET UNITYSDK_OFFSET(0x181850C0)

inline static constexpr unsigned int Class_1_370B64CFA1979F38_7_TypeDefinitionIndex = 26472;

class Class_1_370B64CFA1979F38_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_A6806B887413448C* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_370B64CFA1979F38_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_370B64CFA1979F38_7*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_370B64CFA1979F38_7* Clone()
	{
		return ((::Class_1_370B64CFA1979F38_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_CLONE_OFFSET))(this);
	}

	::Class_1_A6806B887413448C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A6806B887413448C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A6806B887413448C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6806B887413448C*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_370B64CFA1979F38_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_370B64CFA1979F38_7*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_370B64CFA1979F38_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_370B64CFA1979F38_7*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
