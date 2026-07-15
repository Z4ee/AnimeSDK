#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0F9366B7D3B580;
class Class_1_D17272E82AE804C2_40;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EB813CC1D00A138D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6DE5A0)
#define CLASS_1_EB813CC1D00A138D_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6DDF10)
#define CLASS_1_EB813CC1D00A138D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6DE1C0)
#define CLASS_1_EB813CC1D00A138D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6DDF90)
#define CLASS_1_EB813CC1D00A138D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6DE390)
#define CLASS_1_EB813CC1D00A138D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6DE7A0)
#define CLASS_1_EB813CC1D00A138D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6DE690)
#define CLASS_1_EB813CC1D00A138D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C6DDF60)
#define CLASS_1_EB813CC1D00A138D_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C6DDD20)
#define CLASS_1_EB813CC1D00A138D_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C6DDF80)
#define CLASS_1_EB813CC1D00A138D_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C6DDF70)
#define CLASS_1_EB813CC1D00A138D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C6DDD80)
#define CLASS_1_EB813CC1D00A138D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6DE430)
#define CLASS_1_EB813CC1D00A138D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6DE490)
#define CLASS_1_EB813CC1D00A138D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6DE980)
#define CLASS_1_EB813CC1D00A138D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6DDDE0)
#define CLASS_1_EB813CC1D00A138D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DDD90)

inline static constexpr unsigned int Class_1_EB813CC1D00A138D_TypeDefinitionIndex = 24700;

class Class_1_EB813CC1D00A138D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_TypeDefinitionIndex)->GetStaticField(0x62E90);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_0C0F9366B7D3B580*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_0C0F9366B7D3B580*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_TypeDefinitionIndex)->GetStaticField(0x62E98);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0C0F9366B7D3B580*>* Field_1_5; // 0x18
	::Class_1_D17272E82AE804C2_40* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EB813CC1D00A138D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EB813CC1D00A138D* Clone()
	{
		return ((::Class_1_EB813CC1D00A138D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_40* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_40*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0C0F9366B7D3B580*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0C0F9366B7D3B580*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EB813CC1D00A138D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EB813CC1D00A138D*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EB813CC1D00A138D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
