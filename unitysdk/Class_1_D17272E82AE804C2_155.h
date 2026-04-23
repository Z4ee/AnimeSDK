#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_155_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x195DE730)
#define CLASS_1_D17272E82AE804C2_155_CLONE_OFFSET UNITYSDK_OFFSET(0x195DE530)
#define CLASS_1_D17272E82AE804C2_155_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x195DE5F0)
#define CLASS_1_D17272E82AE804C2_155_EQUALS_OFFSET UNITYSDK_OFFSET(0x195DE590)
#define CLASS_1_D17272E82AE804C2_155_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195DE640)
#define CLASS_1_D17272E82AE804C2_155_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x195DE7F0)
#define CLASS_1_D17272E82AE804C2_155_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x195DE7C0)
#define CLASS_1_D17272E82AE804C2_155_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x195DE570)
#define CLASS_1_D17272E82AE804C2_155_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x195DE4B0)
#define CLASS_1_D17272E82AE804C2_155_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x195DE580)
#define CLASS_1_D17272E82AE804C2_155_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x195DE4E0)
#define CLASS_1_D17272E82AE804C2_155_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195DE670)
#define CLASS_1_D17272E82AE804C2_155_WRITETO_OFFSET UNITYSDK_OFFSET(0x195DE6D0)
#define CLASS_1_D17272E82AE804C2_155__CCTOR_OFFSET UNITYSDK_OFFSET(0x195DE860)
#define CLASS_1_D17272E82AE804C2_155__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195DE500)
#define CLASS_1_D17272E82AE804C2_155__CTOR_OFFSET UNITYSDK_OFFSET(0x195DE4F0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_155_TypeDefinitionIndex = 25425;

class Class_1_D17272E82AE804C2_155 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_155*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_155*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_155_TypeDefinitionIndex)->GetStaticField(0x558C0);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_155* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_155*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_155*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_155*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_155* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_155* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_155*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_155* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_155*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_155_MERGEFROM_1_OFFSET))(this, a1);
	}
};
