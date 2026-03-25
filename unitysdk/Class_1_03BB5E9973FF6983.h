#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_03BB5E9973FF6983_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4BE90)
#define CLASS_1_03BB5E9973FF6983_CLONE_OFFSET UNITYSDK_OFFSET(0x17E4BAE0)
#define CLASS_1_03BB5E9973FF6983_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E4BCB0)
#define CLASS_1_03BB5E9973FF6983_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E4BBD0)
#define CLASS_1_03BB5E9973FF6983_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4BD60)
#define CLASS_1_03BB5E9973FF6983_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4C0B0)
#define CLASS_1_03BB5E9973FF6983_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4BFC0)
#define CLASS_1_03BB5E9973FF6983_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x17E4BB90)
#define CLASS_1_03BB5E9973FF6983_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17E4BBC0)
#define CLASS_1_03BB5E9973FF6983_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x17E4BBA0)
#define CLASS_1_03BB5E9973FF6983_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17E4BBB0)
#define CLASS_1_03BB5E9973FF6983_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4BA40)
#define CLASS_1_03BB5E9973FF6983_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4BDB0)
#define CLASS_1_03BB5E9973FF6983_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4BE10)
#define CLASS_1_03BB5E9973FF6983__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E4BA60)
#define CLASS_1_03BB5E9973FF6983__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4BA50)

inline static constexpr unsigned int Class_1_03BB5E9973FF6983_TypeDefinitionIndex = 24599;

class Class_1_03BB5E9973FF6983 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::PlayerSimpleInfo* Field_1_2; // 0x18
	::System::Int64 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_03BB5E9973FF6983* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_03BB5E9973FF6983*))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_03BB5E9973FF6983* Clone()
	{
		return ((::Class_1_03BB5E9973FF6983*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_CLONE_OFFSET))(this);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_03BB5E9973FF6983* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_03BB5E9973FF6983*))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_03BB5E9973FF6983* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_03BB5E9973FF6983*))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_03BB5E9973FF6983_MERGEFROM_1_OFFSET))(this, a1);
	}
};
