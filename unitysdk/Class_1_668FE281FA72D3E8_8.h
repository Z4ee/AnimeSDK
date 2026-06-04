#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_668FE281FA72D3E8_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A887610)
#define CLASS_1_668FE281FA72D3E8_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1A8872C0)
#define CLASS_1_668FE281FA72D3E8_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A887450)
#define CLASS_1_668FE281FA72D3E8_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A8873A0)
#define CLASS_1_668FE281FA72D3E8_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A8874C0)
#define CLASS_1_668FE281FA72D3E8_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A887830)
#define CLASS_1_668FE281FA72D3E8_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A8877E0)
#define CLASS_1_668FE281FA72D3E8_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A887380)
#define CLASS_1_668FE281FA72D3E8_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A887360)
#define CLASS_1_668FE281FA72D3E8_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A887200)
#define CLASS_1_668FE281FA72D3E8_8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A887350)
#define CLASS_1_668FE281FA72D3E8_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A887390)
#define CLASS_1_668FE281FA72D3E8_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A887370)
#define CLASS_1_668FE281FA72D3E8_8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A887340)
#define CLASS_1_668FE281FA72D3E8_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A887260)
#define CLASS_1_668FE281FA72D3E8_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8874F0)
#define CLASS_1_668FE281FA72D3E8_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A887550)
#define CLASS_1_668FE281FA72D3E8_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8879E0)
#define CLASS_1_668FE281FA72D3E8_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A887280)
#define CLASS_1_668FE281FA72D3E8_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A887270)

inline static constexpr unsigned int Class_1_668FE281FA72D3E8_8_TypeDefinitionIndex = 27641;

class Class_1_668FE281FA72D3E8_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668FE281FA72D3E8_8_TypeDefinitionIndex)->GetStaticField(0x56490);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::Enum_3_0A3761FE34514D6C_37 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_668FE281FA72D3E8_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_8*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_8* Clone()
	{
		return ((::Class_1_668FE281FA72D3E8_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_37 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_37(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_668FE281FA72D3E8_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_668FE281FA72D3E8_8*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_668FE281FA72D3E8_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_8*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
