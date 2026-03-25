#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_5.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AC225A1BAAB9FACC_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E38760)
#define CLASS_1_AC225A1BAAB9FACC_6_CLONE_OFFSET UNITYSDK_OFFSET(0x17E38250)
#define CLASS_1_AC225A1BAAB9FACC_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E384A0)
#define CLASS_1_AC225A1BAAB9FACC_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E383D0)
#define CLASS_1_AC225A1BAAB9FACC_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E38570)
#define CLASS_1_AC225A1BAAB9FACC_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E38AF0)
#define CLASS_1_AC225A1BAAB9FACC_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E38A40)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E383B0)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E38390)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x17E38380)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E38340)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E383C0)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E383A0)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x17E38370)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E38330)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17E38360)
#define CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17E38350)
#define CLASS_1_AC225A1BAAB9FACC_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E38160)
#define CLASS_1_AC225A1BAAB9FACC_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E385C0)
#define CLASS_1_AC225A1BAAB9FACC_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E38620)
#define CLASS_1_AC225A1BAAB9FACC_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E38180)
#define CLASS_1_AC225A1BAAB9FACC_6__CTOR_OFFSET UNITYSDK_OFFSET(0x17E38170)

inline static constexpr unsigned int Class_1_AC225A1BAAB9FACC_6_TypeDefinitionIndex = 25373;

class Class_1_AC225A1BAAB9FACC_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	::Class_1_EBB10EC01CCC4716_11* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_10; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::Enum_3_F80BFD5B986D5503_5 Field_1_2; // 0x28
	::Enum_3_F80BFD5B986D5503_3 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AC225A1BAAB9FACC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_6*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AC225A1BAAB9FACC_6* Clone()
	{
		return ((::Class_1_AC225A1BAAB9FACC_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_CLONE_OFFSET))(this);
	}

	::Enum_3_F80BFD5B986D5503_5 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_F80BFD5B986D5503_5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_F80BFD5B986D5503_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_5))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Enum_3_F80BFD5B986D5503_3 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_F80BFD5B986D5503_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_F80BFD5B986D5503_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_11* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_11*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AC225A1BAAB9FACC_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_6*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AC225A1BAAB9FACC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_6*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
