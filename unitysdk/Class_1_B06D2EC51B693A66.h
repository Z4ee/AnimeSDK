#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_5;
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

#define CLASS_1_B06D2EC51B693A66_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CCAB2B0)
#define CLASS_1_B06D2EC51B693A66_CLONE_OFFSET UNITYSDK_OFFSET(0x1CCAADE0)
#define CLASS_1_B06D2EC51B693A66_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CCAAE70)
#define CLASS_1_B06D2EC51B693A66_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CCAAE40)
#define CLASS_1_B06D2EC51B693A66_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CCAAFE0)
#define CLASS_1_B06D2EC51B693A66_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CCAB490)
#define CLASS_1_B06D2EC51B693A66_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CCAB3C0)
#define CLASS_1_B06D2EC51B693A66_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CCAAE20)
#define CLASS_1_B06D2EC51B693A66_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CCAABE0)
#define CLASS_1_B06D2EC51B693A66_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CCAAE30)
#define CLASS_1_B06D2EC51B693A66_METHOD_1_AA415D46E3167651_OFFSET UNITYSDK_OFFSET(0x1CCAAE10)
#define CLASS_1_B06D2EC51B693A66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CCAAC10)
#define CLASS_1_B06D2EC51B693A66_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CCAB140)
#define CLASS_1_B06D2EC51B693A66_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CCAB1A0)
#define CLASS_1_B06D2EC51B693A66__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCAB600)
#define CLASS_1_B06D2EC51B693A66__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CCAACB0)
#define CLASS_1_B06D2EC51B693A66__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAAC20)

inline static constexpr unsigned int Class_1_B06D2EC51B693A66_TypeDefinitionIndex = 26303;

class Class_1_B06D2EC51B693A66 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Boolean>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B06D2EC51B693A66_TypeDefinitionIndex)->GetStaticField(0x670D0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_B06D2EC51B693A66*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B06D2EC51B693A66*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B06D2EC51B693A66_TypeDefinitionIndex)->GetStaticField(0x670D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7F6A638FBAAEC90B_5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7F6A638FBAAEC90B_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B06D2EC51B693A66_TypeDefinitionIndex)->GetStaticField(0x670E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B06D2EC51B693A66_TypeDefinitionIndex)->GetStaticField(0x670E8);
	}
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7F6A638FBAAEC90B_5*>* Field_1_9; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B06D2EC51B693A66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B06D2EC51B693A66*))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B06D2EC51B693A66*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B06D2EC51B693A66*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B06D2EC51B693A66* Clone()
	{
		return ((::Class_1_B06D2EC51B693A66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* Method_1_AA415D46E3167651()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_METHOD_1_AA415D46E3167651_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7F6A638FBAAEC90B_5*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7F6A638FBAAEC90B_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B06D2EC51B693A66* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B06D2EC51B693A66*))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B06D2EC51B693A66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B06D2EC51B693A66*))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B06D2EC51B693A66_MERGEFROM_1_OFFSET))(this, a1);
	}
};
