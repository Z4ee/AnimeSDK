#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49F04DC1BC0F5D98_4;
class Class_1_D17272E82AE804C2_327;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1992A2D0)
#define CLASS_1_752A428518BC8100_2_CLONE_OFFSET UNITYSDK_OFFSET(0x19929D40)
#define CLASS_1_752A428518BC8100_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19929F10)
#define CLASS_1_752A428518BC8100_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19929DC0)
#define CLASS_1_752A428518BC8100_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1992A000)
#define CLASS_1_752A428518BC8100_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1992A520)
#define CLASS_1_752A428518BC8100_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1992A3C0)
#define CLASS_1_752A428518BC8100_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19929D90)
#define CLASS_1_752A428518BC8100_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19929B40)
#define CLASS_1_752A428518BC8100_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19929DB0)
#define CLASS_1_752A428518BC8100_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19929DA0)
#define CLASS_1_752A428518BC8100_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19929BA0)
#define CLASS_1_752A428518BC8100_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1992A1A0)
#define CLASS_1_752A428518BC8100_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1992A200)
#define CLASS_1_752A428518BC8100_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1992A610)
#define CLASS_1_752A428518BC8100_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19929C00)
#define CLASS_1_752A428518BC8100_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19929BB0)

inline static constexpr unsigned int Class_1_752A428518BC8100_2_TypeDefinitionIndex = 27180;

class Class_1_752A428518BC8100_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_327*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_327*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_2_TypeDefinitionIndex)->GetStaticField(0x5BF90);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_2_TypeDefinitionIndex)->GetStaticField(0x5BF98);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_327*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_49F04DC1BC0F5D98_4* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_752A428518BC8100_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_2*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_752A428518BC8100_2* Clone()
	{
		return ((::Class_1_752A428518BC8100_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_CLONE_OFFSET))(this);
	}

	::Class_1_49F04DC1BC0F5D98_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_49F04DC1BC0F5D98_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_49F04DC1BC0F5D98_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98_4*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_327*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_327*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_752A428518BC8100_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_752A428518BC8100_2*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_752A428518BC8100_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_2*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
