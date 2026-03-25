#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_533CCF93B9B1AD29;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C70AE03C58B77993_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181ACCC0)
#define CLASS_1_C70AE03C58B77993_CLONE_OFFSET UNITYSDK_OFFSET(0x181AC7A0)
#define CLASS_1_C70AE03C58B77993_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181AC8B0)
#define CLASS_1_C70AE03C58B77993_EQUALS_OFFSET UNITYSDK_OFFSET(0x181AC880)
#define CLASS_1_C70AE03C58B77993_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181AC9E0)
#define CLASS_1_C70AE03C58B77993_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181C8000)
#define CLASS_1_C70AE03C58B77993_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181C7EE0)
#define CLASS_1_C70AE03C58B77993_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181AC800)
#define CLASS_1_C70AE03C58B77993_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x181AC860)
#define CLASS_1_C70AE03C58B77993_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181AC7D0)
#define CLASS_1_C70AE03C58B77993_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x181AC820)
#define CLASS_1_C70AE03C58B77993_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x181AC850)
#define CLASS_1_C70AE03C58B77993_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x181AC7F0)
#define CLASS_1_C70AE03C58B77993_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181AC810)
#define CLASS_1_C70AE03C58B77993_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x181AC870)
#define CLASS_1_C70AE03C58B77993_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181AC7E0)
#define CLASS_1_C70AE03C58B77993_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x181AC830)
#define CLASS_1_C70AE03C58B77993_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x181AC840)
#define CLASS_1_C70AE03C58B77993_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181AC630)
#define CLASS_1_C70AE03C58B77993_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181ACB10)
#define CLASS_1_C70AE03C58B77993_WRITETO_OFFSET UNITYSDK_OFFSET(0x181ACB70)
#define CLASS_1_C70AE03C58B77993__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C8130)
#define CLASS_1_C70AE03C58B77993__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181AC690)
#define CLASS_1_C70AE03C58B77993__CTOR_OFFSET UNITYSDK_OFFSET(0x181AC640)

inline static constexpr unsigned int Class_1_C70AE03C58B77993_TypeDefinitionIndex = 27017;

class Class_1_C70AE03C58B77993 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C70AE03C58B77993_TypeDefinitionIndex)->GetStaticField(0xEA00);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_5; // 0x18
	::Class_1_533CCF93B9B1AD29* Field_1_9; // 0x20
	::System::UInt32 Field_1_13; // 0x28
	::System::UInt32 Field_1_7; // 0x2C
	::System::UInt64 Field_1_11; // 0x30
	::System::UInt32 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C70AE03C58B77993* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C70AE03C58B77993*))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C70AE03C58B77993* Clone()
	{
		return ((::Class_1_C70AE03C58B77993*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_533CCF93B9B1AD29* Method_1_24748FC20F375725()
	{
		return ((::Class_1_533CCF93B9B1AD29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_533CCF93B9B1AD29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_533CCF93B9B1AD29*))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C70AE03C58B77993* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C70AE03C58B77993*))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C70AE03C58B77993* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C70AE03C58B77993*))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C70AE03C58B77993_MERGEFROM_1_OFFSET))(this, a1);
	}
};
