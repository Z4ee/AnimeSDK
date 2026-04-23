#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60477073911AC4F6_1;
class Class_1_D17272E82AE804C2_29;
class Class_1_EBB10EC01CCC4716_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F9EFCB63E481ADB7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194623D0)
#define CLASS_1_F9EFCB63E481ADB7_CLONE_OFFSET UNITYSDK_OFFSET(0x19461E00)
#define CLASS_1_F9EFCB63E481ADB7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19461EE0)
#define CLASS_1_F9EFCB63E481ADB7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19461E80)
#define CLASS_1_F9EFCB63E481ADB7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19461FF0)
#define CLASS_1_F9EFCB63E481ADB7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19462630)
#define CLASS_1_F9EFCB63E481ADB7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x194624E0)
#define CLASS_1_F9EFCB63E481ADB7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19461C30)
#define CLASS_1_F9EFCB63E481ADB7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19461E60)
#define CLASS_1_F9EFCB63E481ADB7_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x19461E70)
#define CLASS_1_F9EFCB63E481ADB7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19461E50)
#define CLASS_1_F9EFCB63E481ADB7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19461C90)
#define CLASS_1_F9EFCB63E481ADB7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19462250)
#define CLASS_1_F9EFCB63E481ADB7_WRITETO_OFFSET UNITYSDK_OFFSET(0x194622B0)
#define CLASS_1_F9EFCB63E481ADB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19462860)
#define CLASS_1_F9EFCB63E481ADB7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19461D40)
#define CLASS_1_F9EFCB63E481ADB7__CTOR_OFFSET UNITYSDK_OFFSET(0x19461CA0)

inline static constexpr unsigned int Class_1_F9EFCB63E481ADB7_TypeDefinitionIndex = 24326;

class Class_1_F9EFCB63E481ADB7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_60477073911AC4F6_1*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_60477073911AC4F6_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9EFCB63E481ADB7_TypeDefinitionIndex)->GetStaticField(0x178B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_11*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9EFCB63E481ADB7_TypeDefinitionIndex)->GetStaticField(0x178B8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_F9EFCB63E481ADB7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F9EFCB63E481ADB7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9EFCB63E481ADB7_TypeDefinitionIndex)->GetStaticField(0x178C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_29*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9EFCB63E481ADB7_TypeDefinitionIndex)->GetStaticField(0x178C8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_60477073911AC4F6_1*>* Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F9EFCB63E481ADB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7*))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F9EFCB63E481ADB7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F9EFCB63E481ADB7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F9EFCB63E481ADB7* Clone()
	{
		return ((::Class_1_F9EFCB63E481ADB7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_60477073911AC4F6_1*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_60477073911AC4F6_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F9EFCB63E481ADB7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7*))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F9EFCB63E481ADB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7*))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F9EFCB63E481ADB7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
