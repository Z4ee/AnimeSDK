#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0F414D2CF643E56;
class Class_1_D17272E82AE804C2_102;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_98F510457EDFDB86_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19AF6F80)
#define CLASS_1_98F510457EDFDB86_CLONE_OFFSET UNITYSDK_OFFSET(0x19AF6870)
#define CLASS_1_98F510457EDFDB86_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19AF6960)
#define CLASS_1_98F510457EDFDB86_EQUALS_OFFSET UNITYSDK_OFFSET(0x19AF6900)
#define CLASS_1_98F510457EDFDB86_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19AF6AA0)
#define CLASS_1_98F510457EDFDB86_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19AF7230)
#define CLASS_1_98F510457EDFDB86_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19AF70C0)
#define CLASS_1_98F510457EDFDB86_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19AF6640)
#define CLASS_1_98F510457EDFDB86_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19AF68E0)
#define CLASS_1_98F510457EDFDB86_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x19AF68D0)
#define CLASS_1_98F510457EDFDB86_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x19AF68F0)
#define CLASS_1_98F510457EDFDB86_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19AF68C0)
#define CLASS_1_98F510457EDFDB86_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19AF66A0)
#define CLASS_1_98F510457EDFDB86_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19AF6DD0)
#define CLASS_1_98F510457EDFDB86_WRITETO_OFFSET UNITYSDK_OFFSET(0x19AF6E30)
#define CLASS_1_98F510457EDFDB86__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AF7410)
#define CLASS_1_98F510457EDFDB86__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AF6790)
#define CLASS_1_98F510457EDFDB86__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF66B0)

inline static constexpr unsigned int Class_1_98F510457EDFDB86_TypeDefinitionIndex = 28177;

class Class_1_98F510457EDFDB86 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_98F510457EDFDB86*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_98F510457EDFDB86*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98F510457EDFDB86_TypeDefinitionIndex)->GetStaticField(0x26A60);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_102*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_102*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98F510457EDFDB86_TypeDefinitionIndex)->GetStaticField(0x26A68);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_A0F414D2CF643E56*>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_A0F414D2CF643E56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98F510457EDFDB86_TypeDefinitionIndex)->GetStaticField(0x26A70);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_A0F414D2CF643E56*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_A0F414D2CF643E56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98F510457EDFDB86_TypeDefinitionIndex)->GetStaticField(0x26A78);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98F510457EDFDB86_TypeDefinitionIndex)->GetStaticField(0x26A80);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A0F414D2CF643E56*>* Field_1_4; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>* Field_1_7; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A0F414D2CF643E56*>* Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_98F510457EDFDB86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98F510457EDFDB86*))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_98F510457EDFDB86*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_98F510457EDFDB86*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_98F510457EDFDB86* Clone()
	{
		return ((::Class_1_98F510457EDFDB86*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A0F414D2CF643E56*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A0F414D2CF643E56*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A0F414D2CF643E56*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A0F414D2CF643E56*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_98F510457EDFDB86* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98F510457EDFDB86*))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_98F510457EDFDB86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98F510457EDFDB86*))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_98F510457EDFDB86_MERGEFROM_1_OFFSET))(this, a1);
	}
};
