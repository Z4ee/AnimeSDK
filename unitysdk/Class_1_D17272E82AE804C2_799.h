#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_799_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BBA560)
#define CLASS_1_D17272E82AE804C2_799_CLONE_OFFSET UNITYSDK_OFFSET(0x19BBA360)
#define CLASS_1_D17272E82AE804C2_799_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BBA420)
#define CLASS_1_D17272E82AE804C2_799_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BBA3C0)
#define CLASS_1_D17272E82AE804C2_799_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BBA470)
#define CLASS_1_D17272E82AE804C2_799_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BBA620)
#define CLASS_1_D17272E82AE804C2_799_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BBA5F0)
#define CLASS_1_D17272E82AE804C2_799_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19BBA3A0)
#define CLASS_1_D17272E82AE804C2_799_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19BBA2E0)
#define CLASS_1_D17272E82AE804C2_799_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19BBA3B0)
#define CLASS_1_D17272E82AE804C2_799_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BBA310)
#define CLASS_1_D17272E82AE804C2_799_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BBA4A0)
#define CLASS_1_D17272E82AE804C2_799_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BBA500)
#define CLASS_1_D17272E82AE804C2_799__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BBA690)
#define CLASS_1_D17272E82AE804C2_799__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BBA330)
#define CLASS_1_D17272E82AE804C2_799__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBA320)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_799_TypeDefinitionIndex = 31222;

class Class_1_D17272E82AE804C2_799 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_799*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_799*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_799_TypeDefinitionIndex)->GetStaticField(0x4F420);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_799* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_799*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_799*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_799*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_799* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_799*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_799* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_799*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_799* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_799*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_799_MERGEFROM_1_OFFSET))(this, a1);
	}
};
