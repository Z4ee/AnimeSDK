#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70D5AA87C5BBA20B_2;
class Class_1_D17272E82AE804C2_269;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_F183586D14368231_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9E8950)
#define CLASS_1_F183586D14368231_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9E8380)
#define CLASS_1_F183586D14368231_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9E8460)
#define CLASS_1_F183586D14368231_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9E8430)
#define CLASS_1_F183586D14368231_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9E85E0)
#define CLASS_1_F183586D14368231_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C9E8D00)
#define CLASS_1_F183586D14368231_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C9E8B70)
#define CLASS_1_F183586D14368231_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C9E8400)
#define CLASS_1_F183586D14368231_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C9E83D0)
#define CLASS_1_F183586D14368231_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C9E83B0)
#define CLASS_1_F183586D14368231_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C9E81B0)
#define CLASS_1_F183586D14368231_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C9E83F0)
#define CLASS_1_F183586D14368231_METHOD_1_6E8EADC4D1FD06E5_OFFSET UNITYSDK_OFFSET(0x1C9E8420)
#define CLASS_1_F183586D14368231_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C9E8410)
#define CLASS_1_F183586D14368231_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C9E83E0)
#define CLASS_1_F183586D14368231_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C9E83C0)
#define CLASS_1_F183586D14368231_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C9E81E0)
#define CLASS_1_F183586D14368231_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9E86D0)
#define CLASS_1_F183586D14368231_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9E8730)
#define CLASS_1_F183586D14368231__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9E8E50)
#define CLASS_1_F183586D14368231__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9E8250)
#define CLASS_1_F183586D14368231__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E81F0)

inline static constexpr unsigned int Class_1_F183586D14368231_TypeDefinitionIndex = 26640;

class Class_1_F183586D14368231 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F183586D14368231*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F183586D14368231*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F183586D14368231_TypeDefinitionIndex)->GetStaticField(0x1B400);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_70D5AA87C5BBA20B_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_70D5AA87C5BBA20B_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F183586D14368231_TypeDefinitionIndex)->GetStaticField(0x1B408);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F183586D14368231_TypeDefinitionIndex)->GetStaticField(0x1B410);
	}
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_2*>* Field_1_10; // 0x20
	::Class_1_D17272E82AE804C2_269* Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30
	::System::UInt32 Field_1_13; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F183586D14368231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F183586D14368231*))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F183586D14368231*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F183586D14368231*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F183586D14368231* Clone()
	{
		return ((::Class_1_F183586D14368231*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_269* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_269*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_269* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_269*))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Method_1_6E8EADC4D1FD06E5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_METHOD_1_6E8EADC4D1FD06E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F183586D14368231* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F183586D14368231*))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F183586D14368231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F183586D14368231*))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F183586D14368231_MERGEFROM_1_OFFSET))(this, a1);
	}
};
