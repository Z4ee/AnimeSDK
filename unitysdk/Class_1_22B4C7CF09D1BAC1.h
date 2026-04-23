#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_04E1E73B2EA3814F_1;
class Class_1_075C34D03AFA1215_80;
class Class_1_5516F5B2865E1357_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_22B4C7CF09D1BAC1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19621730)
#define CLASS_1_22B4C7CF09D1BAC1_CLONE_OFFSET UNITYSDK_OFFSET(0x196210A0)
#define CLASS_1_22B4C7CF09D1BAC1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196211A0)
#define CLASS_1_22B4C7CF09D1BAC1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19621140)
#define CLASS_1_22B4C7CF09D1BAC1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196212F0)
#define CLASS_1_22B4C7CF09D1BAC1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19621A60)
#define CLASS_1_22B4C7CF09D1BAC1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196218A0)
#define CLASS_1_22B4C7CF09D1BAC1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19621100)
#define CLASS_1_22B4C7CF09D1BAC1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19620E60)
#define CLASS_1_22B4C7CF09D1BAC1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19621130)
#define CLASS_1_22B4C7CF09D1BAC1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19621120)
#define CLASS_1_22B4C7CF09D1BAC1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x196210F0)
#define CLASS_1_22B4C7CF09D1BAC1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19621110)
#define CLASS_1_22B4C7CF09D1BAC1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19620EC0)
#define CLASS_1_22B4C7CF09D1BAC1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19621590)
#define CLASS_1_22B4C7CF09D1BAC1_WRITETO_OFFSET UNITYSDK_OFFSET(0x196215F0)
#define CLASS_1_22B4C7CF09D1BAC1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19621C60)
#define CLASS_1_22B4C7CF09D1BAC1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19620F80)
#define CLASS_1_22B4C7CF09D1BAC1__CTOR_OFFSET UNITYSDK_OFFSET(0x19620ED0)

inline static constexpr unsigned int Class_1_22B4C7CF09D1BAC1_TypeDefinitionIndex = 29827;

class Class_1_22B4C7CF09D1BAC1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5516F5B2865E1357_4*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5516F5B2865E1357_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22B4C7CF09D1BAC1_TypeDefinitionIndex)->GetStaticField(0x5E840);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22B4C7CF09D1BAC1_TypeDefinitionIndex)->GetStaticField(0x5E848);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_22B4C7CF09D1BAC1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_22B4C7CF09D1BAC1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22B4C7CF09D1BAC1_TypeDefinitionIndex)->GetStaticField(0x5E850);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_04E1E73B2EA3814F_1*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_04E1E73B2EA3814F_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22B4C7CF09D1BAC1_TypeDefinitionIndex)->GetStaticField(0x5E858);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_04E1E73B2EA3814F_1*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x20
	::Class_1_075C34D03AFA1215_80* Field_1_6; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5516F5B2865E1357_4*>* Field_1_9; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_22B4C7CF09D1BAC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_22B4C7CF09D1BAC1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_22B4C7CF09D1BAC1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_22B4C7CF09D1BAC1* Clone()
	{
		return ((::Class_1_22B4C7CF09D1BAC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_04E1E73B2EA3814F_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_04E1E73B2EA3814F_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_80* Method_1_24748FC20F375725()
	{
		return ((::Class_1_075C34D03AFA1215_80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_075C34D03AFA1215_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5516F5B2865E1357_4*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5516F5B2865E1357_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_22B4C7CF09D1BAC1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_22B4C7CF09D1BAC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
