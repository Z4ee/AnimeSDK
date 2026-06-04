#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_69;
class Class_1_F3622139E5E134C0;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A455500)
#define CLASS_1_752A428518BC8100_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1A455010)
#define CLASS_1_752A428518BC8100_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A455110)
#define CLASS_1_752A428518BC8100_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A4550B0)
#define CLASS_1_752A428518BC8100_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A455250)
#define CLASS_1_752A428518BC8100_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A455740)
#define CLASS_1_752A428518BC8100_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A455600)
#define CLASS_1_752A428518BC8100_4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A455080)
#define CLASS_1_752A428518BC8100_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A455060)
#define CLASS_1_752A428518BC8100_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A454DC0)
#define CLASS_1_752A428518BC8100_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A4550A0)
#define CLASS_1_752A428518BC8100_4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A455090)
#define CLASS_1_752A428518BC8100_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A455070)
#define CLASS_1_752A428518BC8100_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A454E20)
#define CLASS_1_752A428518BC8100_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A455390)
#define CLASS_1_752A428518BC8100_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A4553F0)
#define CLASS_1_752A428518BC8100_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A455950)
#define CLASS_1_752A428518BC8100_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A454E80)
#define CLASS_1_752A428518BC8100_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A454E30)

inline static constexpr unsigned int Class_1_752A428518BC8100_4_TypeDefinitionIndex = 29266;

class Class_1_752A428518BC8100_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F3622139E5E134C0*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F3622139E5E134C0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_4_TypeDefinitionIndex)->GetStaticField(0x66580);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_4*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_4_TypeDefinitionIndex)->GetStaticField(0x66588);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3622139E5E134C0*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Class_1_21C7581DFE99F091_69* Field_1_7; // 0x20
	::Class_1_F3622139E5E134C0* Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_752A428518BC8100_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_4*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_752A428518BC8100_4* Clone()
	{
		return ((::Class_1_752A428518BC8100_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_CLONE_OFFSET))(this);
	}

	::Class_1_F3622139E5E134C0* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F3622139E5E134C0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F3622139E5E134C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3622139E5E134C0*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_69* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21C7581DFE99F091_69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21C7581DFE99F091_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_69*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3622139E5E134C0*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3622139E5E134C0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_752A428518BC8100_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_752A428518BC8100_4*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_752A428518BC8100_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_4*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
