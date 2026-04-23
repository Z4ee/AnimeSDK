#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_282;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_B61BB9D9369F1252_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x199870C0)
#define CLASS_1_B61BB9D9369F1252_CLONE_OFFSET UNITYSDK_OFFSET(0x19986BC0)
#define CLASS_1_B61BB9D9369F1252_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19986C80)
#define CLASS_1_B61BB9D9369F1252_EQUALS_OFFSET UNITYSDK_OFFSET(0x19986C50)
#define CLASS_1_B61BB9D9369F1252_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19986D80)
#define CLASS_1_B61BB9D9369F1252_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x199873F0)
#define CLASS_1_B61BB9D9369F1252_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x199872E0)
#define CLASS_1_B61BB9D9369F1252_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19986C30)
#define CLASS_1_B61BB9D9369F1252_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x19986C00)
#define CLASS_1_B61BB9D9369F1252_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19986A40)
#define CLASS_1_B61BB9D9369F1252_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19986C20)
#define CLASS_1_B61BB9D9369F1252_METHOD_1_6E8EADC4D1FD06E5_OFFSET UNITYSDK_OFFSET(0x19986C10)
#define CLASS_1_B61BB9D9369F1252_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19986C40)
#define CLASS_1_B61BB9D9369F1252_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x19986BF0)
#define CLASS_1_B61BB9D9369F1252_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19986A70)
#define CLASS_1_B61BB9D9369F1252_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19986F30)
#define CLASS_1_B61BB9D9369F1252_WRITETO_OFFSET UNITYSDK_OFFSET(0x19986F90)
#define CLASS_1_B61BB9D9369F1252__CCTOR_OFFSET UNITYSDK_OFFSET(0x19987510)
#define CLASS_1_B61BB9D9369F1252__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19986AE0)
#define CLASS_1_B61BB9D9369F1252__CTOR_OFFSET UNITYSDK_OFFSET(0x19986A80)

inline static constexpr unsigned int Class_1_B61BB9D9369F1252_TypeDefinitionIndex = 26585;

class Class_1_B61BB9D9369F1252 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_282*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_282*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B61BB9D9369F1252_TypeDefinitionIndex)->GetStaticField(0x638E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_B61BB9D9369F1252*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B61BB9D9369F1252*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B61BB9D9369F1252_TypeDefinitionIndex)->GetStaticField(0x638E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B61BB9D9369F1252_TypeDefinitionIndex)->GetStaticField(0x638F0);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_282*>* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::Int64 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B61BB9D9369F1252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B61BB9D9369F1252*))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B61BB9D9369F1252*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B61BB9D9369F1252*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B61BB9D9369F1252* Clone()
	{
		return ((::Class_1_B61BB9D9369F1252*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Method_1_6E8EADC4D1FD06E5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_METHOD_1_6E8EADC4D1FD06E5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_282*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_282*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B61BB9D9369F1252* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B61BB9D9369F1252*))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B61BB9D9369F1252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B61BB9D9369F1252*))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B61BB9D9369F1252_MERGEFROM_1_OFFSET))(this, a1);
	}
};
