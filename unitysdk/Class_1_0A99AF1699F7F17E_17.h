#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_584;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A99AF1699F7F17E_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CACFEA0)
#define CLASS_1_0A99AF1699F7F17E_17_CLONE_OFFSET UNITYSDK_OFFSET(0x1CACFA80)
#define CLASS_1_0A99AF1699F7F17E_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CACFC00)
#define CLASS_1_0A99AF1699F7F17E_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CACFAC0)
#define CLASS_1_0A99AF1699F7F17E_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CACFD20)
#define CLASS_1_0A99AF1699F7F17E_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CACFFE0)
#define CLASS_1_0A99AF1699F7F17E_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CACFF40)
#define CLASS_1_0A99AF1699F7F17E_17_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CACF970)
#define CLASS_1_0A99AF1699F7F17E_17_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CACFAB0)
#define CLASS_1_0A99AF1699F7F17E_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CACF9A0)
#define CLASS_1_0A99AF1699F7F17E_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CACFD90)
#define CLASS_1_0A99AF1699F7F17E_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CACFDF0)
#define CLASS_1_0A99AF1699F7F17E_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAD01A0)
#define CLASS_1_0A99AF1699F7F17E_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CACF9F0)
#define CLASS_1_0A99AF1699F7F17E_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1CACF9B0)

inline static constexpr unsigned int Class_1_0A99AF1699F7F17E_17_TypeDefinitionIndex = 28940;

class Class_1_0A99AF1699F7F17E_17 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_17*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_17_TypeDefinitionIndex)->GetStaticField(0x57BA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_584*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_584*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_17_TypeDefinitionIndex)->GetStaticField(0x57BA8);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_584*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A99AF1699F7F17E_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_17*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_17*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_17*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_17* Clone()
	{
		return ((::Class_1_0A99AF1699F7F17E_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_584*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_584*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A99AF1699F7F17E_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_17*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A99AF1699F7F17E_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_17*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
