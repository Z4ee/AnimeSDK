#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_355_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDBD170)
#define CLASS_1_D17272E82AE804C2_355_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBCDC0)
#define CLASS_1_D17272E82AE804C2_355_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBCEF0)
#define CLASS_1_D17272E82AE804C2_355_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBCE20)
#define CLASS_1_D17272E82AE804C2_355_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBD060)
#define CLASS_1_D17272E82AE804C2_355_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDBD230)
#define CLASS_1_D17272E82AE804C2_355_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDBD200)
#define CLASS_1_D17272E82AE804C2_355_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DDBCE00)
#define CLASS_1_D17272E82AE804C2_355_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DDBCD40)
#define CLASS_1_D17272E82AE804C2_355_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DDBCE10)
#define CLASS_1_D17272E82AE804C2_355_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBCD70)
#define CLASS_1_D17272E82AE804C2_355_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBD090)
#define CLASS_1_D17272E82AE804C2_355_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBD0F0)
#define CLASS_1_D17272E82AE804C2_355__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBD390)
#define CLASS_1_D17272E82AE804C2_355__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBCD90)
#define CLASS_1_D17272E82AE804C2_355__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBCD80)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_355_TypeDefinitionIndex = 28227;

class Class_1_D17272E82AE804C2_355 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_355*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_355*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_355_TypeDefinitionIndex)->GetStaticField(0x37150);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NAEACGPKNNH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_355* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_355*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_355*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_355*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_355* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_355*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_355* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_355*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_355* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_355*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_355_MERGEFROM_1_OFFSET))(this, a1);
	}
};
