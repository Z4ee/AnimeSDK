#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_438_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC1200)
#define CLASS_1_D17272E82AE804C2_438_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC0DF0)
#define CLASS_1_D17272E82AE804C2_438_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC0F80)
#define CLASS_1_D17272E82AE804C2_438_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC0E80)
#define CLASS_1_D17272E82AE804C2_438_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC10F0)
#define CLASS_1_D17272E82AE804C2_438_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC12C0)
#define CLASS_1_D17272E82AE804C2_438_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC1290)
#define CLASS_1_D17272E82AE804C2_438_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DDC0E60)
#define CLASS_1_D17272E82AE804C2_438_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DDC0D40)
#define CLASS_1_D17272E82AE804C2_438_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DDC0E70)
#define CLASS_1_D17272E82AE804C2_438_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0DA0)
#define CLASS_1_D17272E82AE804C2_438_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC1120)
#define CLASS_1_D17272E82AE804C2_438_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC1180)
#define CLASS_1_D17272E82AE804C2_438__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC1420)
#define CLASS_1_D17272E82AE804C2_438__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC0DC0)
#define CLASS_1_D17272E82AE804C2_438__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0DB0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_438_TypeDefinitionIndex = 28680;

class Class_1_D17272E82AE804C2_438 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_438*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_438*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_438_TypeDefinitionIndex)->GetStaticField(0x1DBB0);
	}
	// static const ::System::Int32 OAAJLFDLHMP = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 GFKCJLGPJIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_438* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_438*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_438*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_438*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_438* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_438*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_438* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_438*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_438* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_438*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_438_MERGEFROM_1_OFFSET))(this, a1);
	}
};
