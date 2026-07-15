#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_8.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_16_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C991700)
#define CLASS_1_1CBA230307F9C289_16_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9912E0)
#define CLASS_1_1CBA230307F9C289_16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C991440)
#define CLASS_1_1CBA230307F9C289_16_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9913C0)
#define CLASS_1_1CBA230307F9C289_16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C991510)
#define CLASS_1_1CBA230307F9C289_16_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C991920)
#define CLASS_1_1CBA230307F9C289_16_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C9918D0)
#define CLASS_1_1CBA230307F9C289_16_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C991380)
#define CLASS_1_1CBA230307F9C289_16_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C991360)
#define CLASS_1_1CBA230307F9C289_16_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C991220)
#define CLASS_1_1CBA230307F9C289_16_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C9913B0)
#define CLASS_1_1CBA230307F9C289_16_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C991390)
#define CLASS_1_1CBA230307F9C289_16_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C991370)
#define CLASS_1_1CBA230307F9C289_16_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C9913A0)
#define CLASS_1_1CBA230307F9C289_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C991280)
#define CLASS_1_1CBA230307F9C289_16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C991540)
#define CLASS_1_1CBA230307F9C289_16_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9915A0)
#define CLASS_1_1CBA230307F9C289_16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C991AC0)
#define CLASS_1_1CBA230307F9C289_16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9912A0)
#define CLASS_1_1CBA230307F9C289_16__CTOR_OFFSET UNITYSDK_OFFSET(0x1C991290)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_16_TypeDefinitionIndex = 25464;

class Class_1_1CBA230307F9C289_16 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_16*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_16_TypeDefinitionIndex)->GetStaticField(0x26AB0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::Enum_3_4608E37A1B3D374A_8 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_16*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_16*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_16*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_16* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_8))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_16* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_16*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_16*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_16_MERGEFROM_1_OFFSET))(this, a1);
	}
};
