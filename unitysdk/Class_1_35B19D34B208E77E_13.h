#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_46.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_15.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35B19D34B208E77E_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EAB1E0)
#define CLASS_1_35B19D34B208E77E_13_CLONE_OFFSET UNITYSDK_OFFSET(0x17EAAE80)
#define CLASS_1_35B19D34B208E77E_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EAB010)
#define CLASS_1_35B19D34B208E77E_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EAAF60)
#define CLASS_1_35B19D34B208E77E_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EAB080)
#define CLASS_1_35B19D34B208E77E_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EAB430)
#define CLASS_1_35B19D34B208E77E_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EAB3E0)
#define CLASS_1_35B19D34B208E77E_13_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EAAF00)
#define CLASS_1_35B19D34B208E77E_13_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x17EAAF50)
#define CLASS_1_35B19D34B208E77E_13_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17EAAF30)
#define CLASS_1_35B19D34B208E77E_13_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EAAF10)
#define CLASS_1_35B19D34B208E77E_13_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x17EAAF40)
#define CLASS_1_35B19D34B208E77E_13_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17EAAF20)
#define CLASS_1_35B19D34B208E77E_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EAAE20)
#define CLASS_1_35B19D34B208E77E_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EAB0B0)
#define CLASS_1_35B19D34B208E77E_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EAB110)
#define CLASS_1_35B19D34B208E77E_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EAAE40)
#define CLASS_1_35B19D34B208E77E_13__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAAE30)

inline static constexpr unsigned int Class_1_35B19D34B208E77E_13_TypeDefinitionIndex = 25457;

class Class_1_35B19D34B208E77E_13 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_ED790DAC948A65A9_15 Field_1_6; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::Enum_3_0A3761FE34514D6C_46 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35B19D34B208E77E_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_13*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35B19D34B208E77E_13* Clone()
	{
		return ((::Class_1_35B19D34B208E77E_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_46 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_46 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_46))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_15 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_ED790DAC948A65A9_15(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_ED790DAC948A65A9_15 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_15))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35B19D34B208E77E_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35B19D34B208E77E_13*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35B19D34B208E77E_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_13*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35B19D34B208E77E_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
