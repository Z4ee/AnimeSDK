#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_24B2AFBC155BAEAC_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196B6660)
#define CLASS_1_24B2AFBC155BAEAC_2_CLONE_OFFSET UNITYSDK_OFFSET(0x196B5FB0)
#define CLASS_1_24B2AFBC155BAEAC_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196B60D0)
#define CLASS_1_24B2AFBC155BAEAC_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x196B6070)
#define CLASS_1_24B2AFBC155BAEAC_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196B61C0)
#define CLASS_1_24B2AFBC155BAEAC_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196B68F0)
#define CLASS_1_24B2AFBC155BAEAC_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196B6860)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x196B6040)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x196B6000)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196B5D10)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x196B6030)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x196B6060)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x196B6020)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x196B6050)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x196B6010)
#define CLASS_1_24B2AFBC155BAEAC_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196B5D70)
#define CLASS_1_24B2AFBC155BAEAC_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196B6480)
#define CLASS_1_24B2AFBC155BAEAC_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x196B64E0)
#define CLASS_1_24B2AFBC155BAEAC_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x196B6AB0)
#define CLASS_1_24B2AFBC155BAEAC_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196B5E50)
#define CLASS_1_24B2AFBC155BAEAC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x196B5D80)

inline static constexpr unsigned int Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex = 30704;

class Class_1_24B2AFBC155BAEAC_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_13()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex)->GetStaticField(0x48310);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_24B2AFBC155BAEAC_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_24B2AFBC155BAEAC_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex)->GetStaticField(0x48318);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex)->GetStaticField(0x48320);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex)->GetStaticField(0x48328);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_14; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::System::UInt32 Field_1_3; // 0x30
	::System::UInt32 Field_1_11; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_24B2AFBC155BAEAC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC_2*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_24B2AFBC155BAEAC_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_24B2AFBC155BAEAC_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_24B2AFBC155BAEAC_2* Clone()
	{
		return ((::Class_1_24B2AFBC155BAEAC_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_24B2AFBC155BAEAC_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC_2*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_24B2AFBC155BAEAC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC_2*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
