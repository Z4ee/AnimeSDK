#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_26.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_65_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CF5F90)
#define CLASS_1_352A8B3482C80E7D_65_CLONE_OFFSET UNITYSDK_OFFSET(0x17CF5CC0)
#define CLASS_1_352A8B3482C80E7D_65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CF5E10)
#define CLASS_1_352A8B3482C80E7D_65_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CF5D70)
#define CLASS_1_352A8B3482C80E7D_65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CF5E70)
#define CLASS_1_352A8B3482C80E7D_65_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CF6120)
#define CLASS_1_352A8B3482C80E7D_65_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CF60E0)
#define CLASS_1_352A8B3482C80E7D_65_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CF5D30)
#define CLASS_1_352A8B3482C80E7D_65_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17CF5D60)
#define CLASS_1_352A8B3482C80E7D_65_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CF5D40)
#define CLASS_1_352A8B3482C80E7D_65_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17CF5D50)
#define CLASS_1_352A8B3482C80E7D_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CF5C70)
#define CLASS_1_352A8B3482C80E7D_65_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CF5EA0)
#define CLASS_1_352A8B3482C80E7D_65_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CF5F00)
#define CLASS_1_352A8B3482C80E7D_65__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CF5C90)
#define CLASS_1_352A8B3482C80E7D_65__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF5C80)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_65_TypeDefinitionIndex = 27564;

class Class_1_352A8B3482C80E7D_65 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::Enum_3_ED790DAC948A65A9_26 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_65*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_65* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_26 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_26(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_26 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_26))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_65* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_65*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_65*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_65_MERGEFROM_1_OFFSET))(this, a1);
	}
};
