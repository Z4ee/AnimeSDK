#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_16.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_19;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_234D295497DE49DD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18081420)
#define CLASS_1_234D295497DE49DD_CLONE_OFFSET UNITYSDK_OFFSET(0x18080E20)
#define CLASS_1_234D295497DE49DD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18080F50)
#define CLASS_1_234D295497DE49DD_EQUALS_OFFSET UNITYSDK_OFFSET(0x18080EF0)
#define CLASS_1_234D295497DE49DD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18081060)
#define CLASS_1_234D295497DE49DD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180817A0)
#define CLASS_1_234D295497DE49DD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180816C0)
#define CLASS_1_234D295497DE49DD_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18080ED0)
#define CLASS_1_234D295497DE49DD_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18080EA0)
#define CLASS_1_234D295497DE49DD_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18080E80)
#define CLASS_1_234D295497DE49DD_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18080E90)
#define CLASS_1_234D295497DE49DD_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18080EC0)
#define CLASS_1_234D295497DE49DD_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18080EE0)
#define CLASS_1_234D295497DE49DD_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18080EB0)
#define CLASS_1_234D295497DE49DD_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18080E70)
#define CLASS_1_234D295497DE49DD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18080C40)
#define CLASS_1_234D295497DE49DD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18081230)
#define CLASS_1_234D295497DE49DD_WRITETO_OFFSET UNITYSDK_OFFSET(0x18081290)
#define CLASS_1_234D295497DE49DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x18081910)
#define CLASS_1_234D295497DE49DD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18080CE0)
#define CLASS_1_234D295497DE49DD__CTOR_OFFSET UNITYSDK_OFFSET(0x18080C50)

inline static constexpr unsigned int Class_1_234D295497DE49DD_TypeDefinitionIndex = 24479;

class Class_1_234D295497DE49DD : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_19*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_234D295497DE49DD_TypeDefinitionIndex)->GetStaticField(0x32080);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_234D295497DE49DD_TypeDefinitionIndex)->GetStaticField(0x32088);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_19*>* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x20
	::System::UInt32 Field_1_7; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::Enum_3_4608E37A1B3D374A_16 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_234D295497DE49DD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_234D295497DE49DD*))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_234D295497DE49DD* Clone()
	{
		return ((::Class_1_234D295497DE49DD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_16 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_16))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_19*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_19*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_234D295497DE49DD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_234D295497DE49DD*))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_234D295497DE49DD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_234D295497DE49DD*))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_234D295497DE49DD_MERGEFROM_1_OFFSET))(this, a1);
	}
};
