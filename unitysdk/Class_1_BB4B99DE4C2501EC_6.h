#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0273F17990DD7925;
class Class_1_24BE2DDB450DE83C;
class Class_1_34EDFF98D9D73F16_1;
class Class_1_7FF19F6206AF6DD7_82;
class Class_1_83178EB088CAD885_10;
class Class_1_D17272E82AE804C2_1044;
class Class_1_F91AD0C5A85E4AFA_33;
class Class_1_FF220487FAB45279_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class String; }

#define CLASS_1_BB4B99DE4C2501EC_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBC1600)
#define CLASS_1_BB4B99DE4C2501EC_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBC0520)
#define CLASS_1_BB4B99DE4C2501EC_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBC07D0)
#define CLASS_1_BB4B99DE4C2501EC_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBC07A0)
#define CLASS_1_BB4B99DE4C2501EC_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBC0B40)
#define CLASS_1_BB4B99DE4C2501EC_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBC2330)
#define CLASS_1_BB4B99DE4C2501EC_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBC1F20)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CBC0580)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CBC05C0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1CBC05E0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1CBC0620)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1CBC0670)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1CBC06B0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1CBC06D0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1CBC06F0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1CBC0770)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CBC0550)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1CBC0570)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CBC0690)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1CBC0720)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CBC05A0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1CBC0750)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1CBC0760)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CBC0610)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CBC00C0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1CBC0650)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1CBC0710)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1CBC0790)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CBC0600)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CBC0590)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CBC05D0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1CBC05F0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1CBC0630)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1CBC0680)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1CBC06C0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1CBC06E0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1CBC0700)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1CBC0780)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CBC0560)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CBC06A0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1CBC0730)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CBC05B0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1CBC0740)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_D7B5771D20F18855_OFFSET UNITYSDK_OFFSET(0x1CBC0660)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x1CBC0640)
#define CLASS_1_BB4B99DE4C2501EC_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBC00F0)
#define CLASS_1_BB4B99DE4C2501EC_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBC0EB0)
#define CLASS_1_BB4B99DE4C2501EC_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBC0F10)
#define CLASS_1_BB4B99DE4C2501EC_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBC2950)
#define CLASS_1_BB4B99DE4C2501EC_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBC0290)
#define CLASS_1_BB4B99DE4C2501EC_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC0100)

inline static constexpr unsigned int Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex = 32551;

class Class_1_BB4B99DE4C2501EC_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_0273F17990DD7925*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_0273F17990DD7925*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_33*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_33*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FA8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FB0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FB8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_34EDFF98D9D73F16_1*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_34EDFF98D9D73F16_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FC8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_82*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_82*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FD8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_BB4B99DE4C2501EC_6*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BB4B99DE4C2501EC_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FE0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D17272E82AE804C2_1044*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D17272E82AE804C2_1044*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x53FE8);
	}
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x792; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x3C6; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x370; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x4DB; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x67C; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x3DD; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x453; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x5D8; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x644; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x574; // 0x0
	// static const ::System::Int32 Field_1_32 = 0xC; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Field_1_33; // 0x10
	::Class_1_24BE2DDB450DE83C* Field_1_34; // 0x18
	::Class_1_83178EB088CAD885_10* Field_1_35; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_82*>* Field_1_36; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_34EDFF98D9D73F16_1*>* Field_1_37; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_38; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Field_1_39; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>* Field_1_40; // 0x48
	::Class_1_FF220487FAB45279_6* Field_1_41; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0273F17990DD7925*>* Field_1_42; // 0x58
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_43; // 0x60
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1044*>* Field_1_44; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_45; // 0x70
	::System::UInt32 Field_1_46; // 0x78
	::System::UInt32 Field_1_47; // 0x7C
	::System::UInt32 Field_1_48; // 0x80
	::System::UInt32 Field_1_49; // 0x84
	::System::UInt32 Field_1_50; // 0x88
	::System::UInt32 Field_1_51; // 0x8C
	::System::UInt32 Field_1_52; // 0x90
	::System::UInt32 Field_1_53; // 0x94
	::System::UInt32 Field_1_54; // 0x98
	::System::UInt32 Field_1_55; // 0x9C
	::System::UInt64 Field_1_56; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BB4B99DE4C2501EC_6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BB4B99DE4C2501EC_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BB4B99DE4C2501EC_6* Clone()
	{
		return ((::Class_1_BB4B99DE4C2501EC_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1044*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1044*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_83178EB088CAD885_10* Method_1_24748FC20F375725()
	{
		return ((::Class_1_83178EB088CAD885_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_83178EB088CAD885_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83178EB088CAD885_10*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_34EDFF98D9D73F16_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_34EDFF98D9D73F16_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Method_1_D7B5771D20F18855()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_D7B5771D20F18855_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Class_1_FF220487FAB45279_6* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FF220487FAB45279_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FF220487FAB45279_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_6*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0273F17990DD7925*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0273F17990DD7925*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Class_1_24BE2DDB450DE83C* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_24BE2DDB450DE83C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_24BE2DDB450DE83C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24BE2DDB450DE83C*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_82*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_82*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
