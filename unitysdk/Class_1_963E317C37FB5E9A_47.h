#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4E17DBE66E488E00;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_963E317C37FB5E9A_47_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C5AB3D0)
#define CLASS_1_963E317C37FB5E9A_47_CLONE_OFFSET UNITYSDK_OFFSET(0x1C5AADE0)
#define CLASS_1_963E317C37FB5E9A_47_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C5AB060)
#define CLASS_1_963E317C37FB5E9A_47_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C5AAED0)
#define CLASS_1_963E317C37FB5E9A_47_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C5AB1F0)
#define CLASS_1_963E317C37FB5E9A_47_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C5AB5B0)
#define CLASS_1_963E317C37FB5E9A_47_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C5AB510)
#define CLASS_1_963E317C37FB5E9A_47_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C5AAE90)
#define CLASS_1_963E317C37FB5E9A_47_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C5AAE70)
#define CLASS_1_963E317C37FB5E9A_47_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C5AAEB0)
#define CLASS_1_963E317C37FB5E9A_47_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C5AAD10)
#define CLASS_1_963E317C37FB5E9A_47_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C5AAEA0)
#define CLASS_1_963E317C37FB5E9A_47_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C5AAE80)
#define CLASS_1_963E317C37FB5E9A_47_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C5AAEC0)
#define CLASS_1_963E317C37FB5E9A_47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C5AAD40)
#define CLASS_1_963E317C37FB5E9A_47_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C5AB230)
#define CLASS_1_963E317C37FB5E9A_47_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C5AB290)
#define CLASS_1_963E317C37FB5E9A_47__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5AB780)
#define CLASS_1_963E317C37FB5E9A_47__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5AAD60)
#define CLASS_1_963E317C37FB5E9A_47__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AAD50)

inline static constexpr unsigned int Class_1_963E317C37FB5E9A_47_TypeDefinitionIndex = 29754;

class Class_1_963E317C37FB5E9A_47 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_963E317C37FB5E9A_47*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_963E317C37FB5E9A_47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_963E317C37FB5E9A_47_TypeDefinitionIndex)->GetStaticField(0x46AC0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Class_1_4E17DBE66E488E00* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_963E317C37FB5E9A_47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_47*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_963E317C37FB5E9A_47*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_963E317C37FB5E9A_47*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_963E317C37FB5E9A_47* Clone()
	{
		return ((::Class_1_963E317C37FB5E9A_47*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_4E17DBE66E488E00* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4E17DBE66E488E00*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4E17DBE66E488E00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4E17DBE66E488E00*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_963E317C37FB5E9A_47* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_963E317C37FB5E9A_47*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_963E317C37FB5E9A_47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_47*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_47_MERGEFROM_1_OFFSET))(this, a1);
	}
};
