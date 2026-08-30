#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_24F009C622EAE626_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9F3B70)
#define CLASS_1_24F009C622EAE626_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9F36C0)
#define CLASS_1_24F009C622EAE626_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D9F3870)
#define CLASS_1_24F009C622EAE626_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9F3720)
#define CLASS_1_24F009C622EAE626_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9F39A0)
#define CLASS_1_24F009C622EAE626_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9F3D20)
#define CLASS_1_24F009C622EAE626_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D9F3C80)
#define CLASS_1_24F009C622EAE626_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D9F36F0)
#define CLASS_1_24F009C622EAE626_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1D9F3710)
#define CLASS_1_24F009C622EAE626_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D9F35B0)
#define CLASS_1_24F009C622EAE626_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D9F3700)
#define CLASS_1_24F009C622EAE626_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D9F35E0)
#define CLASS_1_24F009C622EAE626_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9F3A10)
#define CLASS_1_24F009C622EAE626_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D9F3A70)
#define CLASS_1_24F009C622EAE626__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9F3EE0)
#define CLASS_1_24F009C622EAE626__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9F3630)
#define CLASS_1_24F009C622EAE626__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F35F0)

inline static constexpr unsigned int Class_1_24F009C622EAE626_TypeDefinitionIndex = 25976;

class Class_1_24F009C622EAE626 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_ED790DAC948A65A9_9>** StaticGet_LBDBGMJICNM()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_ED790DAC948A65A9_9>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24F009C622EAE626_TypeDefinitionIndex)->GetStaticField(0x163B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24F009C622EAE626_TypeDefinitionIndex)->GetStaticField(0x163B8);
	}
	// static const ::System::Int32 FNJENALBBMG = 0x4; // 0x0
	// static const ::System::Int32 AECCGOBPHGM = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_ED790DAC948A65A9_9>* GHOPIJOMOLL; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 AIICGDFLHJB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_24F009C622EAE626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_24F009C622EAE626*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_24F009C622EAE626* Clone()
	{
		return ((::Class_1_24F009C622EAE626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_ED790DAC948A65A9_9>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_ED790DAC948A65A9_9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_24F009C622EAE626* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_24F009C622EAE626*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_24F009C622EAE626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626_MERGEFROM_1_OFFSET))(this, a1);
	}
};
