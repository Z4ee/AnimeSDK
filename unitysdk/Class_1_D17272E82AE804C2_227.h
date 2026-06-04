#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_227_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A8AF410)
#define CLASS_1_D17272E82AE804C2_227_CLONE_OFFSET UNITYSDK_OFFSET(0x1A8AF210)
#define CLASS_1_D17272E82AE804C2_227_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A8AF2D0)
#define CLASS_1_D17272E82AE804C2_227_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A8AF270)
#define CLASS_1_D17272E82AE804C2_227_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A8AF320)
#define CLASS_1_D17272E82AE804C2_227_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A8AF4D0)
#define CLASS_1_D17272E82AE804C2_227_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A8AF4A0)
#define CLASS_1_D17272E82AE804C2_227_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A8AF250)
#define CLASS_1_D17272E82AE804C2_227_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A8AF190)
#define CLASS_1_D17272E82AE804C2_227_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A8AF260)
#define CLASS_1_D17272E82AE804C2_227_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A8AF1C0)
#define CLASS_1_D17272E82AE804C2_227_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8AF350)
#define CLASS_1_D17272E82AE804C2_227_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A8AF3B0)
#define CLASS_1_D17272E82AE804C2_227__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8AF630)
#define CLASS_1_D17272E82AE804C2_227__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A8AF1E0)
#define CLASS_1_D17272E82AE804C2_227__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8AF1D0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_227_TypeDefinitionIndex = 25914;

class Class_1_D17272E82AE804C2_227 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_227*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_227*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_227_TypeDefinitionIndex)->GetStaticField(0x58C00);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_227* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_227*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_227*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_227*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_227* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_227*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_227* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_227*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_227* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_227*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_227_MERGEFROM_1_OFFSET))(this, a1);
	}
};
