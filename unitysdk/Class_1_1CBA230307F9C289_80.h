#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_73.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_80_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6F14C0)
#define CLASS_1_1CBA230307F9C289_80_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6F1100)
#define CLASS_1_1CBA230307F9C289_80_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6F1270)
#define CLASS_1_1CBA230307F9C289_80_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6F1190)
#define CLASS_1_1CBA230307F9C289_80_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6F1340)
#define CLASS_1_1CBA230307F9C289_80_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6F1650)
#define CLASS_1_1CBA230307F9C289_80_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6F1610)
#define CLASS_1_1CBA230307F9C289_80_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C6F1170)
#define CLASS_1_1CBA230307F9C289_80_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C6F1160)
#define CLASS_1_1CBA230307F9C289_80_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C6F1080)
#define CLASS_1_1CBA230307F9C289_80_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C6F1180)
#define CLASS_1_1CBA230307F9C289_80_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C6F1150)
#define CLASS_1_1CBA230307F9C289_80_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C6F10B0)
#define CLASS_1_1CBA230307F9C289_80_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6F1370)
#define CLASS_1_1CBA230307F9C289_80_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6F13D0)
#define CLASS_1_1CBA230307F9C289_80__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F17D0)
#define CLASS_1_1CBA230307F9C289_80__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6F10D0)
#define CLASS_1_1CBA230307F9C289_80__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F10C0)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_80_TypeDefinitionIndex = 32018;

class Class_1_1CBA230307F9C289_80 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_80*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_80_TypeDefinitionIndex)->GetStaticField(0x3E1B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::Enum_3_0A3761FE34514D6C_73 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_80*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_80*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_80*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_80* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_73 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_73(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_73 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_73))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_80* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_80*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_80*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_80_MERGEFROM_1_OFFSET))(this, a1);
	}
};
