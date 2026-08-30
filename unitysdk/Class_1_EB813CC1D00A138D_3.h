#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24E6AD662FB2A263;
class Class_1_D17272E82AE804C2_825;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EB813CC1D00A138D_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1885F0)
#define CLASS_1_EB813CC1D00A138D_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1E187F60)
#define CLASS_1_EB813CC1D00A138D_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E188210)
#define CLASS_1_EB813CC1D00A138D_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E187FE0)
#define CLASS_1_EB813CC1D00A138D_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1883E0)
#define CLASS_1_EB813CC1D00A138D_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1887E0)
#define CLASS_1_EB813CC1D00A138D_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1886D0)
#define CLASS_1_EB813CC1D00A138D_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E187FC0)
#define CLASS_1_EB813CC1D00A138D_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E187D80)
#define CLASS_1_EB813CC1D00A138D_3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E187FB0)
#define CLASS_1_EB813CC1D00A138D_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E187FD0)
#define CLASS_1_EB813CC1D00A138D_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E187DE0)
#define CLASS_1_EB813CC1D00A138D_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E188470)
#define CLASS_1_EB813CC1D00A138D_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1884D0)
#define CLASS_1_EB813CC1D00A138D_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1889C0)
#define CLASS_1_EB813CC1D00A138D_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E187E40)
#define CLASS_1_EB813CC1D00A138D_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E187DF0)

inline static constexpr unsigned int Class_1_EB813CC1D00A138D_3_TypeDefinitionIndex = 31131;

class Class_1_EB813CC1D00A138D_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_24E6AD662FB2A263*>** StaticGet_LBEBIPBKKAK()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_24E6AD662FB2A263*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_3_TypeDefinitionIndex)->GetStaticField(0x51230);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_3*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_3_TypeDefinitionIndex)->GetStaticField(0x51238);
	}
	// static const ::System::Int32 MDCDGIGBNFD = 0x3; // 0x0
	// static const ::System::Int32 IPEJELEHDPO = 0xA; // 0x0
	::Class_1_D17272E82AE804C2_825* PNOPCAMBBDI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24E6AD662FB2A263*>* DHNIEACFJFL; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EB813CC1D00A138D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D_3*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EB813CC1D00A138D_3* Clone()
	{
		return ((::Class_1_EB813CC1D00A138D_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24E6AD662FB2A263*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24E6AD662FB2A263*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_825* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_825*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_825* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_825*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EB813CC1D00A138D_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EB813CC1D00A138D_3*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EB813CC1D00A138D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D_3*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
