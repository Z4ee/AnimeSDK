#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0F9366B7D3B580;
class Class_1_D17272E82AE804C2_40;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EB813CC1D00A138D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DCFAC00)
#define CLASS_1_EB813CC1D00A138D_CLONE_OFFSET UNITYSDK_OFFSET(0x1DCFA570)
#define CLASS_1_EB813CC1D00A138D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DCFA820)
#define CLASS_1_EB813CC1D00A138D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DCFA5F0)
#define CLASS_1_EB813CC1D00A138D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DCFA9F0)
#define CLASS_1_EB813CC1D00A138D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DCFAE00)
#define CLASS_1_EB813CC1D00A138D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DCFACF0)
#define CLASS_1_EB813CC1D00A138D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DCFA5C0)
#define CLASS_1_EB813CC1D00A138D_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DCFA380)
#define CLASS_1_EB813CC1D00A138D_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DCFA5E0)
#define CLASS_1_EB813CC1D00A138D_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DCFA5D0)
#define CLASS_1_EB813CC1D00A138D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DCFA3E0)
#define CLASS_1_EB813CC1D00A138D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DCFAA90)
#define CLASS_1_EB813CC1D00A138D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DCFAAF0)
#define CLASS_1_EB813CC1D00A138D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCFAFE0)
#define CLASS_1_EB813CC1D00A138D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DCFA440)
#define CLASS_1_EB813CC1D00A138D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFA3F0)

inline static constexpr unsigned int Class_1_EB813CC1D00A138D_TypeDefinitionIndex = 25289;

class Class_1_EB813CC1D00A138D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_TypeDefinitionIndex)->GetStaticField(0xAE10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_0C0F9366B7D3B580*>** StaticGet_KGEBDCIACDJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_0C0F9366B7D3B580*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_TypeDefinitionIndex)->GetStaticField(0xAE18);
	}
	// static const ::System::Int32 NPPCCBLGINM = 0x1; // 0x0
	// static const ::System::Int32 JBDHCEMPLGC = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0C0F9366B7D3B580*>* HLGOGOCKLNI; // 0x10
	::Class_1_D17272E82AE804C2_40* GBKLGFLLCCN; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EB813CC1D00A138D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EB813CC1D00A138D* Clone()
	{
		return ((::Class_1_EB813CC1D00A138D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_40* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_40*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0C0F9366B7D3B580*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0C0F9366B7D3B580*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EB813CC1D00A138D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EB813CC1D00A138D*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EB813CC1D00A138D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
