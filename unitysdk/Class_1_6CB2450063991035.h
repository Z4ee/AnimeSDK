#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_242BFB9DE152D766;
class Class_1_894F8963FCDCC666;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6CB2450063991035_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C727A50)
#define CLASS_1_6CB2450063991035_CLONE_OFFSET UNITYSDK_OFFSET(0x1C727560)
#define CLASS_1_6CB2450063991035_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C727610)
#define CLASS_1_6CB2450063991035_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7275E0)
#define CLASS_1_6CB2450063991035_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7277F0)
#define CLASS_1_6CB2450063991035_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C727C60)
#define CLASS_1_6CB2450063991035_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C727B70)
#define CLASS_1_6CB2450063991035_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C727590)
#define CLASS_1_6CB2450063991035_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C7275B0)
#define CLASS_1_6CB2450063991035_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C7273D0)
#define CLASS_1_6CB2450063991035_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C7275D0)
#define CLASS_1_6CB2450063991035_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C7275A0)
#define CLASS_1_6CB2450063991035_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C7275C0)
#define CLASS_1_6CB2450063991035_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C727400)
#define CLASS_1_6CB2450063991035_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7278C0)
#define CLASS_1_6CB2450063991035_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C727920)
#define CLASS_1_6CB2450063991035__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C727EC0)
#define CLASS_1_6CB2450063991035__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C727450)
#define CLASS_1_6CB2450063991035__CTOR_OFFSET UNITYSDK_OFFSET(0x1C727410)

inline static constexpr unsigned int Class_1_6CB2450063991035_TypeDefinitionIndex = 24551;

class Class_1_6CB2450063991035 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_894F8963FCDCC666*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_894F8963FCDCC666*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB2450063991035_TypeDefinitionIndex)->GetStaticField(0x1B3C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB2450063991035_TypeDefinitionIndex)->GetStaticField(0x1B3C8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Class_1_242BFB9DE152D766* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_894F8963FCDCC666*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6CB2450063991035* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB2450063991035*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6CB2450063991035* Clone()
	{
		return ((::Class_1_6CB2450063991035*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_242BFB9DE152D766* Method_1_24748FC20F375725()
	{
		return ((::Class_1_242BFB9DE152D766*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_242BFB9DE152D766* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_894F8963FCDCC666*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_894F8963FCDCC666*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6CB2450063991035* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6CB2450063991035*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6CB2450063991035* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB2450063991035*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_MERGEFROM_1_OFFSET))(this, a1);
	}
};
