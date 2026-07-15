#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_1;
class Class_1_D17272E82AE804C2_14;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AEF3B473274E6579_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C51F2F0)
#define CLASS_1_AEF3B473274E6579_CLONE_OFFSET UNITYSDK_OFFSET(0x1C51EDC0)
#define CLASS_1_AEF3B473274E6579_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C51EE70)
#define CLASS_1_AEF3B473274E6579_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C51EE40)
#define CLASS_1_AEF3B473274E6579_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C51F050)
#define CLASS_1_AEF3B473274E6579_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C51F500)
#define CLASS_1_AEF3B473274E6579_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C51F3F0)
#define CLASS_1_AEF3B473274E6579_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C51EDF0)
#define CLASS_1_AEF3B473274E6579_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C51EC50)
#define CLASS_1_AEF3B473274E6579_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C51EE10)
#define CLASS_1_AEF3B473274E6579_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C51EE00)
#define CLASS_1_AEF3B473274E6579_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C51EE30)
#define CLASS_1_AEF3B473274E6579_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C51EE20)
#define CLASS_1_AEF3B473274E6579_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C51EC80)
#define CLASS_1_AEF3B473274E6579_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C51F0F0)
#define CLASS_1_AEF3B473274E6579_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C51F150)
#define CLASS_1_AEF3B473274E6579__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C51F750)
#define CLASS_1_AEF3B473274E6579__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C51ECD0)
#define CLASS_1_AEF3B473274E6579__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51EC90)

inline static constexpr unsigned int Class_1_AEF3B473274E6579_TypeDefinitionIndex = 24446;

class Class_1_AEF3B473274E6579 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_AEF3B473274E6579*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_AEF3B473274E6579*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF3B473274E6579_TypeDefinitionIndex)->GetStaticField(0x65D20);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_14*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF3B473274E6579_TypeDefinitionIndex)->GetStaticField(0x65D28);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Class_1_21C7581DFE99F091_1* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_14*>* Field_1_7; // 0x20
	::System::Boolean Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AEF3B473274E6579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AEF3B473274E6579*))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_AEF3B473274E6579*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_AEF3B473274E6579*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AEF3B473274E6579* Clone()
	{
		return ((::Class_1_AEF3B473274E6579*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_CLONE_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_1*))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_14*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_14*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AEF3B473274E6579* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AEF3B473274E6579*))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AEF3B473274E6579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AEF3B473274E6579*))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AEF3B473274E6579_MERGEFROM_1_OFFSET))(this, a1);
	}
};
