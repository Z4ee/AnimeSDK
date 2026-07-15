#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_13.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_68168894A9D2D702_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CFEFA50)
#define CLASS_1_68168894A9D2D702_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFEF430)
#define CLASS_1_68168894A9D2D702_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CFEF6A0)
#define CLASS_1_68168894A9D2D702_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CFEF510)
#define CLASS_1_68168894A9D2D702_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CFEF830)
#define CLASS_1_68168894A9D2D702_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CFEFC80)
#define CLASS_1_68168894A9D2D702_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CFEFBD0)
#define CLASS_1_68168894A9D2D702_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CFEF4D0)
#define CLASS_1_68168894A9D2D702_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CFEF4F0)
#define CLASS_1_68168894A9D2D702_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CFEF4C0)
#define CLASS_1_68168894A9D2D702_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CFEF370)
#define CLASS_1_68168894A9D2D702_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CFEF4E0)
#define CLASS_1_68168894A9D2D702_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CFEF500)
#define CLASS_1_68168894A9D2D702_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CFEF4B0)
#define CLASS_1_68168894A9D2D702_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CFEF3A0)
#define CLASS_1_68168894A9D2D702_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CFEF890)
#define CLASS_1_68168894A9D2D702_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CFEF8F0)
#define CLASS_1_68168894A9D2D702__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFEFEB0)
#define CLASS_1_68168894A9D2D702__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFEF3C0)
#define CLASS_1_68168894A9D2D702__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEF3B0)

inline static constexpr unsigned int Class_1_68168894A9D2D702_TypeDefinitionIndex = 24735;

class Class_1_68168894A9D2D702 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68168894A9D2D702_TypeDefinitionIndex)->GetStaticField(0x37C10);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Class_1_D17272E82AE804C2_9* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::Enum_3_0A3761FE34514D6C_13 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_68168894A9D2D702* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68168894A9D2D702*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_68168894A9D2D702* Clone()
	{
		return ((::Class_1_68168894A9D2D702*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_13 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_13 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_13))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_9*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_68168894A9D2D702* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_68168894A9D2D702*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_68168894A9D2D702* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68168894A9D2D702*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_MERGEFROM_1_OFFSET))(this, a1);
	}
};
