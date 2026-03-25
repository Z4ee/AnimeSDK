#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_31.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_59_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E96A80)
#define CLASS_1_352A8B3482C80E7D_59_CLONE_OFFSET UNITYSDK_OFFSET(0x17E967B0)
#define CLASS_1_352A8B3482C80E7D_59_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E96900)
#define CLASS_1_352A8B3482C80E7D_59_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E96860)
#define CLASS_1_352A8B3482C80E7D_59_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E96960)
#define CLASS_1_352A8B3482C80E7D_59_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E96C10)
#define CLASS_1_352A8B3482C80E7D_59_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E96BD0)
#define CLASS_1_352A8B3482C80E7D_59_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E96820)
#define CLASS_1_352A8B3482C80E7D_59_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E96850)
#define CLASS_1_352A8B3482C80E7D_59_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E96830)
#define CLASS_1_352A8B3482C80E7D_59_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E96840)
#define CLASS_1_352A8B3482C80E7D_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E96760)
#define CLASS_1_352A8B3482C80E7D_59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E96990)
#define CLASS_1_352A8B3482C80E7D_59_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E969F0)
#define CLASS_1_352A8B3482C80E7D_59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E96780)
#define CLASS_1_352A8B3482C80E7D_59__CTOR_OFFSET UNITYSDK_OFFSET(0x17E96770)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_59_TypeDefinitionIndex = 27232;

class Class_1_352A8B3482C80E7D_59 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_96F6662CA3713095_31 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_59*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_59* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_59*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_31 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_31(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_31 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_31))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_59*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_59*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_59_MERGEFROM_1_OFFSET))(this, a1);
	}
};
