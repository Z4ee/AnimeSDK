#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_39;
class Class_1_93AA40F7202497D0_12;
class Class_1_DB9F32FCA772D309_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FB0633E85BD6CF8E_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x195EE020)
#define CLASS_1_FB0633E85BD6CF8E_7_CLONE_OFFSET UNITYSDK_OFFSET(0x195ECFE0)
#define CLASS_1_FB0633E85BD6CF8E_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x195ED3F0)
#define CLASS_1_FB0633E85BD6CF8E_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x195ED390)
#define CLASS_1_FB0633E85BD6CF8E_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195ED670)
#define CLASS_1_FB0633E85BD6CF8E_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x195EECB0)
#define CLASS_1_FB0633E85BD6CF8E_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x195EE980)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x195ED310)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x195ED350)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x195ED080)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x195ED0A0)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x195ED0C0)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x195ED0F0)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x195ED110)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x195ED130)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x195ED150)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x195ED170)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x195ED2F0)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x195ED060)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x195ED240)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x195ED190)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x195ED330)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x195ED040)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x195ECC60)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x195ED370)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x195ED380)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x195ED030)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x195ED0E0)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x195ED320)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x195ED360)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x195ED090)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x195ED0B0)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x195ED0D0)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x195ED100)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x195ED120)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x195ED140)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x195ED160)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x195ED180)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x195ED300)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x195ED070)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x195ED340)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x195ED050)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x195ED250)
#define CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x195ED1A0)
#define CLASS_1_FB0633E85BD6CF8E_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x195ECCC0)
#define CLASS_1_FB0633E85BD6CF8E_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195EDB50)
#define CLASS_1_FB0633E85BD6CF8E_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x195EDBB0)
#define CLASS_1_FB0633E85BD6CF8E_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x195EF240)
#define CLASS_1_FB0633E85BD6CF8E_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195ECE00)
#define CLASS_1_FB0633E85BD6CF8E_7__CTOR_OFFSET UNITYSDK_OFFSET(0x195ECCD0)

inline static constexpr unsigned int Class_1_FB0633E85BD6CF8E_7_TypeDefinitionIndex = 27415;

class Class_1_FB0633E85BD6CF8E_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_41()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0633E85BD6CF8E_7_TypeDefinitionIndex)->GetStaticField(0x56B70);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0633E85BD6CF8E_7_TypeDefinitionIndex)->GetStaticField(0x56B78);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_44()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0633E85BD6CF8E_7_TypeDefinitionIndex)->GetStaticField(0x56B80);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DB9F32FCA772D309_2*>** StaticGet_Field_1_16()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DB9F32FCA772D309_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0633E85BD6CF8E_7_TypeDefinitionIndex)->GetStaticField(0x56B88);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_FB0633E85BD6CF8E_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FB0633E85BD6CF8E_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0633E85BD6CF8E_7_TypeDefinitionIndex)->GetStaticField(0x56B90);
	}
	// static const ::System::Int32 Field_1_2 = 0x6CD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x21E; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x14E; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x21B; // 0x0
	// static const ::System::Int32 Field_1_32 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x124; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x369; // 0x0
	// static const ::System::Int32 Field_1_43 = 0x8; // 0x0
	::System::String* Field_1_29; // 0x10
	::Class_1_455008579EB95638_39* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_42; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_2*>* Field_1_17; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x38
	::Class_1_93AA40F7202497D0_12* Field_1_37; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_45; // 0x48
	::System::String* Field_1_31; // 0x50
	::System::UInt32 Field_1_19; // 0x58
	::System::UInt32 Field_1_33; // 0x5C
	::System::UInt32 Field_1_10; // 0x60
	::System::UInt32 Field_1_23; // 0x64
	::System::UInt32 Field_1_14; // 0x68
	::System::UInt32 Field_1_8; // 0x6C
	::System::UInt32 Field_1_39; // 0x70
	::System::UInt32 Field_1_27; // 0x74
	::System::UInt32 Field_1_21; // 0x78
	::System::UInt32 Field_1_25; // 0x7C
	::System::UInt32 Field_1_35; // 0x80
	::System::UInt32 Field_1_12; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FB0633E85BD6CF8E_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_7*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FB0633E85BD6CF8E_7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FB0633E85BD6CF8E_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FB0633E85BD6CF8E_7* Clone()
	{
		return ((::Class_1_FB0633E85BD6CF8E_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_455008579EB95638_39* Method_1_24748FC20F375725()
	{
		return ((::Class_1_455008579EB95638_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_455008579EB95638_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_39*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::Class_1_93AA40F7202497D0_12* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_93AA40F7202497D0_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_93AA40F7202497D0_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_12*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FB0633E85BD6CF8E_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_7*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FB0633E85BD6CF8E_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_7*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB0633E85BD6CF8E_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
