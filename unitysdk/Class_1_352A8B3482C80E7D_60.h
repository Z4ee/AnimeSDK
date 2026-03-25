#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_60_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182586E0)
#define CLASS_1_352A8B3482C80E7D_60_CLONE_OFFSET UNITYSDK_OFFSET(0x18258410)
#define CLASS_1_352A8B3482C80E7D_60_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18258560)
#define CLASS_1_352A8B3482C80E7D_60_EQUALS_OFFSET UNITYSDK_OFFSET(0x182584C0)
#define CLASS_1_352A8B3482C80E7D_60_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182585C0)
#define CLASS_1_352A8B3482C80E7D_60_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18258870)
#define CLASS_1_352A8B3482C80E7D_60_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18258830)
#define CLASS_1_352A8B3482C80E7D_60_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182584A0)
#define CLASS_1_352A8B3482C80E7D_60_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18258490)
#define CLASS_1_352A8B3482C80E7D_60_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182584B0)
#define CLASS_1_352A8B3482C80E7D_60_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18258480)
#define CLASS_1_352A8B3482C80E7D_60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182583C0)
#define CLASS_1_352A8B3482C80E7D_60_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182585F0)
#define CLASS_1_352A8B3482C80E7D_60_WRITETO_OFFSET UNITYSDK_OFFSET(0x18258650)
#define CLASS_1_352A8B3482C80E7D_60__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182583E0)
#define CLASS_1_352A8B3482C80E7D_60__CTOR_OFFSET UNITYSDK_OFFSET(0x182583D0)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_60_TypeDefinitionIndex = 27350;

class Class_1_352A8B3482C80E7D_60 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::Enum_3_A35B38E5F9115A76 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_60*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_60* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_60*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_CLONE_OFFSET))(this);
	}

	::Enum_3_A35B38E5F9115A76 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_A35B38E5F9115A76 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_60* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_60*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_60*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_60_MERGEFROM_1_OFFSET))(this, a1);
	}
};
