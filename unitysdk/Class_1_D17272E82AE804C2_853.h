#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_853_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A900300)
#define CLASS_1_D17272E82AE804C2_853_CLONE_OFFSET UNITYSDK_OFFSET(0x1A900090)
#define CLASS_1_D17272E82AE804C2_853_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A900190)
#define CLASS_1_D17272E82AE804C2_853_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A900120)
#define CLASS_1_D17272E82AE804C2_853_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9001F0)
#define CLASS_1_D17272E82AE804C2_853_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A900450)
#define CLASS_1_D17272E82AE804C2_853_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A900410)
#define CLASS_1_D17272E82AE804C2_853_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A900100)
#define CLASS_1_D17272E82AE804C2_853_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A9000E0)
#define CLASS_1_D17272E82AE804C2_853_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A900010)
#define CLASS_1_D17272E82AE804C2_853_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A900110)
#define CLASS_1_D17272E82AE804C2_853_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A9000F0)
#define CLASS_1_D17272E82AE804C2_853_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A900040)
#define CLASS_1_D17272E82AE804C2_853_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A900220)
#define CLASS_1_D17272E82AE804C2_853_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A900280)
#define CLASS_1_D17272E82AE804C2_853__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9005D0)
#define CLASS_1_D17272E82AE804C2_853__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A900060)
#define CLASS_1_D17272E82AE804C2_853__CTOR_OFFSET UNITYSDK_OFFSET(0x1A900050)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_853_TypeDefinitionIndex = 31386;

class Class_1_D17272E82AE804C2_853 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_853*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_853*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_853_TypeDefinitionIndex)->GetStaticField(0x365B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_853* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_853*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_853*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_853*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_853* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_853*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_853* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_853*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_853* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_853*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_853_MERGEFROM_1_OFFSET))(this, a1);
	}
};
