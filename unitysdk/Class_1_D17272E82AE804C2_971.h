#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_971_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192E5870)
#define CLASS_1_D17272E82AE804C2_971_CLONE_OFFSET UNITYSDK_OFFSET(0x192E5600)
#define CLASS_1_D17272E82AE804C2_971_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192E5700)
#define CLASS_1_D17272E82AE804C2_971_EQUALS_OFFSET UNITYSDK_OFFSET(0x192E5690)
#define CLASS_1_D17272E82AE804C2_971_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192E5760)
#define CLASS_1_D17272E82AE804C2_971_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192E59C0)
#define CLASS_1_D17272E82AE804C2_971_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192E5980)
#define CLASS_1_D17272E82AE804C2_971_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x192E5670)
#define CLASS_1_D17272E82AE804C2_971_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x192E5650)
#define CLASS_1_D17272E82AE804C2_971_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x192E5580)
#define CLASS_1_D17272E82AE804C2_971_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x192E5680)
#define CLASS_1_D17272E82AE804C2_971_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x192E5660)
#define CLASS_1_D17272E82AE804C2_971_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192E55B0)
#define CLASS_1_D17272E82AE804C2_971_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192E5790)
#define CLASS_1_D17272E82AE804C2_971_WRITETO_OFFSET UNITYSDK_OFFSET(0x192E57F0)
#define CLASS_1_D17272E82AE804C2_971__CCTOR_OFFSET UNITYSDK_OFFSET(0x192E5A40)
#define CLASS_1_D17272E82AE804C2_971__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192E55D0)
#define CLASS_1_D17272E82AE804C2_971__CTOR_OFFSET UNITYSDK_OFFSET(0x192E55C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_971_TypeDefinitionIndex = 32730;

class Class_1_D17272E82AE804C2_971 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_971*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_971*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_971_TypeDefinitionIndex)->GetStaticField(0x47F40);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_971* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_971*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_971*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_971*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_971* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_971*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_971* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_971*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_971* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_971*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_971_MERGEFROM_1_OFFSET))(this, a1);
	}
};
