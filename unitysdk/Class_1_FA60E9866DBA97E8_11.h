#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_14;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA60E9866DBA97E8_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181D9510)
#define CLASS_1_FA60E9866DBA97E8_11_CLONE_OFFSET UNITYSDK_OFFSET(0x181D91A0)
#define CLASS_1_FA60E9866DBA97E8_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181D9330)
#define CLASS_1_FA60E9866DBA97E8_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x181D9280)
#define CLASS_1_FA60E9866DBA97E8_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181D93E0)
#define CLASS_1_FA60E9866DBA97E8_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181D96C0)
#define CLASS_1_FA60E9866DBA97E8_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181D95E0)
#define CLASS_1_FA60E9866DBA97E8_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181D9260)
#define CLASS_1_FA60E9866DBA97E8_11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x181D9240)
#define CLASS_1_FA60E9866DBA97E8_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181D9270)
#define CLASS_1_FA60E9866DBA97E8_11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x181D9250)
#define CLASS_1_FA60E9866DBA97E8_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181D90F0)
#define CLASS_1_FA60E9866DBA97E8_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181D9430)
#define CLASS_1_FA60E9866DBA97E8_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x181D9490)
#define CLASS_1_FA60E9866DBA97E8_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181D9110)
#define CLASS_1_FA60E9866DBA97E8_11__CTOR_OFFSET UNITYSDK_OFFSET(0x181D9100)

inline static constexpr unsigned int Class_1_FA60E9866DBA97E8_11_TypeDefinitionIndex = 24229;

class Class_1_FA60E9866DBA97E8_11 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Class_1_E7C4009BCC22497A_14* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA60E9866DBA97E8_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_11*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA60E9866DBA97E8_11* Clone()
	{
		return ((::Class_1_FA60E9866DBA97E8_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_CLONE_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_14* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7C4009BCC22497A_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_14*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA60E9866DBA97E8_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_11*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA60E9866DBA97E8_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_11*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
