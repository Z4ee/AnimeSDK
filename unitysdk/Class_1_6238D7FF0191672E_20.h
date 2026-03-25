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

#define CLASS_1_6238D7FF0191672E_20_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B5AAF0)
#define CLASS_1_6238D7FF0191672E_20_CLONE_OFFSET UNITYSDK_OFFSET(0x17B5A620)
#define CLASS_1_6238D7FF0191672E_20_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B5A870)
#define CLASS_1_6238D7FF0191672E_20_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B5A780)
#define CLASS_1_6238D7FF0191672E_20_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B5A960)
#define CLASS_1_6238D7FF0191672E_20_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B5AD60)
#define CLASS_1_6238D7FF0191672E_20_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B5AC00)
#define CLASS_1_6238D7FF0191672E_20_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B5A740)
#define CLASS_1_6238D7FF0191672E_20_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17B5A760)
#define CLASS_1_6238D7FF0191672E_20_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B5A720)
#define CLASS_1_6238D7FF0191672E_20_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B5A750)
#define CLASS_1_6238D7FF0191672E_20_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17B5A770)
#define CLASS_1_6238D7FF0191672E_20_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B5A730)
#define CLASS_1_6238D7FF0191672E_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B5A510)
#define CLASS_1_6238D7FF0191672E_20_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B5A9F0)
#define CLASS_1_6238D7FF0191672E_20_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B5AA50)
#define CLASS_1_6238D7FF0191672E_20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B5A530)
#define CLASS_1_6238D7FF0191672E_20__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5A520)

inline static constexpr unsigned int Class_1_6238D7FF0191672E_20_TypeDefinitionIndex = 27217;

class Class_1_6238D7FF0191672E_20 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	::Class_1_352A8B3482C80E7D_58* Field_1_6; // 0x10
	::Class_1_F8AB4CD8CD203268* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6238D7FF0191672E_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_20*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6238D7FF0191672E_20* Clone()
	{
		return ((::Class_1_6238D7FF0191672E_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_CLONE_OFFSET))(this);
	}

	::Class_1_F8AB4CD8CD203268* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F8AB4CD8CD203268*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F8AB4CD8CD203268* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8AB4CD8CD203268*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_352A8B3482C80E7D_58* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_352A8B3482C80E7D_58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_352A8B3482C80E7D_58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_58*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6238D7FF0191672E_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6238D7FF0191672E_20*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6238D7FF0191672E_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_20*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_20_MERGEFROM_1_OFFSET))(this, a1);
	}
};
