#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_13.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_36_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18043990)
#define CLASS_1_352A8B3482C80E7D_36_CLONE_OFFSET UNITYSDK_OFFSET(0x18043710)
#define CLASS_1_352A8B3482C80E7D_36_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18043810)
#define CLASS_1_352A8B3482C80E7D_36_EQUALS_OFFSET UNITYSDK_OFFSET(0x180437A0)
#define CLASS_1_352A8B3482C80E7D_36_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18043870)
#define CLASS_1_352A8B3482C80E7D_36_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18043B20)
#define CLASS_1_352A8B3482C80E7D_36_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18043AE0)
#define CLASS_1_352A8B3482C80E7D_36_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18043760)
#define CLASS_1_352A8B3482C80E7D_36_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18043790)
#define CLASS_1_352A8B3482C80E7D_36_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18043770)
#define CLASS_1_352A8B3482C80E7D_36_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18043780)
#define CLASS_1_352A8B3482C80E7D_36_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180436C0)
#define CLASS_1_352A8B3482C80E7D_36_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180438A0)
#define CLASS_1_352A8B3482C80E7D_36_WRITETO_OFFSET UNITYSDK_OFFSET(0x18043900)
#define CLASS_1_352A8B3482C80E7D_36__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180436E0)
#define CLASS_1_352A8B3482C80E7D_36__CTOR_OFFSET UNITYSDK_OFFSET(0x180436D0)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_36_TypeDefinitionIndex = 25707;

class Class_1_352A8B3482C80E7D_36 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::Enum_3_71AA90D596A09AC8_13 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_36*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_36* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_13 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_13 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_13))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_36* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_36*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_36*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_36_MERGEFROM_1_OFFSET))(this, a1);
	}
};
