#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_20;
class Class_1_D17272E82AE804C2_235;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7F6A638FBAAEC90B_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C650680)
#define CLASS_1_7F6A638FBAAEC90B_7_CLONE_OFFSET UNITYSDK_OFFSET(0x1C650260)
#define CLASS_1_7F6A638FBAAEC90B_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C650300)
#define CLASS_1_7F6A638FBAAEC90B_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6502D0)
#define CLASS_1_7F6A638FBAAEC90B_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C650450)
#define CLASS_1_7F6A638FBAAEC90B_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6508C0)
#define CLASS_1_7F6A638FBAAEC90B_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6507C0)
#define CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C650290)
#define CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C6500E0)
#define CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C6502C0)
#define CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C6502B0)
#define CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C6502A0)
#define CLASS_1_7F6A638FBAAEC90B_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C650110)
#define CLASS_1_7F6A638FBAAEC90B_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6504E0)
#define CLASS_1_7F6A638FBAAEC90B_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C650540)
#define CLASS_1_7F6A638FBAAEC90B_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C650AD0)
#define CLASS_1_7F6A638FBAAEC90B_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C650180)
#define CLASS_1_7F6A638FBAAEC90B_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C650120)

inline static constexpr unsigned int Class_1_7F6A638FBAAEC90B_7_TypeDefinitionIndex = 26291;

class Class_1_7F6A638FBAAEC90B_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_235*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_235*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_7_TypeDefinitionIndex)->GetStaticField(0x5DB90);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_7*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_7_TypeDefinitionIndex)->GetStaticField(0x5DB98);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_20*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_7_TypeDefinitionIndex)->GetStaticField(0x5DBA0);
	}
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_20*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_235*>* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7F6A638FBAAEC90B_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_7*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7F6A638FBAAEC90B_7* Clone()
	{
		return ((::Class_1_7F6A638FBAAEC90B_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_20*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_20*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_235*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_235*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7F6A638FBAAEC90B_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_7*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7F6A638FBAAEC90B_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_7*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
