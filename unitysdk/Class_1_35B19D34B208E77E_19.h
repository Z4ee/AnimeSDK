#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_55.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35B19D34B208E77E_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B46DA0)
#define CLASS_1_35B19D34B208E77E_19_CLONE_OFFSET UNITYSDK_OFFSET(0x17B46A50)
#define CLASS_1_35B19D34B208E77E_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B46BE0)
#define CLASS_1_35B19D34B208E77E_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B46B30)
#define CLASS_1_35B19D34B208E77E_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B46C50)
#define CLASS_1_35B19D34B208E77E_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B46FC0)
#define CLASS_1_35B19D34B208E77E_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B46F70)
#define CLASS_1_35B19D34B208E77E_19_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17B46B10)
#define CLASS_1_35B19D34B208E77E_19_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B46AF0)
#define CLASS_1_35B19D34B208E77E_19_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17B46AE0)
#define CLASS_1_35B19D34B208E77E_19_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17B46B20)
#define CLASS_1_35B19D34B208E77E_19_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B46B00)
#define CLASS_1_35B19D34B208E77E_19_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17B46AD0)
#define CLASS_1_35B19D34B208E77E_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B469F0)
#define CLASS_1_35B19D34B208E77E_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B46C80)
#define CLASS_1_35B19D34B208E77E_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B46CE0)
#define CLASS_1_35B19D34B208E77E_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B46A10)
#define CLASS_1_35B19D34B208E77E_19__CTOR_OFFSET UNITYSDK_OFFSET(0x17B46A00)

inline static constexpr unsigned int Class_1_35B19D34B208E77E_19_TypeDefinitionIndex = 26058;

class Class_1_35B19D34B208E77E_19 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::Enum_3_0A3761FE34514D6C_55 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35B19D34B208E77E_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_19*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35B19D34B208E77E_19* Clone()
	{
		return ((::Class_1_35B19D34B208E77E_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_55 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_55(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_55 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_55))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35B19D34B208E77E_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35B19D34B208E77E_19*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35B19D34B208E77E_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_19*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
