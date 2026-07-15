#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_4.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_51_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CE46810)
#define CLASS_1_1CBA230307F9C289_51_CLONE_OFFSET UNITYSDK_OFFSET(0x1CE46400)
#define CLASS_1_1CBA230307F9C289_51_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CE465C0)
#define CLASS_1_1CBA230307F9C289_51_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE464B0)
#define CLASS_1_1CBA230307F9C289_51_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE46690)
#define CLASS_1_1CBA230307F9C289_51_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CE469A0)
#define CLASS_1_1CBA230307F9C289_51_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CE46960)
#define CLASS_1_1CBA230307F9C289_51_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CE46490)
#define CLASS_1_1CBA230307F9C289_51_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CE46350)
#define CLASS_1_1CBA230307F9C289_51_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CE46480)
#define CLASS_1_1CBA230307F9C289_51_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CE464A0)
#define CLASS_1_1CBA230307F9C289_51_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CE46470)
#define CLASS_1_1CBA230307F9C289_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CE463B0)
#define CLASS_1_1CBA230307F9C289_51_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CE466C0)
#define CLASS_1_1CBA230307F9C289_51_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CE46720)
#define CLASS_1_1CBA230307F9C289_51__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE46B20)
#define CLASS_1_1CBA230307F9C289_51__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE463D0)
#define CLASS_1_1CBA230307F9C289_51__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE463C0)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_51_TypeDefinitionIndex = 29193;

class Class_1_1CBA230307F9C289_51 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_51*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_51*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_51_TypeDefinitionIndex)->GetStaticField(0x2E810);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::Enum_3_ED790DAC948A65A9_4 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_51*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_51*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_51*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_51* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_51*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_CLONE_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_4))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_51* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_51*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_51*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_51_MERGEFROM_1_OFFSET))(this, a1);
	}
};
