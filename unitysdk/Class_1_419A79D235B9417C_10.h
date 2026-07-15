#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_52.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_73;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_419A79D235B9417C_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C469080)
#define CLASS_1_419A79D235B9417C_10_CLONE_OFFSET UNITYSDK_OFFSET(0x1C468A00)
#define CLASS_1_419A79D235B9417C_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C468B10)
#define CLASS_1_419A79D235B9417C_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C468AE0)
#define CLASS_1_419A79D235B9417C_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C468C70)
#define CLASS_1_419A79D235B9417C_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C469500)
#define CLASS_1_419A79D235B9417C_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C4693D0)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C468AC0)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C468A50)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1C468AB0)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C468A40)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C4688A0)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1C468A90)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1C468A80)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C468A70)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C468AD0)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C468A60)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C468A30)
#define CLASS_1_419A79D235B9417C_10_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1C468AA0)
#define CLASS_1_419A79D235B9417C_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C4688D0)
#define CLASS_1_419A79D235B9417C_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C468D80)
#define CLASS_1_419A79D235B9417C_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C468DE0)
#define CLASS_1_419A79D235B9417C_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C469670)
#define CLASS_1_419A79D235B9417C_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C468920)
#define CLASS_1_419A79D235B9417C_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4688E0)

inline static constexpr unsigned int Class_1_419A79D235B9417C_10_TypeDefinitionIndex = 30989;

class Class_1_419A79D235B9417C_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_73*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_73*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_419A79D235B9417C_10_TypeDefinitionIndex)->GetStaticField(0xFE10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_419A79D235B9417C_10*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_419A79D235B9417C_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_419A79D235B9417C_10_TypeDefinitionIndex)->GetStaticField(0xFE18);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_73*>* Field_1_8; // 0x10
	::Proto::ItemList* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt64 Field_1_12; // 0x30
	::Enum_3_DB663931210BBC27_52 Field_1_13; // 0x38
	::System::UInt32 Field_1_14; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_419A79D235B9417C_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_10*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_419A79D235B9417C_10*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_419A79D235B9417C_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_419A79D235B9417C_10* Clone()
	{
		return ((::Class_1_419A79D235B9417C_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_52 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_52(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_52 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_52))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_73*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_73*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_419A79D235B9417C_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_419A79D235B9417C_10*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_419A79D235B9417C_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_10*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_419A79D235B9417C_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
