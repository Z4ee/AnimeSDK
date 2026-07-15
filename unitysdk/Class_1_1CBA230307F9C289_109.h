#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_84.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_109_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD59D10)
#define CLASS_1_1CBA230307F9C289_109_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD59900)
#define CLASS_1_1CBA230307F9C289_109_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD59AC0)
#define CLASS_1_1CBA230307F9C289_109_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD599B0)
#define CLASS_1_1CBA230307F9C289_109_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD59B90)
#define CLASS_1_1CBA230307F9C289_109_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD59EA0)
#define CLASS_1_1CBA230307F9C289_109_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD59E60)
#define CLASS_1_1CBA230307F9C289_109_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD59990)
#define CLASS_1_1CBA230307F9C289_109_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CD59850)
#define CLASS_1_1CBA230307F9C289_109_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CD59980)
#define CLASS_1_1CBA230307F9C289_109_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD599A0)
#define CLASS_1_1CBA230307F9C289_109_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CD59970)
#define CLASS_1_1CBA230307F9C289_109_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD598B0)
#define CLASS_1_1CBA230307F9C289_109_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD59BC0)
#define CLASS_1_1CBA230307F9C289_109_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD59C20)
#define CLASS_1_1CBA230307F9C289_109__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5A020)
#define CLASS_1_1CBA230307F9C289_109__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD598D0)
#define CLASS_1_1CBA230307F9C289_109__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD598C0)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_109_TypeDefinitionIndex = 33639;

class Class_1_1CBA230307F9C289_109 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_109*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_109*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_109_TypeDefinitionIndex)->GetStaticField(0x35B00);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::Enum_3_0A3761FE34514D6C_84 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_109* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_109*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_109*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_109*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_109* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_109*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_84 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_84(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_84 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_84))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_109* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_109*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_109* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_109*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_109_MERGEFROM_1_OFFSET))(this, a1);
	}
};
