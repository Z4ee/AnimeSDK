#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_314B32ACA2E06A03;
class Class_1_EA5A5E4D07C4CF2B_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D826182CAF0320DC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9776A0)
#define CLASS_1_D826182CAF0320DC_CLONE_OFFSET UNITYSDK_OFFSET(0x1C840A70)
#define CLASS_1_D826182CAF0320DC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9772C0)
#define CLASS_1_D826182CAF0320DC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C840B90)
#define CLASS_1_D826182CAF0320DC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9774F0)
#define CLASS_1_D826182CAF0320DC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C9778B0)
#define CLASS_1_D826182CAF0320DC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C977730)
#define CLASS_1_D826182CAF0320DC_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C840B70)
#define CLASS_1_D826182CAF0320DC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C840B50)
#define CLASS_1_D826182CAF0320DC_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C840950)
#define CLASS_1_D826182CAF0320DC_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C840B80)
#define CLASS_1_D826182CAF0320DC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C840B60)
#define CLASS_1_D826182CAF0320DC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C840980)
#define CLASS_1_D826182CAF0320DC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C977560)
#define CLASS_1_D826182CAF0320DC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9775C0)
#define CLASS_1_D826182CAF0320DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C977A60)
#define CLASS_1_D826182CAF0320DC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8409A0)
#define CLASS_1_D826182CAF0320DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C840990)

inline static constexpr unsigned int Class_1_D826182CAF0320DC_TypeDefinitionIndex = 29247;

class Class_1_D826182CAF0320DC : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D826182CAF0320DC*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D826182CAF0320DC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D826182CAF0320DC_TypeDefinitionIndex)->GetStaticField(0x252F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Class_1_EA5A5E4D07C4CF2B_1* Field_1_3; // 0x10
	::Class_1_314B32ACA2E06A03* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D826182CAF0320DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D826182CAF0320DC*))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D826182CAF0320DC*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D826182CAF0320DC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D826182CAF0320DC* Clone()
	{
		return ((::Class_1_D826182CAF0320DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_CLONE_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EA5A5E4D07C4CF2B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_1*))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_314B32ACA2E06A03* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_314B32ACA2E06A03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_314B32ACA2E06A03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_314B32ACA2E06A03*))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D826182CAF0320DC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D826182CAF0320DC*))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D826182CAF0320DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D826182CAF0320DC*))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D826182CAF0320DC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
