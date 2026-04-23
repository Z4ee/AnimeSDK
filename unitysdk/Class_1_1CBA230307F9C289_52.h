#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_70.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_52_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193BE510)
#define CLASS_1_1CBA230307F9C289_52_CLONE_OFFSET UNITYSDK_OFFSET(0x193BE290)
#define CLASS_1_1CBA230307F9C289_52_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193BE390)
#define CLASS_1_1CBA230307F9C289_52_EQUALS_OFFSET UNITYSDK_OFFSET(0x193BE320)
#define CLASS_1_1CBA230307F9C289_52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193BE3F0)
#define CLASS_1_1CBA230307F9C289_52_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193BE6A0)
#define CLASS_1_1CBA230307F9C289_52_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193BE660)
#define CLASS_1_1CBA230307F9C289_52_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x193BE300)
#define CLASS_1_1CBA230307F9C289_52_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x193BE2F0)
#define CLASS_1_1CBA230307F9C289_52_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193BE210)
#define CLASS_1_1CBA230307F9C289_52_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x193BE310)
#define CLASS_1_1CBA230307F9C289_52_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x193BE2E0)
#define CLASS_1_1CBA230307F9C289_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193BE240)
#define CLASS_1_1CBA230307F9C289_52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193BE420)
#define CLASS_1_1CBA230307F9C289_52_WRITETO_OFFSET UNITYSDK_OFFSET(0x193BE480)
#define CLASS_1_1CBA230307F9C289_52__CCTOR_OFFSET UNITYSDK_OFFSET(0x193BE720)
#define CLASS_1_1CBA230307F9C289_52__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193BE260)
#define CLASS_1_1CBA230307F9C289_52__CTOR_OFFSET UNITYSDK_OFFSET(0x193BE250)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_52_TypeDefinitionIndex = 31497;

class Class_1_1CBA230307F9C289_52 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_52*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_52_TypeDefinitionIndex)->GetStaticField(0x7B00);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_0A3761FE34514D6C_70 Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_52*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_52*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_52*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_52* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_52*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_70 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_70(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_70 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_70))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_52* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_52*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_52*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_52_MERGEFROM_1_OFFSET))(this, a1);
	}
};
