#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32B7518AB42A91DE_1;
class Class_1_EBB10EC01CCC4716_8;
class Class_1_FA4F4A67B1C04320_27;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0CE138302AEB5621_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181023E0)
#define CLASS_1_0CE138302AEB5621_CLONE_OFFSET UNITYSDK_OFFSET(0x18101E10)
#define CLASS_1_0CE138302AEB5621_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18101EF0)
#define CLASS_1_0CE138302AEB5621_EQUALS_OFFSET UNITYSDK_OFFSET(0x18101E90)
#define CLASS_1_0CE138302AEB5621_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18102000)
#define CLASS_1_0CE138302AEB5621_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18102640)
#define CLASS_1_0CE138302AEB5621_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181024F0)
#define CLASS_1_0CE138302AEB5621_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x18101E70)
#define CLASS_1_0CE138302AEB5621_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x18101E80)
#define CLASS_1_0CE138302AEB5621_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18101E60)
#define CLASS_1_0CE138302AEB5621_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18101CA0)
#define CLASS_1_0CE138302AEB5621_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18102260)
#define CLASS_1_0CE138302AEB5621_WRITETO_OFFSET UNITYSDK_OFFSET(0x181022C0)
#define CLASS_1_0CE138302AEB5621__CCTOR_OFFSET UNITYSDK_OFFSET(0x18102870)
#define CLASS_1_0CE138302AEB5621__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18101D50)
#define CLASS_1_0CE138302AEB5621__CTOR_OFFSET UNITYSDK_OFFSET(0x18101CB0)

inline static constexpr unsigned int Class_1_0CE138302AEB5621_TypeDefinitionIndex = 23123;

class Class_1_0CE138302AEB5621 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_8*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_TypeDefinitionIndex)->GetStaticField(0x36F20);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_27*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_27*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_TypeDefinitionIndex)->GetStaticField(0x36F28);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_32B7518AB42A91DE_1*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_32B7518AB42A91DE_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_TypeDefinitionIndex)->GetStaticField(0x36F30);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_27*>* Field_1_3; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>* Field_1_6; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32B7518AB42A91DE_1*>* Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0CE138302AEB5621* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CE138302AEB5621*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0CE138302AEB5621* Clone()
	{
		return ((::Class_1_0CE138302AEB5621*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_27*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_27*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32B7518AB42A91DE_1*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32B7518AB42A91DE_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0CE138302AEB5621* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0CE138302AEB5621*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0CE138302AEB5621* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CE138302AEB5621*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_MERGEFROM_1_OFFSET))(this, a1);
	}
};
