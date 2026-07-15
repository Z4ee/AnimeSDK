#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_774_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF6BE20)
#define CLASS_1_D17272E82AE804C2_774_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF6BA00)
#define CLASS_1_D17272E82AE804C2_774_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF6BB90)
#define CLASS_1_D17272E82AE804C2_774_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF6BAB0)
#define CLASS_1_D17272E82AE804C2_774_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF6BC60)
#define CLASS_1_D17272E82AE804C2_774_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF6C000)
#define CLASS_1_D17272E82AE804C2_774_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF6BFB0)
#define CLASS_1_D17272E82AE804C2_774_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CF6BA70)
#define CLASS_1_D17272E82AE804C2_774_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CF6BA90)
#define CLASS_1_D17272E82AE804C2_774_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CF6BA50)
#define CLASS_1_D17272E82AE804C2_774_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CF6B970)
#define CLASS_1_D17272E82AE804C2_774_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CF6BA80)
#define CLASS_1_D17272E82AE804C2_774_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CF6BAA0)
#define CLASS_1_D17272E82AE804C2_774_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CF6BA60)
#define CLASS_1_D17272E82AE804C2_774_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF6B9A0)
#define CLASS_1_D17272E82AE804C2_774_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF6BC90)
#define CLASS_1_D17272E82AE804C2_774_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF6BCF0)
#define CLASS_1_D17272E82AE804C2_774__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF6C1A0)
#define CLASS_1_D17272E82AE804C2_774__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF6B9C0)
#define CLASS_1_D17272E82AE804C2_774__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6B9B0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_774_TypeDefinitionIndex = 30213;

class Class_1_D17272E82AE804C2_774 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_774*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_774*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_774_TypeDefinitionIndex)->GetStaticField(0x32C30);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_774* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_774*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_774*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_774*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_774* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_774*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_774* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_774*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_774* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_774*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_774_MERGEFROM_1_OFFSET))(this, a1);
	}
};
