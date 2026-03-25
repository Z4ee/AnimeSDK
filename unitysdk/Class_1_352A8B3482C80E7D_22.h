#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_35.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CCF070)
#define CLASS_1_352A8B3482C80E7D_22_CLONE_OFFSET UNITYSDK_OFFSET(0x17CCEDA0)
#define CLASS_1_352A8B3482C80E7D_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CCEEF0)
#define CLASS_1_352A8B3482C80E7D_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CCEE50)
#define CLASS_1_352A8B3482C80E7D_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CCEF50)
#define CLASS_1_352A8B3482C80E7D_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CCF200)
#define CLASS_1_352A8B3482C80E7D_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CCF1C0)
#define CLASS_1_352A8B3482C80E7D_22_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CCEE30)
#define CLASS_1_352A8B3482C80E7D_22_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17CCEE20)
#define CLASS_1_352A8B3482C80E7D_22_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CCEE40)
#define CLASS_1_352A8B3482C80E7D_22_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17CCEE10)
#define CLASS_1_352A8B3482C80E7D_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CCED50)
#define CLASS_1_352A8B3482C80E7D_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CCEF80)
#define CLASS_1_352A8B3482C80E7D_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CCEFE0)
#define CLASS_1_352A8B3482C80E7D_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CCED70)
#define CLASS_1_352A8B3482C80E7D_22__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCED60)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_22_TypeDefinitionIndex = 24539;

class Class_1_352A8B3482C80E7D_22 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::Enum_3_0A3761FE34514D6C_35 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_22*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_22* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_35 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_35(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_35 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_35))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_22*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_22*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
