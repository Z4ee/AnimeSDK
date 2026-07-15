#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/System/Object.h"

class Class_1_23C1B7E6B450FFB8_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0C0F9366B7D3B580_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BCED300)
#define CLASS_1_0C0F9366B7D3B580_CLONE_OFFSET UNITYSDK_OFFSET(0x1BCECE10)
#define CLASS_1_0C0F9366B7D3B580_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BCECF50)
#define CLASS_1_0C0F9366B7D3B580_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BCECEF0)
#define CLASS_1_0C0F9366B7D3B580_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BCECFF0)
#define CLASS_1_0C0F9366B7D3B580_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BCED690)
#define CLASS_1_0C0F9366B7D3B580_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BCED5C0)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1BCECEA0)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1BCECEC0)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1BCECE80)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1BCECC90)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1BCECE70)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1BCECEE0)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1BCECEB0)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1BCECED0)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1BCECE90)
#define CLASS_1_0C0F9366B7D3B580_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1BCECE60)
#define CLASS_1_0C0F9366B7D3B580_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BCECCF0)
#define CLASS_1_0C0F9366B7D3B580_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BCED080)
#define CLASS_1_0C0F9366B7D3B580_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BCED0E0)
#define CLASS_1_0C0F9366B7D3B580__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCED7B0)
#define CLASS_1_0C0F9366B7D3B580__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BCECD50)
#define CLASS_1_0C0F9366B7D3B580__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCECD00)

inline static constexpr unsigned int Class_1_0C0F9366B7D3B580_TypeDefinitionIndex = 24662;

class Class_1_0C0F9366B7D3B580 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_23C1B7E6B450FFB8_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_23C1B7E6B450FFB8_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C0F9366B7D3B580_TypeDefinitionIndex)->GetStaticField(0xDB10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_0C0F9366B7D3B580*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0C0F9366B7D3B580*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C0F9366B7D3B580_TypeDefinitionIndex)->GetStaticField(0xDB18);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8_3*>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::Enum_3_01618AD0437C8486_1 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0C0F9366B7D3B580* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C0F9366B7D3B580*))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0C0F9366B7D3B580*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0C0F9366B7D3B580*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0C0F9366B7D3B580* Clone()
	{
		return ((::Class_1_0C0F9366B7D3B580*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_CLONE_OFFSET))(this);
	}

	::Enum_3_01618AD0437C8486_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_1))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0C0F9366B7D3B580* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0C0F9366B7D3B580*))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0C0F9366B7D3B580* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C0F9366B7D3B580*))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0C0F9366B7D3B580_MERGEFROM_1_OFFSET))(this, a1);
	}
};
