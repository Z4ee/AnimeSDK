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

#define CLASS_1_668FE281FA72D3E8_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1999F8D0)
#define CLASS_1_668FE281FA72D3E8_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1999F580)
#define CLASS_1_668FE281FA72D3E8_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1999F710)
#define CLASS_1_668FE281FA72D3E8_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1999F660)
#define CLASS_1_668FE281FA72D3E8_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1999F780)
#define CLASS_1_668FE281FA72D3E8_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1999FAF0)
#define CLASS_1_668FE281FA72D3E8_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1999FAA0)
#define CLASS_1_668FE281FA72D3E8_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1999F640)
#define CLASS_1_668FE281FA72D3E8_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1999F600)
#define CLASS_1_668FE281FA72D3E8_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1999F4C0)
#define CLASS_1_668FE281FA72D3E8_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1999F630)
#define CLASS_1_668FE281FA72D3E8_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1999F650)
#define CLASS_1_668FE281FA72D3E8_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1999F610)
#define CLASS_1_668FE281FA72D3E8_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1999F620)
#define CLASS_1_668FE281FA72D3E8_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1999F520)
#define CLASS_1_668FE281FA72D3E8_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1999F7B0)
#define CLASS_1_668FE281FA72D3E8_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1999F810)
#define CLASS_1_668FE281FA72D3E8_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1999FB80)
#define CLASS_1_668FE281FA72D3E8_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1999F540)
#define CLASS_1_668FE281FA72D3E8_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1999F530)

inline static constexpr unsigned int Class_1_668FE281FA72D3E8_3_TypeDefinitionIndex = 25117;

class Class_1_668FE281FA72D3E8_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668FE281FA72D3E8_3_TypeDefinitionIndex)->GetStaticField(0x64AB0);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_7; // 0x18
	::Enum_3_4608E37A1B3D374A_8 Field_1_5; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_668FE281FA72D3E8_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_3*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_3* Clone()
	{
		return ((::Class_1_668FE281FA72D3E8_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_8))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_668FE281FA72D3E8_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_668FE281FA72D3E8_3*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_668FE281FA72D3E8_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_3*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
