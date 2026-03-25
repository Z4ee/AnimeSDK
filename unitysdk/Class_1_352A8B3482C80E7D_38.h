#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_49.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_38_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DEAA20)
#define CLASS_1_352A8B3482C80E7D_38_CLONE_OFFSET UNITYSDK_OFFSET(0x17DEA750)
#define CLASS_1_352A8B3482C80E7D_38_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DEA8A0)
#define CLASS_1_352A8B3482C80E7D_38_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DEA800)
#define CLASS_1_352A8B3482C80E7D_38_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DEA900)
#define CLASS_1_352A8B3482C80E7D_38_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DEABB0)
#define CLASS_1_352A8B3482C80E7D_38_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DEAB70)
#define CLASS_1_352A8B3482C80E7D_38_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DEA7C0)
#define CLASS_1_352A8B3482C80E7D_38_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17DEA7F0)
#define CLASS_1_352A8B3482C80E7D_38_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DEA7D0)
#define CLASS_1_352A8B3482C80E7D_38_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17DEA7E0)
#define CLASS_1_352A8B3482C80E7D_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DEA700)
#define CLASS_1_352A8B3482C80E7D_38_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DEA930)
#define CLASS_1_352A8B3482C80E7D_38_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DEA990)
#define CLASS_1_352A8B3482C80E7D_38__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DEA720)
#define CLASS_1_352A8B3482C80E7D_38__CTOR_OFFSET UNITYSDK_OFFSET(0x17DEA710)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_38_TypeDefinitionIndex = 25776;

class Class_1_352A8B3482C80E7D_38 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_0A3761FE34514D6C_49 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_38*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_38* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_49 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_49(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_49 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_49))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_38* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_38*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_38*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_38_MERGEFROM_1_OFFSET))(this, a1);
	}
};
