#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_778_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A31F6F0)
#define CLASS_1_D17272E82AE804C2_778_CLONE_OFFSET UNITYSDK_OFFSET(0x1A31F3C0)
#define CLASS_1_D17272E82AE804C2_778_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A31F510)
#define CLASS_1_D17272E82AE804C2_778_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A31F490)
#define CLASS_1_D17272E82AE804C2_778_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A31F580)
#define CLASS_1_D17272E82AE804C2_778_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A31F950)
#define CLASS_1_D17272E82AE804C2_778_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A31F900)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A31F430)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A31F450)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A31F470)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A31F410)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A31F340)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A31F440)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A31F460)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A31F480)
#define CLASS_1_D17272E82AE804C2_778_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A31F420)
#define CLASS_1_D17272E82AE804C2_778_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A31F370)
#define CLASS_1_D17272E82AE804C2_778_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A31F5C0)
#define CLASS_1_D17272E82AE804C2_778_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A31F620)
#define CLASS_1_D17272E82AE804C2_778__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A31F9F0)
#define CLASS_1_D17272E82AE804C2_778__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A31F390)
#define CLASS_1_D17272E82AE804C2_778__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31F380)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_778_TypeDefinitionIndex = 30583;

class Class_1_D17272E82AE804C2_778 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_778*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_778*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_778_TypeDefinitionIndex)->GetStaticField(0x545A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x1C
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_778* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_778*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_778*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_778*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_778* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_778*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_778* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_778*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_778* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_778*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_778_MERGEFROM_1_OFFSET))(this, a1);
	}
};
