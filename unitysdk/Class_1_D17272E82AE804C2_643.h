#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_643_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A70D6B0)
#define CLASS_1_D17272E82AE804C2_643_CLONE_OFFSET UNITYSDK_OFFSET(0x1A70D4B0)
#define CLASS_1_D17272E82AE804C2_643_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A70D570)
#define CLASS_1_D17272E82AE804C2_643_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A70D510)
#define CLASS_1_D17272E82AE804C2_643_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A70D5C0)
#define CLASS_1_D17272E82AE804C2_643_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A70D770)
#define CLASS_1_D17272E82AE804C2_643_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A70D740)
#define CLASS_1_D17272E82AE804C2_643_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A70D4F0)
#define CLASS_1_D17272E82AE804C2_643_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A70D430)
#define CLASS_1_D17272E82AE804C2_643_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A70D500)
#define CLASS_1_D17272E82AE804C2_643_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A70D460)
#define CLASS_1_D17272E82AE804C2_643_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A70D5F0)
#define CLASS_1_D17272E82AE804C2_643_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A70D650)
#define CLASS_1_D17272E82AE804C2_643__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A70D8D0)
#define CLASS_1_D17272E82AE804C2_643__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A70D480)
#define CLASS_1_D17272E82AE804C2_643__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70D470)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_643_TypeDefinitionIndex = 29437;

class Class_1_D17272E82AE804C2_643 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_643*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_643*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_643_TypeDefinitionIndex)->GetStaticField(0x374E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_643* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_643*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_643*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_643*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_643* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_643*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_643* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_643*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_643* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_643*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_643_MERGEFROM_1_OFFSET))(this, a1);
	}
};
