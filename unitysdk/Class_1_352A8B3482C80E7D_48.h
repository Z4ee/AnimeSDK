#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_69.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_48_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180D6480)
#define CLASS_1_352A8B3482C80E7D_48_CLONE_OFFSET UNITYSDK_OFFSET(0x180D61B0)
#define CLASS_1_352A8B3482C80E7D_48_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180D6300)
#define CLASS_1_352A8B3482C80E7D_48_EQUALS_OFFSET UNITYSDK_OFFSET(0x180D6260)
#define CLASS_1_352A8B3482C80E7D_48_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180D6360)
#define CLASS_1_352A8B3482C80E7D_48_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180D6610)
#define CLASS_1_352A8B3482C80E7D_48_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180D65D0)
#define CLASS_1_352A8B3482C80E7D_48_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180D6220)
#define CLASS_1_352A8B3482C80E7D_48_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x180D6250)
#define CLASS_1_352A8B3482C80E7D_48_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180D6230)
#define CLASS_1_352A8B3482C80E7D_48_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x180D6240)
#define CLASS_1_352A8B3482C80E7D_48_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180D6160)
#define CLASS_1_352A8B3482C80E7D_48_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180D6390)
#define CLASS_1_352A8B3482C80E7D_48_WRITETO_OFFSET UNITYSDK_OFFSET(0x180D63F0)
#define CLASS_1_352A8B3482C80E7D_48__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180D6180)
#define CLASS_1_352A8B3482C80E7D_48__CTOR_OFFSET UNITYSDK_OFFSET(0x180D6170)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_48_TypeDefinitionIndex = 26736;

class Class_1_352A8B3482C80E7D_48 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::Enum_3_0A3761FE34514D6C_69 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_48* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_48*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_48* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_48*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_69 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_69(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_69 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_69))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_48* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_48*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_48* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_48*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_48_MERGEFROM_1_OFFSET))(this, a1);
	}
};
