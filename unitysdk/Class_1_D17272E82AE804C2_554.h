#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_554_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED94970)
#define CLASS_1_D17272E82AE804C2_554_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED945C0)
#define CLASS_1_D17272E82AE804C2_554_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED946F0)
#define CLASS_1_D17272E82AE804C2_554_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED94620)
#define CLASS_1_D17272E82AE804C2_554_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED94860)
#define CLASS_1_D17272E82AE804C2_554_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED94A30)
#define CLASS_1_D17272E82AE804C2_554_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED94A00)
#define CLASS_1_D17272E82AE804C2_554_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ED94600)
#define CLASS_1_D17272E82AE804C2_554_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ED94540)
#define CLASS_1_D17272E82AE804C2_554_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ED94610)
#define CLASS_1_D17272E82AE804C2_554_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED94570)
#define CLASS_1_D17272E82AE804C2_554_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED94890)
#define CLASS_1_D17272E82AE804C2_554_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED948F0)
#define CLASS_1_D17272E82AE804C2_554__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED94B90)
#define CLASS_1_D17272E82AE804C2_554__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED94590)
#define CLASS_1_D17272E82AE804C2_554__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED94580)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_554_TypeDefinitionIndex = 29284;

class Class_1_D17272E82AE804C2_554 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_554*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_554*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_554_TypeDefinitionIndex)->GetStaticField(0x62100);
	}
	// static const ::System::Int32 HACFLGOPALO = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 DBDCJHECJOO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_554* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_554*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_554*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_554*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_554* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_554*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_554* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_554*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_554* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_554*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_554_MERGEFROM_1_OFFSET))(this, a1);
	}
};
