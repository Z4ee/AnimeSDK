#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_57;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_325963497EC7CBB4_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A571450)
#define CLASS_1_325963497EC7CBB4_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A570F70)
#define CLASS_1_325963497EC7CBB4_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A571080)
#define CLASS_1_325963497EC7CBB4_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A571050)
#define CLASS_1_325963497EC7CBB4_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A571170)
#define CLASS_1_325963497EC7CBB4_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A571750)
#define CLASS_1_325963497EC7CBB4_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A571680)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A570FE0)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A571010)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A570FC0)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A570FA0)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A571000)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A570E10)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A570FF0)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A571020)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A570FD0)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A570FB0)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A571040)
#define CLASS_1_325963497EC7CBB4_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A571030)
#define CLASS_1_325963497EC7CBB4_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A570E40)
#define CLASS_1_325963497EC7CBB4_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5712A0)
#define CLASS_1_325963497EC7CBB4_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A571300)
#define CLASS_1_325963497EC7CBB4_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5718C0)
#define CLASS_1_325963497EC7CBB4_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A570EA0)
#define CLASS_1_325963497EC7CBB4_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A570E50)

inline static constexpr unsigned int Class_1_325963497EC7CBB4_3_TypeDefinitionIndex = 31477;

class Class_1_325963497EC7CBB4_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_325963497EC7CBB4_3_TypeDefinitionIndex)->GetStaticField(0x14970);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_325963497EC7CBB4_3*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_325963497EC7CBB4_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_325963497EC7CBB4_3_TypeDefinitionIndex)->GetStaticField(0x14978);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::Class_1_4BC858D7C27E10ED_57* Field_1_10; // 0x20
	::System::Boolean Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::UInt32 Field_1_13; // 0x30
	::System::UInt32 Field_1_14; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_325963497EC7CBB4_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_325963497EC7CBB4_3*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_325963497EC7CBB4_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_325963497EC7CBB4_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_325963497EC7CBB4_3* Clone()
	{
		return ((::Class_1_325963497EC7CBB4_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_CLONE_OFFSET))(this);
	}

	::Class_1_4BC858D7C27E10ED_57* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4BC858D7C27E10ED_57*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4BC858D7C27E10ED_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_57*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_325963497EC7CBB4_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_325963497EC7CBB4_3*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_325963497EC7CBB4_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_325963497EC7CBB4_3*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_325963497EC7CBB4_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
