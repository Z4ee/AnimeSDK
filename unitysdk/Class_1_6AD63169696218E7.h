#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_805;
class Class_1_D17272E82AE804C2_806;
class Class_1_D1E0AD3915BCCF29_105;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6AD63169696218E7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19511430)
#define CLASS_1_6AD63169696218E7_CLONE_OFFSET UNITYSDK_OFFSET(0x19510EA0)
#define CLASS_1_6AD63169696218E7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19510F50)
#define CLASS_1_6AD63169696218E7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19510F20)
#define CLASS_1_6AD63169696218E7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195110A0)
#define CLASS_1_6AD63169696218E7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x195116F0)
#define CLASS_1_6AD63169696218E7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19511570)
#define CLASS_1_6AD63169696218E7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19510F00)
#define CLASS_1_6AD63169696218E7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19510C90)
#define CLASS_1_6AD63169696218E7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19510EF0)
#define CLASS_1_6AD63169696218E7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19510ED0)
#define CLASS_1_6AD63169696218E7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19510F10)
#define CLASS_1_6AD63169696218E7_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x19510EE0)
#define CLASS_1_6AD63169696218E7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19510CC0)
#define CLASS_1_6AD63169696218E7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19511290)
#define CLASS_1_6AD63169696218E7_WRITETO_OFFSET UNITYSDK_OFFSET(0x195112F0)
#define CLASS_1_6AD63169696218E7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19511880)
#define CLASS_1_6AD63169696218E7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19510D50)
#define CLASS_1_6AD63169696218E7__CTOR_OFFSET UNITYSDK_OFFSET(0x19510CD0)

inline static constexpr unsigned int Class_1_6AD63169696218E7_TypeDefinitionIndex = 31125;

class Class_1_6AD63169696218E7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_105*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_105*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AD63169696218E7_TypeDefinitionIndex)->GetStaticField(0x44710);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AD63169696218E7_TypeDefinitionIndex)->GetStaticField(0x44718);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_806*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_806*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AD63169696218E7_TypeDefinitionIndex)->GetStaticField(0x44720);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6AD63169696218E7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6AD63169696218E7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AD63169696218E7_TypeDefinitionIndex)->GetStaticField(0x44728);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x2; // 0x0
	::Class_1_D17272E82AE804C2_805* Field_1_12; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_806*>* Field_1_10; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_105*>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6AD63169696218E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AD63169696218E7*))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6AD63169696218E7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6AD63169696218E7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6AD63169696218E7* Clone()
	{
		return ((::Class_1_6AD63169696218E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_105*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_105*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_806*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_806*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_805* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_805*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_805* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_805*))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6AD63169696218E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6AD63169696218E7*))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6AD63169696218E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AD63169696218E7*))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6AD63169696218E7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
