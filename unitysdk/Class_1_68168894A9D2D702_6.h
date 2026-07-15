#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_25.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_890;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_68168894A9D2D702_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C725FF0)
#define CLASS_1_68168894A9D2D702_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1C7259E0)
#define CLASS_1_68168894A9D2D702_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C725C50)
#define CLASS_1_68168894A9D2D702_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C725B20)
#define CLASS_1_68168894A9D2D702_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C725DE0)
#define CLASS_1_68168894A9D2D702_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C726250)
#define CLASS_1_68168894A9D2D702_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C726180)
#define CLASS_1_68168894A9D2D702_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C725B00)
#define CLASS_1_68168894A9D2D702_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C725AE0)
#define CLASS_1_68168894A9D2D702_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C7258D0)
#define CLASS_1_68168894A9D2D702_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C725AD0)
#define CLASS_1_68168894A9D2D702_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C725B10)
#define CLASS_1_68168894A9D2D702_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C725AF0)
#define CLASS_1_68168894A9D2D702_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C725AC0)
#define CLASS_1_68168894A9D2D702_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C725930)
#define CLASS_1_68168894A9D2D702_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C725E40)
#define CLASS_1_68168894A9D2D702_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C725EA0)
#define CLASS_1_68168894A9D2D702_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C726410)
#define CLASS_1_68168894A9D2D702_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C725950)
#define CLASS_1_68168894A9D2D702_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C725940)

inline static constexpr unsigned int Class_1_68168894A9D2D702_6_TypeDefinitionIndex = 31122;

class Class_1_68168894A9D2D702_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68168894A9D2D702_6_TypeDefinitionIndex)->GetStaticField(0x22F70);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Class_1_D17272E82AE804C2_890* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::Enum_3_ED790DAC948A65A9_25 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_68168894A9D2D702_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68168894A9D2D702_6*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_68168894A9D2D702_6* Clone()
	{
		return ((::Class_1_68168894A9D2D702_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_CLONE_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_25 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_25 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_25))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_890* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_890*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_890* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_890*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_68168894A9D2D702_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_68168894A9D2D702_6*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_68168894A9D2D702_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68168894A9D2D702_6*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
