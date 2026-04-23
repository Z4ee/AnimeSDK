#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_107;
class Class_1_D17272E82AE804C2_959;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_87_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193DF1C0)
#define CLASS_1_D40936EF3BF54118_87_CLONE_OFFSET UNITYSDK_OFFSET(0x193DED70)
#define CLASS_1_D40936EF3BF54118_87_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193DEDF0)
#define CLASS_1_D40936EF3BF54118_87_EQUALS_OFFSET UNITYSDK_OFFSET(0x193DEDC0)
#define CLASS_1_D40936EF3BF54118_87_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193DEED0)
#define CLASS_1_D40936EF3BF54118_87_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193DF390)
#define CLASS_1_D40936EF3BF54118_87_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193DF2A0)
#define CLASS_1_D40936EF3BF54118_87_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193DEC00)
#define CLASS_1_D40936EF3BF54118_87_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x193DEDB0)
#define CLASS_1_D40936EF3BF54118_87_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x193DEDA0)
#define CLASS_1_D40936EF3BF54118_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193DEC30)
#define CLASS_1_D40936EF3BF54118_87_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193DF070)
#define CLASS_1_D40936EF3BF54118_87_WRITETO_OFFSET UNITYSDK_OFFSET(0x193DF0D0)
#define CLASS_1_D40936EF3BF54118_87__CCTOR_OFFSET UNITYSDK_OFFSET(0x193DF4B0)
#define CLASS_1_D40936EF3BF54118_87__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193DECA0)
#define CLASS_1_D40936EF3BF54118_87__CTOR_OFFSET UNITYSDK_OFFSET(0x193DEC40)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_87_TypeDefinitionIndex = 32620;

class Class_1_D40936EF3BF54118_87 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_959*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_959*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_87_TypeDefinitionIndex)->GetStaticField(0x3F390);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_87*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_87*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_87_TypeDefinitionIndex)->GetStaticField(0x3F398);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_107*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_107*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_87_TypeDefinitionIndex)->GetStaticField(0x3F3A0);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_107*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_959*>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_87*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_87*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_87*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_87* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_107*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_107*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_959*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_959*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_87*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_87*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_87_MERGEFROM_1_OFFSET))(this, a1);
	}
};
