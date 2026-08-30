#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_775_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32B1C0)
#define CLASS_1_D17272E82AE804C2_775_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32AE10)
#define CLASS_1_D17272E82AE804C2_775_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32AF40)
#define CLASS_1_D17272E82AE804C2_775_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32AE70)
#define CLASS_1_D17272E82AE804C2_775_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32B0B0)
#define CLASS_1_D17272E82AE804C2_775_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32B280)
#define CLASS_1_D17272E82AE804C2_775_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32B250)
#define CLASS_1_D17272E82AE804C2_775_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E32AE50)
#define CLASS_1_D17272E82AE804C2_775_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E32AD90)
#define CLASS_1_D17272E82AE804C2_775_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E32AE60)
#define CLASS_1_D17272E82AE804C2_775_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32ADC0)
#define CLASS_1_D17272E82AE804C2_775_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32B0E0)
#define CLASS_1_D17272E82AE804C2_775_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32B140)
#define CLASS_1_D17272E82AE804C2_775__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32B3E0)
#define CLASS_1_D17272E82AE804C2_775__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32ADE0)
#define CLASS_1_D17272E82AE804C2_775__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32ADD0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_775_TypeDefinitionIndex = 30886;

class Class_1_D17272E82AE804C2_775 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_775*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_775*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_775_TypeDefinitionIndex)->GetStaticField(0x49140);
	}
	// static const ::System::Int32 JAHHDKAPBOD = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 LDPCPFBPKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_775* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_775*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_775*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_775*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_775* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_775*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_775* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_775*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_775* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_775*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_775_MERGEFROM_1_OFFSET))(this, a1);
	}
};
