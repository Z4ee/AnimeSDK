#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C4E1C9D230F5900D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E45B90)
#define CLASS_1_C4E1C9D230F5900D_CLONE_OFFSET UNITYSDK_OFFSET(0x17E45830)
#define CLASS_1_C4E1C9D230F5900D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E459C0)
#define CLASS_1_C4E1C9D230F5900D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E45910)
#define CLASS_1_C4E1C9D230F5900D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E45A30)
#define CLASS_1_C4E1C9D230F5900D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E45E00)
#define CLASS_1_C4E1C9D230F5900D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E45DB0)
#define CLASS_1_C4E1C9D230F5900D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E458B0)
#define CLASS_1_C4E1C9D230F5900D_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E45900)
#define CLASS_1_C4E1C9D230F5900D_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17E458E0)
#define CLASS_1_C4E1C9D230F5900D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E458C0)
#define CLASS_1_C4E1C9D230F5900D_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17E458D0)
#define CLASS_1_C4E1C9D230F5900D_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E458F0)
#define CLASS_1_C4E1C9D230F5900D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E457D0)
#define CLASS_1_C4E1C9D230F5900D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E45A70)
#define CLASS_1_C4E1C9D230F5900D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E45AD0)
#define CLASS_1_C4E1C9D230F5900D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E457F0)
#define CLASS_1_C4E1C9D230F5900D__CTOR_OFFSET UNITYSDK_OFFSET(0x17E457E0)

inline static constexpr unsigned int Class_1_C4E1C9D230F5900D_TypeDefinitionIndex = 25410;

class Class_1_C4E1C9D230F5900D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::Enum_3_DB663931210BBC27_28 Field_1_6; // 0x1C
	::System::Int64 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C4E1C9D230F5900D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4E1C9D230F5900D*))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C4E1C9D230F5900D* Clone()
	{
		return ((::Class_1_C4E1C9D230F5900D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_28 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_28(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C4E1C9D230F5900D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4E1C9D230F5900D*))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C4E1C9D230F5900D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4E1C9D230F5900D*))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C4E1C9D230F5900D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
