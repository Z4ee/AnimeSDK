#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_8;
class Class_1_D17272E82AE804C2_185;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_69A5DDEA5F31A2DF_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B94020)
#define CLASS_1_69A5DDEA5F31A2DF_1_CLONE_OFFSET UNITYSDK_OFFSET(0x19B93B20)
#define CLASS_1_69A5DDEA5F31A2DF_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B93CA0)
#define CLASS_1_69A5DDEA5F31A2DF_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B93B80)
#define CLASS_1_69A5DDEA5F31A2DF_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B93D90)
#define CLASS_1_69A5DDEA5F31A2DF_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B94260)
#define CLASS_1_69A5DDEA5F31A2DF_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B94110)
#define CLASS_1_69A5DDEA5F31A2DF_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19B93B50)
#define CLASS_1_69A5DDEA5F31A2DF_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19B93910)
#define CLASS_1_69A5DDEA5F31A2DF_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19B93B70)
#define CLASS_1_69A5DDEA5F31A2DF_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19B93B60)
#define CLASS_1_69A5DDEA5F31A2DF_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B93940)
#define CLASS_1_69A5DDEA5F31A2DF_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B93EF0)
#define CLASS_1_69A5DDEA5F31A2DF_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B93F50)
#define CLASS_1_69A5DDEA5F31A2DF_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B94340)
#define CLASS_1_69A5DDEA5F31A2DF_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B93990)
#define CLASS_1_69A5DDEA5F31A2DF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19B93950)

inline static constexpr unsigned int Class_1_69A5DDEA5F31A2DF_1_TypeDefinitionIndex = 25702;

class Class_1_69A5DDEA5F31A2DF_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_185*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_185*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_69A5DDEA5F31A2DF_1_TypeDefinitionIndex)->GetStaticField(0x4B500);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_69A5DDEA5F31A2DF_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_69A5DDEA5F31A2DF_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_69A5DDEA5F31A2DF_1_TypeDefinitionIndex)->GetStaticField(0x4B508);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Class_1_355A2207C3B7A99D_8* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_185*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_69A5DDEA5F31A2DF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_1*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_69A5DDEA5F31A2DF_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_69A5DDEA5F31A2DF_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_69A5DDEA5F31A2DF_1* Clone()
	{
		return ((::Class_1_69A5DDEA5F31A2DF_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_CLONE_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_355A2207C3B7A99D_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_355A2207C3B7A99D_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_8*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_185*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_185*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_69A5DDEA5F31A2DF_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_1*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_69A5DDEA5F31A2DF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_1*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_69A5DDEA5F31A2DF_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
