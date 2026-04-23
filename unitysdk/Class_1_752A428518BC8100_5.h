#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24E6AD662FB2A263;
class Class_1_D17272E82AE804C2_670;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C45850)
#define CLASS_1_752A428518BC8100_5_CLONE_OFFSET UNITYSDK_OFFSET(0x19C45340)
#define CLASS_1_752A428518BC8100_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C45510)
#define CLASS_1_752A428518BC8100_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C453C0)
#define CLASS_1_752A428518BC8100_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C45600)
#define CLASS_1_752A428518BC8100_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C45A40)
#define CLASS_1_752A428518BC8100_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C45930)
#define CLASS_1_752A428518BC8100_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19C453A0)
#define CLASS_1_752A428518BC8100_5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19C45160)
#define CLASS_1_752A428518BC8100_5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19C45390)
#define CLASS_1_752A428518BC8100_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19C453B0)
#define CLASS_1_752A428518BC8100_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C451C0)
#define CLASS_1_752A428518BC8100_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C45720)
#define CLASS_1_752A428518BC8100_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C45780)
#define CLASS_1_752A428518BC8100_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C45B30)
#define CLASS_1_752A428518BC8100_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C45220)
#define CLASS_1_752A428518BC8100_5__CTOR_OFFSET UNITYSDK_OFFSET(0x19C451D0)

inline static constexpr unsigned int Class_1_752A428518BC8100_5_TypeDefinitionIndex = 29752;

class Class_1_752A428518BC8100_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_24E6AD662FB2A263*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_24E6AD662FB2A263*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_5_TypeDefinitionIndex)->GetStaticField(0x5C690);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_5_TypeDefinitionIndex)->GetStaticField(0x5C698);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Class_1_D17272E82AE804C2_670* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24E6AD662FB2A263*>* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_752A428518BC8100_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_5*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_752A428518BC8100_5* Clone()
	{
		return ((::Class_1_752A428518BC8100_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24E6AD662FB2A263*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24E6AD662FB2A263*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_670* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_670*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_670* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_670*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_752A428518BC8100_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_752A428518BC8100_5*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_752A428518BC8100_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_5*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
