#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_39.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_668FE281FA72D3E8_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5BF000)
#define CLASS_1_668FE281FA72D3E8_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5BECB0)
#define CLASS_1_668FE281FA72D3E8_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5BEE40)
#define CLASS_1_668FE281FA72D3E8_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5BED90)
#define CLASS_1_668FE281FA72D3E8_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5BEEB0)
#define CLASS_1_668FE281FA72D3E8_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5BF220)
#define CLASS_1_668FE281FA72D3E8_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5BF1D0)
#define CLASS_1_668FE281FA72D3E8_11_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A5BED70)
#define CLASS_1_668FE281FA72D3E8_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A5BED50)
#define CLASS_1_668FE281FA72D3E8_11_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A5BEBF0)
#define CLASS_1_668FE281FA72D3E8_11_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A5BED40)
#define CLASS_1_668FE281FA72D3E8_11_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A5BED80)
#define CLASS_1_668FE281FA72D3E8_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A5BED60)
#define CLASS_1_668FE281FA72D3E8_11_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A5BED30)
#define CLASS_1_668FE281FA72D3E8_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5BEC50)
#define CLASS_1_668FE281FA72D3E8_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5BEEE0)
#define CLASS_1_668FE281FA72D3E8_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5BEF40)
#define CLASS_1_668FE281FA72D3E8_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5BF3C0)
#define CLASS_1_668FE281FA72D3E8_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5BEC70)
#define CLASS_1_668FE281FA72D3E8_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5BEC60)

inline static constexpr unsigned int Class_1_668FE281FA72D3E8_11_TypeDefinitionIndex = 28160;

class Class_1_668FE281FA72D3E8_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_11*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668FE281FA72D3E8_11_TypeDefinitionIndex)->GetStaticField(0x17AC0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::Enum_3_DB663931210BBC27_39 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_668FE281FA72D3E8_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_11*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_11* Clone()
	{
		return ((::Class_1_668FE281FA72D3E8_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_39 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_39(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_39 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_39))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_668FE281FA72D3E8_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_668FE281FA72D3E8_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
