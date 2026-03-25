#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_20;
class Class_1_EBB10EC01CCC4716_14;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EF0E638FDA49C9A1_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182165D0)
#define CLASS_1_EF0E638FDA49C9A1_2_CLONE_OFFSET UNITYSDK_OFFSET(0x182160E0)
#define CLASS_1_EF0E638FDA49C9A1_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18216200)
#define CLASS_1_EF0E638FDA49C9A1_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x182161A0)
#define CLASS_1_EF0E638FDA49C9A1_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18216310)
#define CLASS_1_EF0E638FDA49C9A1_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18216930)
#define CLASS_1_EF0E638FDA49C9A1_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182167C0)
#define CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18216180)
#define CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18216160)
#define CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18216130)
#define CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18216150)
#define CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18216190)
#define CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18216170)
#define CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18216140)
#define CLASS_1_EF0E638FDA49C9A1_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18215F70)
#define CLASS_1_EF0E638FDA49C9A1_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18216430)
#define CLASS_1_EF0E638FDA49C9A1_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x18216490)
#define CLASS_1_EF0E638FDA49C9A1_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18216AA0)
#define CLASS_1_EF0E638FDA49C9A1_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18215FD0)
#define CLASS_1_EF0E638FDA49C9A1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18215F80)

inline static constexpr unsigned int Class_1_EF0E638FDA49C9A1_2_TypeDefinitionIndex = 23942;

class Class_1_EF0E638FDA49C9A1_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_14*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF0E638FDA49C9A1_2_TypeDefinitionIndex)->GetStaticField(0x137E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_14*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_735612C94F558EAE_20* Field_1_2; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EF0E638FDA49C9A1_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_2*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EF0E638FDA49C9A1_2* Clone()
	{
		return ((::Class_1_EF0E638FDA49C9A1_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_CLONE_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_20* Method_1_24748FC20F375725()
	{
		return ((::Class_1_735612C94F558EAE_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_735612C94F558EAE_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_20*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_14*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_14*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EF0E638FDA49C9A1_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_2*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EF0E638FDA49C9A1_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_2*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
