#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_25.h"
#include "unitysdk/System/Object.h"

class Class_1_766E1CF11E204F43_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_049EA20829C3E01B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA2C0C0)
#define CLASS_1_049EA20829C3E01B_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA2BB70)
#define CLASS_1_049EA20829C3E01B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA2BC20)
#define CLASS_1_049EA20829C3E01B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA2BBF0)
#define CLASS_1_049EA20829C3E01B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA2BD40)
#define CLASS_1_049EA20829C3E01B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA2C390)
#define CLASS_1_049EA20829C3E01B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA2C2A0)
#define CLASS_1_049EA20829C3E01B_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1AA2BBD0)
#define CLASS_1_049EA20829C3E01B_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AA2BBA0)
#define CLASS_1_049EA20829C3E01B_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AA2B970)
#define CLASS_1_049EA20829C3E01B_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AA2BBE0)
#define CLASS_1_049EA20829C3E01B_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1AA2BBC0)
#define CLASS_1_049EA20829C3E01B_METHOD_1_AA415D46E3167651_OFFSET UNITYSDK_OFFSET(0x1AA2BBB0)
#define CLASS_1_049EA20829C3E01B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA2B9A0)
#define CLASS_1_049EA20829C3E01B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA2BF10)
#define CLASS_1_049EA20829C3E01B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA2BF70)
#define CLASS_1_049EA20829C3E01B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA2C520)
#define CLASS_1_049EA20829C3E01B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA2BA40)
#define CLASS_1_049EA20829C3E01B__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA2B9B0)

inline static constexpr unsigned int Class_1_049EA20829C3E01B_TypeDefinitionIndex = 25843;

class Class_1_049EA20829C3E01B : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Boolean>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_049EA20829C3E01B_TypeDefinitionIndex)->GetStaticField(0x50F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_766E1CF11E204F43_3*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_766E1CF11E204F43_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_049EA20829C3E01B_TypeDefinitionIndex)->GetStaticField(0x50F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_049EA20829C3E01B_TypeDefinitionIndex)->GetStaticField(0x5100);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_049EA20829C3E01B*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_049EA20829C3E01B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_049EA20829C3E01B_TypeDefinitionIndex)->GetStaticField(0x5108);
	}
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_766E1CF11E204F43_3*>* Field_1_10; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x28
	::Enum_3_0A3761FE34514D6C_25 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_049EA20829C3E01B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_049EA20829C3E01B*))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_049EA20829C3E01B*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_049EA20829C3E01B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_049EA20829C3E01B* Clone()
	{
		return ((::Class_1_049EA20829C3E01B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* Method_1_AA415D46E3167651()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_METHOD_1_AA415D46E3167651_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_25 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_25 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_25))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_766E1CF11E204F43_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_766E1CF11E204F43_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_049EA20829C3E01B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_049EA20829C3E01B*))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_049EA20829C3E01B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_049EA20829C3E01B*))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_049EA20829C3E01B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
