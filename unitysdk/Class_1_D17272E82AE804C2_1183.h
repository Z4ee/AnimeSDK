#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_1183_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E14DA80)
#define CLASS_1_D17272E82AE804C2_1183_CLONE_OFFSET UNITYSDK_OFFSET(0x1E14D6D0)
#define CLASS_1_D17272E82AE804C2_1183_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E14D800)
#define CLASS_1_D17272E82AE804C2_1183_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E14D730)
#define CLASS_1_D17272E82AE804C2_1183_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E14D970)
#define CLASS_1_D17272E82AE804C2_1183_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E14DB40)
#define CLASS_1_D17272E82AE804C2_1183_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E14DB10)
#define CLASS_1_D17272E82AE804C2_1183_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E14D710)
#define CLASS_1_D17272E82AE804C2_1183_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E14D650)
#define CLASS_1_D17272E82AE804C2_1183_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E14D720)
#define CLASS_1_D17272E82AE804C2_1183_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E14D680)
#define CLASS_1_D17272E82AE804C2_1183_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E14D9A0)
#define CLASS_1_D17272E82AE804C2_1183_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E14DA00)
#define CLASS_1_D17272E82AE804C2_1183__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14DCA0)
#define CLASS_1_D17272E82AE804C2_1183__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E14D6A0)
#define CLASS_1_D17272E82AE804C2_1183__CTOR_OFFSET UNITYSDK_OFFSET(0x1E14D690)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_1183_TypeDefinitionIndex = 34241;

class Class_1_D17272E82AE804C2_1183 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1183*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1183*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_1183_TypeDefinitionIndex)->GetStaticField(0x1C3E0);
	}
	// static const ::System::Int32 CNLGPDPICBH = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 DLAENJMCANJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_1183* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1183*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1183*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1183*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_1183* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_1183*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_1183* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_1183*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_1183* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1183*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1183_MERGEFROM_1_OFFSET))(this, a1);
	}
};
