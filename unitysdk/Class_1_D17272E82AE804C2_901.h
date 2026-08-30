#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_901_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EC361E0)
#define CLASS_1_D17272E82AE804C2_901_CLONE_OFFSET UNITYSDK_OFFSET(0x1EC35E30)
#define CLASS_1_D17272E82AE804C2_901_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EC35F60)
#define CLASS_1_D17272E82AE804C2_901_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC35E90)
#define CLASS_1_D17272E82AE804C2_901_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC360D0)
#define CLASS_1_D17272E82AE804C2_901_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EC362A0)
#define CLASS_1_D17272E82AE804C2_901_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EC36270)
#define CLASS_1_D17272E82AE804C2_901_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EC35E70)
#define CLASS_1_D17272E82AE804C2_901_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EC35DB0)
#define CLASS_1_D17272E82AE804C2_901_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EC35E80)
#define CLASS_1_D17272E82AE804C2_901_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EC35DE0)
#define CLASS_1_D17272E82AE804C2_901_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC36100)
#define CLASS_1_D17272E82AE804C2_901_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EC36160)
#define CLASS_1_D17272E82AE804C2_901__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC36400)
#define CLASS_1_D17272E82AE804C2_901__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC35E00)
#define CLASS_1_D17272E82AE804C2_901__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC35DF0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_901_TypeDefinitionIndex = 31802;

class Class_1_D17272E82AE804C2_901 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_901*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_901*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_901_TypeDefinitionIndex)->GetStaticField(0x1EF20);
	}
	// static const ::System::Int32 AKFFJEHMCCB = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 GEMFJILOPLL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_901* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_901*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_901*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_901*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_901* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_901*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_901* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_901*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_901* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_901*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_901_MERGEFROM_1_OFFSET))(this, a1);
	}
};
