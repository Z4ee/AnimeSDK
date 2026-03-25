#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_32.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CD8900)
#define CLASS_1_352A8B3482C80E7D_21_CLONE_OFFSET UNITYSDK_OFFSET(0x17CD8630)
#define CLASS_1_352A8B3482C80E7D_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CD8780)
#define CLASS_1_352A8B3482C80E7D_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CD86E0)
#define CLASS_1_352A8B3482C80E7D_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CD87E0)
#define CLASS_1_352A8B3482C80E7D_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CD8A90)
#define CLASS_1_352A8B3482C80E7D_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CD8A50)
#define CLASS_1_352A8B3482C80E7D_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CD86C0)
#define CLASS_1_352A8B3482C80E7D_21_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17CD86B0)
#define CLASS_1_352A8B3482C80E7D_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CD86D0)
#define CLASS_1_352A8B3482C80E7D_21_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17CD86A0)
#define CLASS_1_352A8B3482C80E7D_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CD85E0)
#define CLASS_1_352A8B3482C80E7D_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CD8810)
#define CLASS_1_352A8B3482C80E7D_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CD8870)
#define CLASS_1_352A8B3482C80E7D_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CD8600)
#define CLASS_1_352A8B3482C80E7D_21__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD85F0)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_21_TypeDefinitionIndex = 24540;

class Class_1_352A8B3482C80E7D_21 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DB663931210BBC27_32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_21*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_21* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_32 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_21*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_21*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
