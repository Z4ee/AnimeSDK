#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_1058_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E305B90)
#define CLASS_1_D17272E82AE804C2_1058_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3057E0)
#define CLASS_1_D17272E82AE804C2_1058_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E305910)
#define CLASS_1_D17272E82AE804C2_1058_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E305840)
#define CLASS_1_D17272E82AE804C2_1058_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E305A80)
#define CLASS_1_D17272E82AE804C2_1058_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E305C50)
#define CLASS_1_D17272E82AE804C2_1058_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E305C20)
#define CLASS_1_D17272E82AE804C2_1058_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E305820)
#define CLASS_1_D17272E82AE804C2_1058_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E305760)
#define CLASS_1_D17272E82AE804C2_1058_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E305830)
#define CLASS_1_D17272E82AE804C2_1058_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E305790)
#define CLASS_1_D17272E82AE804C2_1058_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E305AB0)
#define CLASS_1_D17272E82AE804C2_1058_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E305B10)
#define CLASS_1_D17272E82AE804C2_1058__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E305DB0)
#define CLASS_1_D17272E82AE804C2_1058__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3057B0)
#define CLASS_1_D17272E82AE804C2_1058__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3057A0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_1058_TypeDefinitionIndex = 33611;

class Class_1_D17272E82AE804C2_1058 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1058*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1058*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_1058_TypeDefinitionIndex)->GetStaticField(0x4E3D0);
	}
	// static const ::System::Int32 FEGJODHHKKJ = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 EHCFPHJABDL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_1058* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1058*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1058*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1058*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_1058* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_1058*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_1058* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_1058*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_1058* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1058*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1058_MERGEFROM_1_OFFSET))(this, a1);
	}
};
