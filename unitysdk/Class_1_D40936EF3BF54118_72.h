#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4F136441499BAFA_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_72_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA20DC0)
#define CLASS_1_D40936EF3BF54118_72_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA209A0)
#define CLASS_1_D40936EF3BF54118_72_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA20B20)
#define CLASS_1_D40936EF3BF54118_72_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA209E0)
#define CLASS_1_D40936EF3BF54118_72_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA20C40)
#define CLASS_1_D40936EF3BF54118_72_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA20F00)
#define CLASS_1_D40936EF3BF54118_72_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA20E60)
#define CLASS_1_D40936EF3BF54118_72_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CA20860)
#define CLASS_1_D40936EF3BF54118_72_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CA209D0)
#define CLASS_1_D40936EF3BF54118_72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA20890)
#define CLASS_1_D40936EF3BF54118_72_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA20CB0)
#define CLASS_1_D40936EF3BF54118_72_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA20D10)
#define CLASS_1_D40936EF3BF54118_72__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA210C0)
#define CLASS_1_D40936EF3BF54118_72__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA208F0)
#define CLASS_1_D40936EF3BF54118_72__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA208A0)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_72_TypeDefinitionIndex = 30360;

class Class_1_D40936EF3BF54118_72 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_72*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_72*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_72_TypeDefinitionIndex)->GetStaticField(0x32E60);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B4F136441499BAFA_7*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B4F136441499BAFA_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_72_TypeDefinitionIndex)->GetStaticField(0x32E68);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_7*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_72*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_72*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_72*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_72* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_72*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_7*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_72* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_72*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_72*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_72_MERGEFROM_1_OFFSET))(this, a1);
	}
};
