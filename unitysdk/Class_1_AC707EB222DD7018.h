#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7;
class Class_1_9592B34F41301777;
class Class_1_EF0E638FDA49C9A1_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AC707EB222DD7018_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18117780)
#define CLASS_1_AC707EB222DD7018_CLONE_OFFSET UNITYSDK_OFFSET(0x18117200)
#define CLASS_1_AC707EB222DD7018_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18117290)
#define CLASS_1_AC707EB222DD7018_EQUALS_OFFSET UNITYSDK_OFFSET(0x18117260)
#define CLASS_1_AC707EB222DD7018_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181173A0)
#define CLASS_1_AC707EB222DD7018_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181179E0)
#define CLASS_1_AC707EB222DD7018_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18117890)
#define CLASS_1_AC707EB222DD7018_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x18117240)
#define CLASS_1_AC707EB222DD7018_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x18117250)
#define CLASS_1_AC707EB222DD7018_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18117230)
#define CLASS_1_AC707EB222DD7018_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18117060)
#define CLASS_1_AC707EB222DD7018_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18117600)
#define CLASS_1_AC707EB222DD7018_WRITETO_OFFSET UNITYSDK_OFFSET(0x18117660)
#define CLASS_1_AC707EB222DD7018__CCTOR_OFFSET UNITYSDK_OFFSET(0x18117C10)
#define CLASS_1_AC707EB222DD7018__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181170F0)
#define CLASS_1_AC707EB222DD7018__CTOR_OFFSET UNITYSDK_OFFSET(0x18117070)

inline static constexpr unsigned int Class_1_AC707EB222DD7018_TypeDefinitionIndex = 23040;

class Class_1_AC707EB222DD7018 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_36E3880E987172D7*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_36E3880E987172D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_TypeDefinitionIndex)->GetStaticField(0x377A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EF0E638FDA49C9A1_1*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EF0E638FDA49C9A1_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_TypeDefinitionIndex)->GetStaticField(0x377A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9592B34F41301777*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9592B34F41301777*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_TypeDefinitionIndex)->GetStaticField(0x377B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9592B34F41301777*>* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_1*>* Field_1_6; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AC707EB222DD7018* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC707EB222DD7018*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AC707EB222DD7018* Clone()
	{
		return ((::Class_1_AC707EB222DD7018*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9592B34F41301777*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9592B34F41301777*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_1*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36E3880E987172D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AC707EB222DD7018* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC707EB222DD7018*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AC707EB222DD7018* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC707EB222DD7018*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_MERGEFROM_1_OFFSET))(this, a1);
	}
};
