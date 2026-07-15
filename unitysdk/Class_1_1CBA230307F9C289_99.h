#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_38.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_99_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C55D3D0)
#define CLASS_1_1CBA230307F9C289_99_CLONE_OFFSET UNITYSDK_OFFSET(0x1C55CFC0)
#define CLASS_1_1CBA230307F9C289_99_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C55D120)
#define CLASS_1_1CBA230307F9C289_99_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C55D0A0)
#define CLASS_1_1CBA230307F9C289_99_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C55D1F0)
#define CLASS_1_1CBA230307F9C289_99_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C55D5F0)
#define CLASS_1_1CBA230307F9C289_99_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C55D5A0)
#define CLASS_1_1CBA230307F9C289_99_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C55D080)
#define CLASS_1_1CBA230307F9C289_99_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C55D040)
#define CLASS_1_1CBA230307F9C289_99_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C55CF00)
#define CLASS_1_1CBA230307F9C289_99_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C55D070)
#define CLASS_1_1CBA230307F9C289_99_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C55D090)
#define CLASS_1_1CBA230307F9C289_99_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C55D050)
#define CLASS_1_1CBA230307F9C289_99_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C55D060)
#define CLASS_1_1CBA230307F9C289_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C55CF60)
#define CLASS_1_1CBA230307F9C289_99_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C55D220)
#define CLASS_1_1CBA230307F9C289_99_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C55D280)
#define CLASS_1_1CBA230307F9C289_99__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C55D790)
#define CLASS_1_1CBA230307F9C289_99__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C55CF80)
#define CLASS_1_1CBA230307F9C289_99__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55CF70)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_99_TypeDefinitionIndex = 33151;

class Class_1_1CBA230307F9C289_99 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_99*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_99*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_99_TypeDefinitionIndex)->GetStaticField(0x3E390);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::Enum_3_4608E37A1B3D374A_38 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_99*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_99*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_99*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_99* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_38 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_38(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_38 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_38))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_99*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_99*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_99_MERGEFROM_1_OFFSET))(this, a1);
	}
};
