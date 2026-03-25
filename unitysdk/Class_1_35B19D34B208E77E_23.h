#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35B19D34B208E77E_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EFA310)
#define CLASS_1_35B19D34B208E77E_23_CLONE_OFFSET UNITYSDK_OFFSET(0x17EF9FC0)
#define CLASS_1_35B19D34B208E77E_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EFA150)
#define CLASS_1_35B19D34B208E77E_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EFA0A0)
#define CLASS_1_35B19D34B208E77E_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EFA1C0)
#define CLASS_1_35B19D34B208E77E_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EFA530)
#define CLASS_1_35B19D34B208E77E_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EFA4E0)
#define CLASS_1_35B19D34B208E77E_23_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17EFA080)
#define CLASS_1_35B19D34B208E77E_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EFA060)
#define CLASS_1_35B19D34B208E77E_23_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17EFA050)
#define CLASS_1_35B19D34B208E77E_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17EFA090)
#define CLASS_1_35B19D34B208E77E_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EFA070)
#define CLASS_1_35B19D34B208E77E_23_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17EFA040)
#define CLASS_1_35B19D34B208E77E_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EF9F60)
#define CLASS_1_35B19D34B208E77E_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EFA1F0)
#define CLASS_1_35B19D34B208E77E_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EFA250)
#define CLASS_1_35B19D34B208E77E_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EF9F80)
#define CLASS_1_35B19D34B208E77E_23__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF9F70)

inline static constexpr unsigned int Class_1_35B19D34B208E77E_23_TypeDefinitionIndex = 26708;

class Class_1_35B19D34B208E77E_23 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::Enum_3_0A3761FE34514D6C_66 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35B19D34B208E77E_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_23*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35B19D34B208E77E_23* Clone()
	{
		return ((::Class_1_35B19D34B208E77E_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_66 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_66 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_66))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35B19D34B208E77E_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35B19D34B208E77E_23*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35B19D34B208E77E_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_23*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
