#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_66;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA60E9866DBA97E8_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EB59E0)
#define CLASS_1_FA60E9866DBA97E8_25_CLONE_OFFSET UNITYSDK_OFFSET(0x17EB5630)
#define CLASS_1_FA60E9866DBA97E8_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EB5810)
#define CLASS_1_FA60E9866DBA97E8_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EB5730)
#define CLASS_1_FA60E9866DBA97E8_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EB58C0)
#define CLASS_1_FA60E9866DBA97E8_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EB5BB0)
#define CLASS_1_FA60E9866DBA97E8_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EB5AB0)
#define CLASS_1_FA60E9866DBA97E8_25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EB56F0)
#define CLASS_1_FA60E9866DBA97E8_25_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17EB5710)
#define CLASS_1_FA60E9866DBA97E8_25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EB5700)
#define CLASS_1_FA60E9866DBA97E8_25_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17EB5720)
#define CLASS_1_FA60E9866DBA97E8_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EB5590)
#define CLASS_1_FA60E9866DBA97E8_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EB5900)
#define CLASS_1_FA60E9866DBA97E8_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EB5960)
#define CLASS_1_FA60E9866DBA97E8_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EB55B0)
#define CLASS_1_FA60E9866DBA97E8_25__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB55A0)

inline static constexpr unsigned int Class_1_FA60E9866DBA97E8_25_TypeDefinitionIndex = 25837;

class Class_1_FA60E9866DBA97E8_25 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_6E708EAB438EC183_66* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA60E9866DBA97E8_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_25*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA60E9866DBA97E8_25* Clone()
	{
		return ((::Class_1_FA60E9866DBA97E8_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_6E708EAB438EC183_66* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6E708EAB438EC183_66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6E708EAB438EC183_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_66*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA60E9866DBA97E8_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_25*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA60E9866DBA97E8_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_25*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA60E9866DBA97E8_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
