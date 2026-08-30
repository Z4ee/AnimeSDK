#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_510_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DCBBDE0)
#define CLASS_1_D17272E82AE804C2_510_CLONE_OFFSET UNITYSDK_OFFSET(0x1DCBBA30)
#define CLASS_1_D17272E82AE804C2_510_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DCBBB60)
#define CLASS_1_D17272E82AE804C2_510_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DCBBA90)
#define CLASS_1_D17272E82AE804C2_510_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DCBBCD0)
#define CLASS_1_D17272E82AE804C2_510_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DCBBEA0)
#define CLASS_1_D17272E82AE804C2_510_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DCBBE70)
#define CLASS_1_D17272E82AE804C2_510_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DCBBA70)
#define CLASS_1_D17272E82AE804C2_510_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DCBB9B0)
#define CLASS_1_D17272E82AE804C2_510_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DCBBA80)
#define CLASS_1_D17272E82AE804C2_510_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DCBB9E0)
#define CLASS_1_D17272E82AE804C2_510_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DCBBD00)
#define CLASS_1_D17272E82AE804C2_510_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DCBBD60)
#define CLASS_1_D17272E82AE804C2_510__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCBC000)
#define CLASS_1_D17272E82AE804C2_510__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DCBBA00)
#define CLASS_1_D17272E82AE804C2_510__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBB9F0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_510_TypeDefinitionIndex = 29035;

class Class_1_D17272E82AE804C2_510 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_510*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_510*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_510_TypeDefinitionIndex)->GetStaticField(0x5D650);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NAEACGPKNNH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_510* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_510*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_510*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_510*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_510* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_510*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_510* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_510*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_510* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_510*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_510_MERGEFROM_1_OFFSET))(this, a1);
	}
};
