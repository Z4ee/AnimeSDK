#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_57;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EF0E638FDA49C9A1_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180F0250)
#define CLASS_1_EF0E638FDA49C9A1_5_CLONE_OFFSET UNITYSDK_OFFSET(0x180EFD60)
#define CLASS_1_EF0E638FDA49C9A1_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180EFE80)
#define CLASS_1_EF0E638FDA49C9A1_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x180EFE20)
#define CLASS_1_EF0E638FDA49C9A1_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180EFF90)
#define CLASS_1_EF0E638FDA49C9A1_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180F0550)
#define CLASS_1_EF0E638FDA49C9A1_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180F0420)
#define CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180EFE00)
#define CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180EFDE0)
#define CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180EFDC0)
#define CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x180EFDB0)
#define CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180EFE10)
#define CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180EFDF0)
#define CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180EFDD0)
#define CLASS_1_EF0E638FDA49C9A1_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180EFBD0)
#define CLASS_1_EF0E638FDA49C9A1_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180F00B0)
#define CLASS_1_EF0E638FDA49C9A1_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x180F0110)
#define CLASS_1_EF0E638FDA49C9A1_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x180F0670)
#define CLASS_1_EF0E638FDA49C9A1_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180EFC30)
#define CLASS_1_EF0E638FDA49C9A1_5__CTOR_OFFSET UNITYSDK_OFFSET(0x180EFBE0)

inline static constexpr unsigned int Class_1_EF0E638FDA49C9A1_5_TypeDefinitionIndex = 27203;

class Class_1_EF0E638FDA49C9A1_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_57*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_57*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF0E638FDA49C9A1_5_TypeDefinitionIndex)->GetStaticField(0x36A50);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xC; // 0x0
	::Class_1_352A8B3482C80E7D_57* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_57*>* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EF0E638FDA49C9A1_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_5*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EF0E638FDA49C9A1_5* Clone()
	{
		return ((::Class_1_EF0E638FDA49C9A1_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_57*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_57*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_57* Method_1_24748FC20F375725()
	{
		return ((::Class_1_352A8B3482C80E7D_57*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_352A8B3482C80E7D_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_57*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EF0E638FDA49C9A1_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_5*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EF0E638FDA49C9A1_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_5*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
