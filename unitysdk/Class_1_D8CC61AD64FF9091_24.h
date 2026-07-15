#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23A051AE95CBE8C4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D8CC61AD64FF9091_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD32D90)
#define CLASS_1_D8CC61AD64FF9091_24_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD32840)
#define CLASS_1_D8CC61AD64FF9091_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD32A80)
#define CLASS_1_D8CC61AD64FF9091_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD32900)
#define CLASS_1_D8CC61AD64FF9091_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD32C00)
#define CLASS_1_D8CC61AD64FF9091_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD32F70)
#define CLASS_1_D8CC61AD64FF9091_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD32E60)
#define CLASS_1_D8CC61AD64FF9091_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD328E0)
#define CLASS_1_D8CC61AD64FF9091_24_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CD328C0)
#define CLASS_1_D8CC61AD64FF9091_24_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD32780)
#define CLASS_1_D8CC61AD64FF9091_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD328F0)
#define CLASS_1_D8CC61AD64FF9091_24_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CD328D0)
#define CLASS_1_D8CC61AD64FF9091_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD327B0)
#define CLASS_1_D8CC61AD64FF9091_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD32C50)
#define CLASS_1_D8CC61AD64FF9091_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD32CB0)
#define CLASS_1_D8CC61AD64FF9091_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD33140)
#define CLASS_1_D8CC61AD64FF9091_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD327D0)
#define CLASS_1_D8CC61AD64FF9091_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD327C0)

inline static constexpr unsigned int Class_1_D8CC61AD64FF9091_24_TypeDefinitionIndex = 29584;

class Class_1_D8CC61AD64FF9091_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_24*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8CC61AD64FF9091_24_TypeDefinitionIndex)->GetStaticField(0x24EA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Class_1_23A051AE95CBE8C4* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8CC61AD64FF9091_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_24*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_24*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_24*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8CC61AD64FF9091_24* Clone()
	{
		return ((::Class_1_D8CC61AD64FF9091_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_CLONE_OFFSET))(this);
	}

	::Class_1_23A051AE95CBE8C4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_23A051AE95CBE8C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_23A051AE95CBE8C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23A051AE95CBE8C4*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8CC61AD64FF9091_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_24*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8CC61AD64FF9091_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_24*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
