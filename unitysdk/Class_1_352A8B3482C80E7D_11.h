#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_10.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F9FD20)
#define CLASS_1_352A8B3482C80E7D_11_CLONE_OFFSET UNITYSDK_OFFSET(0x17F9FA50)
#define CLASS_1_352A8B3482C80E7D_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F9FBA0)
#define CLASS_1_352A8B3482C80E7D_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F9FB00)
#define CLASS_1_352A8B3482C80E7D_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F9FC00)
#define CLASS_1_352A8B3482C80E7D_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F9FEB0)
#define CLASS_1_352A8B3482C80E7D_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F9FE70)
#define CLASS_1_352A8B3482C80E7D_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F9FAE0)
#define CLASS_1_352A8B3482C80E7D_11_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F9FAD0)
#define CLASS_1_352A8B3482C80E7D_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F9FAF0)
#define CLASS_1_352A8B3482C80E7D_11_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F9FAC0)
#define CLASS_1_352A8B3482C80E7D_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F9FA00)
#define CLASS_1_352A8B3482C80E7D_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F9FC30)
#define CLASS_1_352A8B3482C80E7D_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F9FC90)
#define CLASS_1_352A8B3482C80E7D_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F9FA20)
#define CLASS_1_352A8B3482C80E7D_11__CTOR_OFFSET UNITYSDK_OFFSET(0x17F9FA10)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_11_TypeDefinitionIndex = 24100;

class Class_1_352A8B3482C80E7D_11 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_4608E37A1B3D374A_10 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_11*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_11* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_10 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_10(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_10 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_10))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_11*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_11*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
