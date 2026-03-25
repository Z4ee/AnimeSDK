#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_25.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F955916D7B4EE18B_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182D2700)
#define CLASS_1_F955916D7B4EE18B_1_CLONE_OFFSET UNITYSDK_OFFSET(0x182D2470)
#define CLASS_1_F955916D7B4EE18B_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182D2570)
#define CLASS_1_F955916D7B4EE18B_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x182D2500)
#define CLASS_1_F955916D7B4EE18B_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182D25D0)
#define CLASS_1_F955916D7B4EE18B_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182D28E0)
#define CLASS_1_F955916D7B4EE18B_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182D28A0)
#define CLASS_1_F955916D7B4EE18B_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x182D24D0)
#define CLASS_1_F955916D7B4EE18B_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x182D24F0)
#define CLASS_1_F955916D7B4EE18B_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x182D24E0)
#define CLASS_1_F955916D7B4EE18B_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x182D24C0)
#define CLASS_1_F955916D7B4EE18B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182D2410)
#define CLASS_1_F955916D7B4EE18B_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182D2610)
#define CLASS_1_F955916D7B4EE18B_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x182D2670)
#define CLASS_1_F955916D7B4EE18B_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182D2430)
#define CLASS_1_F955916D7B4EE18B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x182D2420)

inline static constexpr unsigned int Class_1_F955916D7B4EE18B_1_TypeDefinitionIndex = 26731;

class Class_1_F955916D7B4EE18B_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt64 Field_1_2; // 0x18
	::Enum_3_96F6662CA3713095_25 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F955916D7B4EE18B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F955916D7B4EE18B_1*))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F955916D7B4EE18B_1* Clone()
	{
		return ((::Class_1_F955916D7B4EE18B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_25 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_25 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_25))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F955916D7B4EE18B_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F955916D7B4EE18B_1*))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F955916D7B4EE18B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F955916D7B4EE18B_1*))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F955916D7B4EE18B_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
