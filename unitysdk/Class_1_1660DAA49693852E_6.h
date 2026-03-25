#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0306FBB84513F0B2_2;
class Class_1_120319518E6F6581_81;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1821D850)
#define CLASS_1_1660DAA49693852E_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1821D3A0)
#define CLASS_1_1660DAA49693852E_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1821D620)
#define CLASS_1_1660DAA49693852E_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1821D510)
#define CLASS_1_1660DAA49693852E_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1821D700)
#define CLASS_1_1660DAA49693852E_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1821D9E0)
#define CLASS_1_1660DAA49693852E_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1821D8E0)
#define CLASS_1_1660DAA49693852E_6_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1821D4F0)
#define CLASS_1_1660DAA49693852E_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1821D4D0)
#define CLASS_1_1660DAA49693852E_6_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1821D500)
#define CLASS_1_1660DAA49693852E_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1821D4E0)
#define CLASS_1_1660DAA49693852E_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1821D290)
#define CLASS_1_1660DAA49693852E_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1821D770)
#define CLASS_1_1660DAA49693852E_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1821D7D0)
#define CLASS_1_1660DAA49693852E_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1821D2B0)
#define CLASS_1_1660DAA49693852E_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1821D2A0)

inline static constexpr unsigned int Class_1_1660DAA49693852E_6_TypeDefinitionIndex = 25812;

class Class_1_1660DAA49693852E_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_120319518E6F6581_81* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_0306FBB84513F0B2_2* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_6*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E_6* Clone()
	{
		return ((::Class_1_1660DAA49693852E_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_CLONE_OFFSET))(this);
	}

	::Class_1_0306FBB84513F0B2_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0306FBB84513F0B2_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0306FBB84513F0B2_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0306FBB84513F0B2_2*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_120319518E6F6581_81* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_120319518E6F6581_81*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_120319518E6F6581_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_81*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E_6*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_6*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
