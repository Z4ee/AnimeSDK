#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6242EC2CDE685F28;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA60E9866DBA97E8_47_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BB4460)
#define CLASS_1_FA60E9866DBA97E8_47_CLONE_OFFSET UNITYSDK_OFFSET(0x17BB40F0)
#define CLASS_1_FA60E9866DBA97E8_47_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BB4280)
#define CLASS_1_FA60E9866DBA97E8_47_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BB41D0)
#define CLASS_1_FA60E9866DBA97E8_47_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BB4330)
#define CLASS_1_FA60E9866DBA97E8_47_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BB4620)
#define CLASS_1_FA60E9866DBA97E8_47_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BB4530)
#define CLASS_1_FA60E9866DBA97E8_47_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BB41B0)
#define CLASS_1_FA60E9866DBA97E8_47_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17BB4190)
#define CLASS_1_FA60E9866DBA97E8_47_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BB41C0)
#define CLASS_1_FA60E9866DBA97E8_47_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17BB41A0)
#define CLASS_1_FA60E9866DBA97E8_47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BB4040)
#define CLASS_1_FA60E9866DBA97E8_47_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BB4380)
#define CLASS_1_FA60E9866DBA97E8_47_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BB43E0)
#define CLASS_1_FA60E9866DBA97E8_47__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BB4060)
#define CLASS_1_FA60E9866DBA97E8_47__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB4050)

inline static constexpr unsigned int Class_1_FA60E9866DBA97E8_47_TypeDefinitionIndex = 27597;

class Class_1_FA60E9866DBA97E8_47 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_6242EC2CDE685F28* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA60E9866DBA97E8_47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_47*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA60E9866DBA97E8_47* Clone()
	{
		return ((::Class_1_FA60E9866DBA97E8_47*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_CLONE_OFFSET))(this);
	}

	::Class_1_6242EC2CDE685F28* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6242EC2CDE685F28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6242EC2CDE685F28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6242EC2CDE685F28*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA60E9866DBA97E8_47* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_47*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA60E9866DBA97E8_47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_47*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_47_MERGEFROM_1_OFFSET))(this, a1);
	}
};
