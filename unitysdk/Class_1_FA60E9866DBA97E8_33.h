#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_50;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA60E9866DBA97E8_33_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18025750)
#define CLASS_1_FA60E9866DBA97E8_33_CLONE_OFFSET UNITYSDK_OFFSET(0x18025400)
#define CLASS_1_FA60E9866DBA97E8_33_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18025580)
#define CLASS_1_FA60E9866DBA97E8_33_EQUALS_OFFSET UNITYSDK_OFFSET(0x180254D0)
#define CLASS_1_FA60E9866DBA97E8_33_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18025630)
#define CLASS_1_FA60E9866DBA97E8_33_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18025940)
#define CLASS_1_FA60E9866DBA97E8_33_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18025820)
#define CLASS_1_FA60E9866DBA97E8_33_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18025490)
#define CLASS_1_FA60E9866DBA97E8_33_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180254B0)
#define CLASS_1_FA60E9866DBA97E8_33_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180254A0)
#define CLASS_1_FA60E9866DBA97E8_33_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180254C0)
#define CLASS_1_FA60E9866DBA97E8_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18025360)
#define CLASS_1_FA60E9866DBA97E8_33_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18025670)
#define CLASS_1_FA60E9866DBA97E8_33_WRITETO_OFFSET UNITYSDK_OFFSET(0x180256D0)
#define CLASS_1_FA60E9866DBA97E8_33__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18025380)
#define CLASS_1_FA60E9866DBA97E8_33__CTOR_OFFSET UNITYSDK_OFFSET(0x18025370)

inline static constexpr unsigned int Class_1_FA60E9866DBA97E8_33_TypeDefinitionIndex = 26243;

class Class_1_FA60E9866DBA97E8_33 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Class_1_99BD961747420BEB_50* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA60E9866DBA97E8_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_33*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA60E9866DBA97E8_33* Clone()
	{
		return ((::Class_1_FA60E9866DBA97E8_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_99BD961747420BEB_50* Method_1_24748FC20F375725()
	{
		return ((::Class_1_99BD961747420BEB_50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_99BD961747420BEB_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_50*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA60E9866DBA97E8_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_33*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA60E9866DBA97E8_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_33*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_33_MERGEFROM_1_OFFSET))(this, a1);
	}
};
