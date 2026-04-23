#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D811CE24096BDBCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196A4A90)
#define CLASS_1_D811CE24096BDBCA_CLONE_OFFSET UNITYSDK_OFFSET(0x196A4480)
#define CLASS_1_D811CE24096BDBCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196A46D0)
#define CLASS_1_D811CE24096BDBCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x196A45F0)
#define CLASS_1_D811CE24096BDBCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196A4780)
#define CLASS_1_D811CE24096BDBCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196A4D80)
#define CLASS_1_D811CE24096BDBCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196A4B60)
#define CLASS_1_D811CE24096BDBCA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x196A45D0)
#define CLASS_1_D811CE24096BDBCA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x196A45B0)
#define CLASS_1_D811CE24096BDBCA_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196A42E0)
#define CLASS_1_D811CE24096BDBCA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x196A45E0)
#define CLASS_1_D811CE24096BDBCA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x196A45C0)
#define CLASS_1_D811CE24096BDBCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196A4340)
#define CLASS_1_D811CE24096BDBCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196A49B0)
#define CLASS_1_D811CE24096BDBCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x196A4A10)
#define CLASS_1_D811CE24096BDBCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x196A4E40)
#define CLASS_1_D811CE24096BDBCA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196A4360)
#define CLASS_1_D811CE24096BDBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x196A4350)

inline static constexpr unsigned int Class_1_D811CE24096BDBCA_TypeDefinitionIndex = 24976;

class Class_1_D811CE24096BDBCA : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D811CE24096BDBCA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D811CE24096BDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D811CE24096BDBCA_TypeDefinitionIndex)->GetStaticField(0x46070);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_C74059A83466814F* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D811CE24096BDBCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D811CE24096BDBCA*))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D811CE24096BDBCA*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D811CE24096BDBCA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D811CE24096BDBCA* Clone()
	{
		return ((::Class_1_D811CE24096BDBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_CLONE_OFFSET))(this);
	}

	::Class_1_C74059A83466814F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D811CE24096BDBCA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D811CE24096BDBCA*))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D811CE24096BDBCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D811CE24096BDBCA*))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
