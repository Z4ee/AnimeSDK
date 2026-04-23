#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_63.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_668FE281FA72D3E8_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x195F4CD0)
#define CLASS_1_668FE281FA72D3E8_27_CLONE_OFFSET UNITYSDK_OFFSET(0x195F49F0)
#define CLASS_1_668FE281FA72D3E8_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x195F4B10)
#define CLASS_1_668FE281FA72D3E8_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x195F4AA0)
#define CLASS_1_668FE281FA72D3E8_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195F4B80)
#define CLASS_1_668FE281FA72D3E8_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x195F4EF0)
#define CLASS_1_668FE281FA72D3E8_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x195F4EA0)
#define CLASS_1_668FE281FA72D3E8_27_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x195F4A80)
#define CLASS_1_668FE281FA72D3E8_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x195F4A40)
#define CLASS_1_668FE281FA72D3E8_27_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x195F4A70)
#define CLASS_1_668FE281FA72D3E8_27_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x195F4960)
#define CLASS_1_668FE281FA72D3E8_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x195F4A90)
#define CLASS_1_668FE281FA72D3E8_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x195F4A50)
#define CLASS_1_668FE281FA72D3E8_27_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x195F4A60)
#define CLASS_1_668FE281FA72D3E8_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x195F4990)
#define CLASS_1_668FE281FA72D3E8_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195F4BB0)
#define CLASS_1_668FE281FA72D3E8_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x195F4C10)
#define CLASS_1_668FE281FA72D3E8_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x195F4F80)
#define CLASS_1_668FE281FA72D3E8_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195F49B0)
#define CLASS_1_668FE281FA72D3E8_27__CTOR_OFFSET UNITYSDK_OFFSET(0x195F49A0)

inline static constexpr unsigned int Class_1_668FE281FA72D3E8_27_TypeDefinitionIndex = 32200;

class Class_1_668FE281FA72D3E8_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_27*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_27*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668FE281FA72D3E8_27_TypeDefinitionIndex)->GetStaticField(0x57720);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_DB663931210BBC27_63 Field_1_5; // 0x18
	::System::UInt32 Field_1_7; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_668FE281FA72D3E8_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_27*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_27*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_27*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_27* Clone()
	{
		return ((::Class_1_668FE281FA72D3E8_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_63 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_63(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_63))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_668FE281FA72D3E8_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_668FE281FA72D3E8_27*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_668FE281FA72D3E8_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_27*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
