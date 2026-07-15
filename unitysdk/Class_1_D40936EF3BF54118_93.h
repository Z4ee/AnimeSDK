#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_135;
class Class_1_D17272E82AE804C2_1122;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_93_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C428290)
#define CLASS_1_D40936EF3BF54118_93_CLONE_OFFSET UNITYSDK_OFFSET(0x1C422960)
#define CLASS_1_D40936EF3BF54118_93_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C427FF0)
#define CLASS_1_D40936EF3BF54118_93_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C427FC0)
#define CLASS_1_D40936EF3BF54118_93_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C422C30)
#define CLASS_1_D40936EF3BF54118_93_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C428370)
#define CLASS_1_D40936EF3BF54118_93_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C423580)
#define CLASS_1_D40936EF3BF54118_93_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C427E90)
#define CLASS_1_D40936EF3BF54118_93_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C427FB0)
#define CLASS_1_D40936EF3BF54118_93_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C427FA0)
#define CLASS_1_D40936EF3BF54118_93_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C427EC0)
#define CLASS_1_D40936EF3BF54118_93_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C428140)
#define CLASS_1_D40936EF3BF54118_93_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C4281A0)
#define CLASS_1_D40936EF3BF54118_93__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C428590)
#define CLASS_1_D40936EF3BF54118_93__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C427ED0)
#define CLASS_1_D40936EF3BF54118_93__CTOR_OFFSET UNITYSDK_OFFSET(0x1C423520)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_93_TypeDefinitionIndex = 33103;

class Class_1_D40936EF3BF54118_93 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_135*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_135*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_93_TypeDefinitionIndex)->GetStaticField(0x25C20);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1122*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1122*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_93_TypeDefinitionIndex)->GetStaticField(0x25C28);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_93*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_93*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_93_TypeDefinitionIndex)->GetStaticField(0x25C30);
	}
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1122*>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_135*>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_93*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_93*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_93*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_93* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_93*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1122*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1122*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_135*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_135*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_93* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_93*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_93*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_93_MERGEFROM_1_OFFSET))(this, a1);
	}
};
