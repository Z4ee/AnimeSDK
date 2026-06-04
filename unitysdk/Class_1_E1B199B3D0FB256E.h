#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7;
class Class_1_C9DFE5EE7107C629;
class Class_1_FA7309D4ABD4A8AB_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E1B199B3D0FB256E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB96250)
#define CLASS_1_E1B199B3D0FB256E_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB95D00)
#define CLASS_1_E1B199B3D0FB256E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB95D90)
#define CLASS_1_E1B199B3D0FB256E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB95D60)
#define CLASS_1_E1B199B3D0FB256E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB95EA0)
#define CLASS_1_E1B199B3D0FB256E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB964B0)
#define CLASS_1_E1B199B3D0FB256E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB96360)
#define CLASS_1_E1B199B3D0FB256E_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AB95B30)
#define CLASS_1_E1B199B3D0FB256E_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1AB95D40)
#define CLASS_1_E1B199B3D0FB256E_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1AB95D50)
#define CLASS_1_E1B199B3D0FB256E_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AB95D30)
#define CLASS_1_E1B199B3D0FB256E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB95B60)
#define CLASS_1_E1B199B3D0FB256E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB960D0)
#define CLASS_1_E1B199B3D0FB256E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB96130)
#define CLASS_1_E1B199B3D0FB256E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB967B0)
#define CLASS_1_E1B199B3D0FB256E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB95BF0)
#define CLASS_1_E1B199B3D0FB256E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB95B70)

inline static constexpr unsigned int Class_1_E1B199B3D0FB256E_TypeDefinitionIndex = 24014;

class Class_1_E1B199B3D0FB256E : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA7309D4ABD4A8AB_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA7309D4ABD4A8AB_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1B199B3D0FB256E_TypeDefinitionIndex)->GetStaticField(0x256B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_36E3880E987172D7*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_36E3880E987172D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1B199B3D0FB256E_TypeDefinitionIndex)->GetStaticField(0x256B8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_E1B199B3D0FB256E*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E1B199B3D0FB256E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1B199B3D0FB256E_TypeDefinitionIndex)->GetStaticField(0x256C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1B199B3D0FB256E_TypeDefinitionIndex)->GetStaticField(0x256C8);
	}
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA7309D4ABD4A8AB_1*>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>* Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E1B199B3D0FB256E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E*))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E1B199B3D0FB256E*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E1B199B3D0FB256E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E1B199B3D0FB256E* Clone()
	{
		return ((::Class_1_E1B199B3D0FB256E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA7309D4ABD4A8AB_1*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA7309D4ABD4A8AB_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E1B199B3D0FB256E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E1B199B3D0FB256E*))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E1B199B3D0FB256E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E*))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E1B199B3D0FB256E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
