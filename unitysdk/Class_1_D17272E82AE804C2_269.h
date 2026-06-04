#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_269_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A732A30)
#define CLASS_1_D17272E82AE804C2_269_CLONE_OFFSET UNITYSDK_OFFSET(0x1A732830)
#define CLASS_1_D17272E82AE804C2_269_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7328F0)
#define CLASS_1_D17272E82AE804C2_269_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A732890)
#define CLASS_1_D17272E82AE804C2_269_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A732940)
#define CLASS_1_D17272E82AE804C2_269_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A732AF0)
#define CLASS_1_D17272E82AE804C2_269_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A732AC0)
#define CLASS_1_D17272E82AE804C2_269_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A732870)
#define CLASS_1_D17272E82AE804C2_269_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7327B0)
#define CLASS_1_D17272E82AE804C2_269_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A732880)
#define CLASS_1_D17272E82AE804C2_269_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7327E0)
#define CLASS_1_D17272E82AE804C2_269_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A732970)
#define CLASS_1_D17272E82AE804C2_269_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7329D0)
#define CLASS_1_D17272E82AE804C2_269__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A732C50)
#define CLASS_1_D17272E82AE804C2_269__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A732800)
#define CLASS_1_D17272E82AE804C2_269__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7327F0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_269_TypeDefinitionIndex = 26381;

class Class_1_D17272E82AE804C2_269 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_269*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_269*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_269_TypeDefinitionIndex)->GetStaticField(0x3E3A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_269* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_269*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_269*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_269*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_269* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_269*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_269* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_269*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_269* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_269*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_269_MERGEFROM_1_OFFSET))(this, a1);
	}
};
