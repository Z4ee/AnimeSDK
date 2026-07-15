#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_48.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_66C20D6C355B068E_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C63DC60)
#define CLASS_1_66C20D6C355B068E_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1C63D7C0)
#define CLASS_1_66C20D6C355B068E_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C63D960)
#define CLASS_1_66C20D6C355B068E_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C63D870)
#define CLASS_1_66C20D6C355B068E_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C63DA40)
#define CLASS_1_66C20D6C355B068E_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C63DE10)
#define CLASS_1_66C20D6C355B068E_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C63DDC0)
#define CLASS_1_66C20D6C355B068E_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C63D830)
#define CLASS_1_66C20D6C355B068E_4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C63D860)
#define CLASS_1_66C20D6C355B068E_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C63D730)
#define CLASS_1_66C20D6C355B068E_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C63D840)
#define CLASS_1_66C20D6C355B068E_4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C63D850)
#define CLASS_1_66C20D6C355B068E_4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C63D820)
#define CLASS_1_66C20D6C355B068E_4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C63D810)
#define CLASS_1_66C20D6C355B068E_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C63D760)
#define CLASS_1_66C20D6C355B068E_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C63DA70)
#define CLASS_1_66C20D6C355B068E_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C63DAD0)
#define CLASS_1_66C20D6C355B068E_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C63DFB0)
#define CLASS_1_66C20D6C355B068E_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C63D780)
#define CLASS_1_66C20D6C355B068E_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63D770)

inline static constexpr unsigned int Class_1_66C20D6C355B068E_4_TypeDefinitionIndex = 28962;

class Class_1_66C20D6C355B068E_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_66C20D6C355B068E_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_66C20D6C355B068E_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66C20D6C355B068E_4_TypeDefinitionIndex)->GetStaticField(0x5A4E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Enum_3_0A3761FE34514D6C_48 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_66C20D6C355B068E_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_66C20D6C355B068E_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_66C20D6C355B068E_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_66C20D6C355B068E_4* Clone()
	{
		return ((::Class_1_66C20D6C355B068E_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_48 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_48(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_48 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_48))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_66C20D6C355B068E_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_66C20D6C355B068E_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66C20D6C355B068E_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
