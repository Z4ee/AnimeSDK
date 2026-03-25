#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_46;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA60E9866DBA97E8_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C039F0)
#define CLASS_1_FA60E9866DBA97E8_23_CLONE_OFFSET UNITYSDK_OFFSET(0x17C03680)
#define CLASS_1_FA60E9866DBA97E8_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C03810)
#define CLASS_1_FA60E9866DBA97E8_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C03760)
#define CLASS_1_FA60E9866DBA97E8_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C038C0)
#define CLASS_1_FA60E9866DBA97E8_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C03BA0)
#define CLASS_1_FA60E9866DBA97E8_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C03AC0)
#define CLASS_1_FA60E9866DBA97E8_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C03740)
#define CLASS_1_FA60E9866DBA97E8_23_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C03720)
#define CLASS_1_FA60E9866DBA97E8_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C03750)
#define CLASS_1_FA60E9866DBA97E8_23_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C03730)
#define CLASS_1_FA60E9866DBA97E8_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C035D0)
#define CLASS_1_FA60E9866DBA97E8_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C03910)
#define CLASS_1_FA60E9866DBA97E8_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C03970)
#define CLASS_1_FA60E9866DBA97E8_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C035F0)
#define CLASS_1_FA60E9866DBA97E8_23__CTOR_OFFSET UNITYSDK_OFFSET(0x17C035E0)

inline static constexpr unsigned int Class_1_FA60E9866DBA97E8_23_TypeDefinitionIndex = 25638;

class Class_1_FA60E9866DBA97E8_23 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_E7C4009BCC22497A_46* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA60E9866DBA97E8_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_23*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA60E9866DBA97E8_23* Clone()
	{
		return ((::Class_1_FA60E9866DBA97E8_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_CLONE_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_46* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A_46*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7C4009BCC22497A_46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_46*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA60E9866DBA97E8_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_23*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA60E9866DBA97E8_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_23*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
