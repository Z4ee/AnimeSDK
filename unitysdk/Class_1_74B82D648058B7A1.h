#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_578;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_74B82D648058B7A1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9359C0)
#define CLASS_1_74B82D648058B7A1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A935450)
#define CLASS_1_74B82D648058B7A1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A935530)
#define CLASS_1_74B82D648058B7A1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A935500)
#define CLASS_1_74B82D648058B7A1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A935640)
#define CLASS_1_74B82D648058B7A1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A935D10)
#define CLASS_1_74B82D648058B7A1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A935C30)
#define CLASS_1_74B82D648058B7A1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A9354A0)
#define CLASS_1_74B82D648058B7A1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A935480)
#define CLASS_1_74B82D648058B7A1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A9354F0)
#define CLASS_1_74B82D648058B7A1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A9354C0)
#define CLASS_1_74B82D648058B7A1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A9352A0)
#define CLASS_1_74B82D648058B7A1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A9354D0)
#define CLASS_1_74B82D648058B7A1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A9354B0)
#define CLASS_1_74B82D648058B7A1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A935490)
#define CLASS_1_74B82D648058B7A1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A9354E0)
#define CLASS_1_74B82D648058B7A1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9352D0)
#define CLASS_1_74B82D648058B7A1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A935800)
#define CLASS_1_74B82D648058B7A1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A935860)
#define CLASS_1_74B82D648058B7A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A935E70)
#define CLASS_1_74B82D648058B7A1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A935350)
#define CLASS_1_74B82D648058B7A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9352E0)

inline static constexpr unsigned int Class_1_74B82D648058B7A1_TypeDefinitionIndex = 28920;

class Class_1_74B82D648058B7A1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_74B82D648058B7A1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_74B82D648058B7A1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74B82D648058B7A1_TypeDefinitionIndex)->GetStaticField(0x62DA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_578*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_578*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74B82D648058B7A1_TypeDefinitionIndex)->GetStaticField(0x62DA8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74B82D648058B7A1_TypeDefinitionIndex)->GetStaticField(0x62DB0);
	}
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_578*>* Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::Enum_3_DB663931210BBC27_28 Field_1_12; // 0x2C
	::System::UInt32 Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_74B82D648058B7A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_74B82D648058B7A1*))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_74B82D648058B7A1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_74B82D648058B7A1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_74B82D648058B7A1* Clone()
	{
		return ((::Class_1_74B82D648058B7A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_578*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_578*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_28 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_28(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_74B82D648058B7A1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_74B82D648058B7A1*))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_74B82D648058B7A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_74B82D648058B7A1*))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_74B82D648058B7A1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
