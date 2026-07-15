#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_27.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_88_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBD3A20)
#define CLASS_1_1CBA230307F9C289_88_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBD35E0)
#define CLASS_1_1CBA230307F9C289_88_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBD3770)
#define CLASS_1_1CBA230307F9C289_88_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBD3690)
#define CLASS_1_1CBA230307F9C289_88_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBD3840)
#define CLASS_1_1CBA230307F9C289_88_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBD3C40)
#define CLASS_1_1CBA230307F9C289_88_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBD3BF0)
#define CLASS_1_1CBA230307F9C289_88_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CBD3670)
#define CLASS_1_1CBA230307F9C289_88_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CBD3650)
#define CLASS_1_1CBA230307F9C289_88_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CBD3640)
#define CLASS_1_1CBA230307F9C289_88_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CBD3550)
#define CLASS_1_1CBA230307F9C289_88_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CBD3680)
#define CLASS_1_1CBA230307F9C289_88_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CBD3660)
#define CLASS_1_1CBA230307F9C289_88_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CBD3630)
#define CLASS_1_1CBA230307F9C289_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBD3580)
#define CLASS_1_1CBA230307F9C289_88_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBD3870)
#define CLASS_1_1CBA230307F9C289_88_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBD38D0)
#define CLASS_1_1CBA230307F9C289_88__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBD3DE0)
#define CLASS_1_1CBA230307F9C289_88__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBD35A0)
#define CLASS_1_1CBA230307F9C289_88__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD3590)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_88_TypeDefinitionIndex = 32191;

class Class_1_1CBA230307F9C289_88 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_88*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_88_TypeDefinitionIndex)->GetStaticField(0x552F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Enum_3_ED790DAC948A65A9_27 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_88*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_88*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_88*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_88* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_CLONE_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_27 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_27(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_27 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_27))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_88* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_88*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_88*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_88_MERGEFROM_1_OFFSET))(this, a1);
	}
};
