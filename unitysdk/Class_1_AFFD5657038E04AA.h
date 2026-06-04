#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_31;
class Class_1_D17272E82AE804C2_1016;
class Class_1_D1E0AD3915BCCF29_132;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AFFD5657038E04AA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A28EF10)
#define CLASS_1_AFFD5657038E04AA_CLONE_OFFSET UNITYSDK_OFFSET(0x1A28E910)
#define CLASS_1_AFFD5657038E04AA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A28EA10)
#define CLASS_1_AFFD5657038E04AA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A28E9B0)
#define CLASS_1_AFFD5657038E04AA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A28EB30)
#define CLASS_1_AFFD5657038E04AA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A28F1E0)
#define CLASS_1_AFFD5657038E04AA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A28F080)
#define CLASS_1_AFFD5657038E04AA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A28E960)
#define CLASS_1_AFFD5657038E04AA_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A28E730)
#define CLASS_1_AFFD5657038E04AA_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A28E990)
#define CLASS_1_AFFD5657038E04AA_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1A28E9A0)
#define CLASS_1_AFFD5657038E04AA_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A28E980)
#define CLASS_1_AFFD5657038E04AA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A28E970)
#define CLASS_1_AFFD5657038E04AA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A28E790)
#define CLASS_1_AFFD5657038E04AA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A28ED70)
#define CLASS_1_AFFD5657038E04AA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A28EDD0)
#define CLASS_1_AFFD5657038E04AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A28F360)
#define CLASS_1_AFFD5657038E04AA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A28E840)
#define CLASS_1_AFFD5657038E04AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A28E7A0)

inline static constexpr unsigned int Class_1_AFFD5657038E04AA_TypeDefinitionIndex = 33017;

class Class_1_AFFD5657038E04AA : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_AFFD5657038E04AA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_AFFD5657038E04AA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFFD5657038E04AA_TypeDefinitionIndex)->GetStaticField(0x487C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_668FE281FA72D3E8_31*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_668FE281FA72D3E8_31*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFFD5657038E04AA_TypeDefinitionIndex)->GetStaticField(0x487C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1016*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1016*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFFD5657038E04AA_TypeDefinitionIndex)->GetStaticField(0x487D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_132*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_132*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFFD5657038E04AA_TypeDefinitionIndex)->GetStaticField(0x487D8);
	}
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_31*>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1016*>* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_132*>* Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AFFD5657038E04AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AFFD5657038E04AA*))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_AFFD5657038E04AA*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_AFFD5657038E04AA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AFFD5657038E04AA* Clone()
	{
		return ((::Class_1_AFFD5657038E04AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_132*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_132*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_31*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_31*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1016*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1016*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AFFD5657038E04AA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AFFD5657038E04AA*))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AFFD5657038E04AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AFFD5657038E04AA*))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AFFD5657038E04AA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
