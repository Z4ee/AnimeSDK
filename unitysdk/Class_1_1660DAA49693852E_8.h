#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_58;
class Class_1_F8AB4CD8CD203268;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D3C770)
#define CLASS_1_1660DAA49693852E_8_CLONE_OFFSET UNITYSDK_OFFSET(0x17D3C2B0)
#define CLASS_1_1660DAA49693852E_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D3C530)
#define CLASS_1_1660DAA49693852E_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D3C420)
#define CLASS_1_1660DAA49693852E_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D3C610)
#define CLASS_1_1660DAA49693852E_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D3C940)
#define CLASS_1_1660DAA49693852E_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D3C800)
#define CLASS_1_1660DAA49693852E_8_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17D3C400)
#define CLASS_1_1660DAA49693852E_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D3C3E0)
#define CLASS_1_1660DAA49693852E_8_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17D3C410)
#define CLASS_1_1660DAA49693852E_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D3C3F0)
#define CLASS_1_1660DAA49693852E_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D3C1B0)
#define CLASS_1_1660DAA49693852E_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D3C690)
#define CLASS_1_1660DAA49693852E_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D3C6F0)
#define CLASS_1_1660DAA49693852E_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D3C1D0)
#define CLASS_1_1660DAA49693852E_8__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3C1C0)

inline static constexpr unsigned int Class_1_1660DAA49693852E_8_TypeDefinitionIndex = 27216;

class Class_1_1660DAA49693852E_8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Class_1_F8AB4CD8CD203268* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_352A8B3482C80E7D_58* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_8*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E_8* Clone()
	{
		return ((::Class_1_1660DAA49693852E_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_CLONE_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_58* Method_1_24748FC20F375725()
	{
		return ((::Class_1_352A8B3482C80E7D_58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_352A8B3482C80E7D_58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_58*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_F8AB4CD8CD203268* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_F8AB4CD8CD203268*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_F8AB4CD8CD203268* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8AB4CD8CD203268*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E_8*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_8*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
