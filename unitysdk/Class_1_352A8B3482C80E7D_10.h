#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_21.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B6F650)
#define CLASS_1_352A8B3482C80E7D_10_CLONE_OFFSET UNITYSDK_OFFSET(0x17B6F380)
#define CLASS_1_352A8B3482C80E7D_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B6F4D0)
#define CLASS_1_352A8B3482C80E7D_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B6F430)
#define CLASS_1_352A8B3482C80E7D_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B6F530)
#define CLASS_1_352A8B3482C80E7D_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B6F7E0)
#define CLASS_1_352A8B3482C80E7D_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B6F7A0)
#define CLASS_1_352A8B3482C80E7D_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B6F3F0)
#define CLASS_1_352A8B3482C80E7D_10_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17B6F420)
#define CLASS_1_352A8B3482C80E7D_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B6F400)
#define CLASS_1_352A8B3482C80E7D_10_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17B6F410)
#define CLASS_1_352A8B3482C80E7D_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B6F330)
#define CLASS_1_352A8B3482C80E7D_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B6F560)
#define CLASS_1_352A8B3482C80E7D_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B6F5C0)
#define CLASS_1_352A8B3482C80E7D_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B6F350)
#define CLASS_1_352A8B3482C80E7D_10__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6F340)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_10_TypeDefinitionIndex = 23897;

class Class_1_352A8B3482C80E7D_10 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DB663931210BBC27_21 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_10*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_10* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_21 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_21(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_21 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_21))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_10*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_10*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
