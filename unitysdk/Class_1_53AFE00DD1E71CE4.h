#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A55E8BED8FA46A4;
class Class_1_9BED8C2CAC924ACC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_53AFE00DD1E71CE4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CAB9C40)
#define CLASS_1_53AFE00DD1E71CE4_CLONE_OFFSET UNITYSDK_OFFSET(0x1CAB94B0)
#define CLASS_1_53AFE00DD1E71CE4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CAB95C0)
#define CLASS_1_53AFE00DD1E71CE4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CAB9560)
#define CLASS_1_53AFE00DD1E71CE4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CAB9830)
#define CLASS_1_53AFE00DD1E71CE4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CABA000)
#define CLASS_1_53AFE00DD1E71CE4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CAB9DC0)
#define CLASS_1_53AFE00DD1E71CE4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CAB9530)
#define CLASS_1_53AFE00DD1E71CE4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CAB9500)
#define CLASS_1_53AFE00DD1E71CE4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CAB9210)
#define CLASS_1_53AFE00DD1E71CE4_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1CAB9550)
#define CLASS_1_53AFE00DD1E71CE4_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CAB9520)
#define CLASS_1_53AFE00DD1E71CE4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CAB9540)
#define CLASS_1_53AFE00DD1E71CE4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CAB9510)
#define CLASS_1_53AFE00DD1E71CE4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CAB9270)
#define CLASS_1_53AFE00DD1E71CE4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CAB9A20)
#define CLASS_1_53AFE00DD1E71CE4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CAB9A80)
#define CLASS_1_53AFE00DD1E71CE4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CABA2A0)
#define CLASS_1_53AFE00DD1E71CE4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAB9310)
#define CLASS_1_53AFE00DD1E71CE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB9280)

inline static constexpr unsigned int Class_1_53AFE00DD1E71CE4_TypeDefinitionIndex = 27156;

class Class_1_53AFE00DD1E71CE4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_53AFE00DD1E71CE4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_53AFE00DD1E71CE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53AFE00DD1E71CE4_TypeDefinitionIndex)->GetStaticField(0x54260);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53AFE00DD1E71CE4_TypeDefinitionIndex)->GetStaticField(0x54268);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53AFE00DD1E71CE4_TypeDefinitionIndex)->GetStaticField(0x54270);
	}
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Class_1_5A55E8BED8FA46A4* Field_1_9; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x28
	::Class_1_9BED8C2CAC924ACC* Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_53AFE00DD1E71CE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53AFE00DD1E71CE4*))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_53AFE00DD1E71CE4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_53AFE00DD1E71CE4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_53AFE00DD1E71CE4* Clone()
	{
		return ((::Class_1_53AFE00DD1E71CE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_CLONE_OFFSET))(this);
	}

	::Class_1_9BED8C2CAC924ACC* Method_1_24748FC20F375725()
	{
		return ((::Class_1_9BED8C2CAC924ACC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_9BED8C2CAC924ACC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BED8C2CAC924ACC*))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_5A55E8BED8FA46A4* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_5A55E8BED8FA46A4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_5A55E8BED8FA46A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4*))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_53AFE00DD1E71CE4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_53AFE00DD1E71CE4*))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_53AFE00DD1E71CE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53AFE00DD1E71CE4*))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_53AFE00DD1E71CE4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
