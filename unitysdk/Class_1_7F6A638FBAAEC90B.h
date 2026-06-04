#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7F6A638FBAAEC90B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A1E3230)
#define CLASS_1_7F6A638FBAAEC90B_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1E2D40)
#define CLASS_1_7F6A638FBAAEC90B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1E2E00)
#define CLASS_1_7F6A638FBAAEC90B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1E2DD0)
#define CLASS_1_7F6A638FBAAEC90B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1E2F00)
#define CLASS_1_7F6A638FBAAEC90B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1E34F0)
#define CLASS_1_7F6A638FBAAEC90B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A1E3420)
#define CLASS_1_7F6A638FBAAEC90B_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A1E2DB0)
#define CLASS_1_7F6A638FBAAEC90B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A1E2D80)
#define CLASS_1_7F6A638FBAAEC90B_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A1E2D70)
#define CLASS_1_7F6A638FBAAEC90B_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A1E2B90)
#define CLASS_1_7F6A638FBAAEC90B_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A1E2DA0)
#define CLASS_1_7F6A638FBAAEC90B_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A1E2DC0)
#define CLASS_1_7F6A638FBAAEC90B_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A1E2D90)
#define CLASS_1_7F6A638FBAAEC90B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1E2BC0)
#define CLASS_1_7F6A638FBAAEC90B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1E30B0)
#define CLASS_1_7F6A638FBAAEC90B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1E3110)
#define CLASS_1_7F6A638FBAAEC90B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E3640)
#define CLASS_1_7F6A638FBAAEC90B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1E2C40)
#define CLASS_1_7F6A638FBAAEC90B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E2BD0)

inline static constexpr unsigned int Class_1_7F6A638FBAAEC90B_TypeDefinitionIndex = 25330;

class Class_1_7F6A638FBAAEC90B : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_TypeDefinitionIndex)->GetStaticField(0x2B710);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_TypeDefinitionIndex)->GetStaticField(0x2B718);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_668FE281FA72D3E8_4*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_668FE281FA72D3E8_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_TypeDefinitionIndex)->GetStaticField(0x2B720);
	}
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7F6A638FBAAEC90B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7F6A638FBAAEC90B* Clone()
	{
		return ((::Class_1_7F6A638FBAAEC90B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7F6A638FBAAEC90B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7F6A638FBAAEC90B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
