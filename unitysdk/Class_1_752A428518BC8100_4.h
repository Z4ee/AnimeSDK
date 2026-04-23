#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_67;
class Class_1_D5163FD2F1F43324;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196D8C20)
#define CLASS_1_752A428518BC8100_4_CLONE_OFFSET UNITYSDK_OFFSET(0x196D8740)
#define CLASS_1_752A428518BC8100_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196D8840)
#define CLASS_1_752A428518BC8100_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x196D87E0)
#define CLASS_1_752A428518BC8100_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196D8980)
#define CLASS_1_752A428518BC8100_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196D8E80)
#define CLASS_1_752A428518BC8100_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196D8D30)
#define CLASS_1_752A428518BC8100_4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x196D87C0)
#define CLASS_1_752A428518BC8100_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x196D87A0)
#define CLASS_1_752A428518BC8100_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196D8500)
#define CLASS_1_752A428518BC8100_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x196D8790)
#define CLASS_1_752A428518BC8100_4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x196D87D0)
#define CLASS_1_752A428518BC8100_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x196D87B0)
#define CLASS_1_752A428518BC8100_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196D8560)
#define CLASS_1_752A428518BC8100_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196D8AC0)
#define CLASS_1_752A428518BC8100_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x196D8B20)
#define CLASS_1_752A428518BC8100_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x196D8FB0)
#define CLASS_1_752A428518BC8100_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196D85C0)
#define CLASS_1_752A428518BC8100_4__CTOR_OFFSET UNITYSDK_OFFSET(0x196D8570)

inline static constexpr unsigned int Class_1_752A428518BC8100_4_TypeDefinitionIndex = 29287;

class Class_1_752A428518BC8100_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D5163FD2F1F43324*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D5163FD2F1F43324*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_4_TypeDefinitionIndex)->GetStaticField(0x4B570);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_4_TypeDefinitionIndex)->GetStaticField(0x4B578);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	::Class_1_21C7581DFE99F091_67* Field_1_8; // 0x10
	::Class_1_D5163FD2F1F43324* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D5163FD2F1F43324*>* Field_1_4; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28

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

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D5163FD2F1F43324*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D5163FD2F1F43324*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_D5163FD2F1F43324* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D5163FD2F1F43324*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D5163FD2F1F43324* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D5163FD2F1F43324*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_67* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21C7581DFE99F091_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21C7581DFE99F091_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_67*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
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
