#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03BB5E9973FF6983;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_370B64CFA1979F38_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E7B010)
#define CLASS_1_370B64CFA1979F38_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17E7AD00)
#define CLASS_1_370B64CFA1979F38_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E7AE30)
#define CLASS_1_370B64CFA1979F38_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E7AD80)
#define CLASS_1_370B64CFA1979F38_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E7AED0)
#define CLASS_1_370B64CFA1979F38_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E7B100)
#define CLASS_1_370B64CFA1979F38_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E7B070)
#define CLASS_1_370B64CFA1979F38_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E7AD60)
#define CLASS_1_370B64CFA1979F38_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E7AD70)
#define CLASS_1_370B64CFA1979F38_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E7AC90)
#define CLASS_1_370B64CFA1979F38_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E7AF50)
#define CLASS_1_370B64CFA1979F38_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E7AFB0)
#define CLASS_1_370B64CFA1979F38_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E7ACB0)
#define CLASS_1_370B64CFA1979F38_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7ACA0)

inline static constexpr unsigned int Class_1_370B64CFA1979F38_3_TypeDefinitionIndex = 24633;

class Class_1_370B64CFA1979F38_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Class_1_03BB5E9973FF6983* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_370B64CFA1979F38_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_370B64CFA1979F38_3*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_370B64CFA1979F38_3* Clone()
	{
		return ((::Class_1_370B64CFA1979F38_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_CLONE_OFFSET))(this);
	}

	::Class_1_03BB5E9973FF6983* Method_1_24748FC20F375725()
	{
		return ((::Class_1_03BB5E9973FF6983*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_03BB5E9973FF6983* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_03BB5E9973FF6983*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_370B64CFA1979F38_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_370B64CFA1979F38_3*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_370B64CFA1979F38_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_370B64CFA1979F38_3*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
