#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C0C70BD5DA12B9CF;
class Class_1_D17272E82AE804C2_34;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_101A64CBB11918DF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD0EAA0)
#define CLASS_1_101A64CBB11918DF_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD0E470)
#define CLASS_1_101A64CBB11918DF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD0E6C0)
#define CLASS_1_101A64CBB11918DF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD0E4D0)
#define CLASS_1_101A64CBB11918DF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD0E890)
#define CLASS_1_101A64CBB11918DF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD0ECA0)
#define CLASS_1_101A64CBB11918DF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD0EB90)
#define CLASS_1_101A64CBB11918DF_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CD0E4A0)
#define CLASS_1_101A64CBB11918DF_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD0E2B0)
#define CLASS_1_101A64CBB11918DF_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CD0E4C0)
#define CLASS_1_101A64CBB11918DF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CD0E4B0)
#define CLASS_1_101A64CBB11918DF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD0E2E0)
#define CLASS_1_101A64CBB11918DF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD0E930)
#define CLASS_1_101A64CBB11918DF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD0E990)
#define CLASS_1_101A64CBB11918DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD0EE80)
#define CLASS_1_101A64CBB11918DF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD0E340)
#define CLASS_1_101A64CBB11918DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0E2F0)

inline static constexpr unsigned int Class_1_101A64CBB11918DF_TypeDefinitionIndex = 24641;

class Class_1_101A64CBB11918DF : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_101A64CBB11918DF*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_101A64CBB11918DF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_101A64CBB11918DF_TypeDefinitionIndex)->GetStaticField(0x3D220);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C0C70BD5DA12B9CF*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C0C70BD5DA12B9CF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_101A64CBB11918DF_TypeDefinitionIndex)->GetStaticField(0x3D228);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Class_1_D17272E82AE804C2_34* Field_1_5; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C0C70BD5DA12B9CF*>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_101A64CBB11918DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_101A64CBB11918DF*))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_101A64CBB11918DF*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_101A64CBB11918DF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_101A64CBB11918DF* Clone()
	{
		return ((::Class_1_101A64CBB11918DF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_34* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_34*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_34*))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C0C70BD5DA12B9CF*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C0C70BD5DA12B9CF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_101A64CBB11918DF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_101A64CBB11918DF*))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_101A64CBB11918DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_101A64CBB11918DF*))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_101A64CBB11918DF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
