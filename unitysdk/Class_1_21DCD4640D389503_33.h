#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18C00C8FB77B0B39;
class Class_1_93AA40F7202497D0_11;
class Class_1_FDFA365FE186E8F2_14;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_33_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB046B0)
#define CLASS_1_21DCD4640D389503_33_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB03560)
#define CLASS_1_21DCD4640D389503_33_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB038F0)
#define CLASS_1_21DCD4640D389503_33_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB03890)
#define CLASS_1_21DCD4640D389503_33_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB03AF0)
#define CLASS_1_21DCD4640D389503_33_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB051D0)
#define CLASS_1_21DCD4640D389503_33_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB04F30)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x1EB037F0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x1EB03840)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_12_OFFSET UNITYSDK_OFFSET(0x1EB03870)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1EB035F0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1EB03610)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1EB03650)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1EB036D0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1EB036F0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1EB03710)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1EB03790)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1EB037B0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1EB037D0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EB035D0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1EB03740)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1EB03680)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1EB03730)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1EB03670)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1EB03820)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EB03630)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EB031C0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1EB035C0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1EB03860)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EB035B0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1EB03810)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x1EB03800)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x1EB03850)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_12_OFFSET UNITYSDK_OFFSET(0x1EB03880)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1EB03600)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1EB03620)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1EB03660)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1EB036E0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1EB03700)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1EB03720)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1EB037A0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1EB037C0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1EB037E0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EB035E0)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1EB03830)
#define CLASS_1_21DCD4640D389503_33_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1EB03640)
#define CLASS_1_21DCD4640D389503_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB03220)
#define CLASS_1_21DCD4640D389503_33_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB03F20)
#define CLASS_1_21DCD4640D389503_33_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB03F80)
#define CLASS_1_21DCD4640D389503_33__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB056C0)
#define CLASS_1_21DCD4640D389503_33__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB03370)
#define CLASS_1_21DCD4640D389503_33__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB03230)

inline static constexpr unsigned int Class_1_21DCD4640D389503_33_TypeDefinitionIndex = 29133;

class Class_1_21DCD4640D389503_33 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DGDMCPMNHPE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_33_TypeDefinitionIndex)->GetStaticField(0x65580);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_18C00C8FB77B0B39*>** StaticGet_PNMKGCHGFML()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_18C00C8FB77B0B39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_33_TypeDefinitionIndex)->GetStaticField(0x65588);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EAHNPGPKIPK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_33_TypeDefinitionIndex)->GetStaticField(0x65590);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_33*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_33*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_33_TypeDefinitionIndex)->GetStaticField(0x65598);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_COOIKKHKLDK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_33_TypeDefinitionIndex)->GetStaticField(0x655A0);
	}
	// static const ::System::Int32 HHFDIKJCEEF = 0x338; // 0x0
	// static const ::System::Int32 FGFBDLFAMHM = 0x2; // 0x0
	// static const ::System::Int32 EPPBJAMAMGC = 0x1; // 0x0
	// static const ::System::Int32 PKEHLLJOECB = 0x6; // 0x0
	// static const ::System::Int32 DNCOOFMDDAM = 0xB; // 0x0
	// static const ::System::Int32 OGIBHKFCIHH = 0x11D; // 0x0
	// static const ::System::Int32 OBAKBOMBPIG = 0x4; // 0x0
	// static const ::System::Int32 LNHONCIOHDH = 0xFC; // 0x0
	// static const ::System::Int32 HHIHEPBFADA = 0x9; // 0x0
	// static const ::System::Int32 KKLBCDHHFPE = 0xE; // 0x0
	// static const ::System::Int32 DEJLFDDHBFN = 0x7; // 0x0
	// static const ::System::Int32 HGGNFHDNBPJ = 0x400; // 0x0
	// static const ::System::Int32 PPGLPHFCDBP = 0xA; // 0x0
	// static const ::System::Int32 MDLMGLOMONM = 0xF; // 0x0
	// static const ::System::Int32 CIBDKLLNDMJ = 0x8; // 0x0
	// static const ::System::Int32 FJMBADCGOHL = 0x3; // 0x0
	// static const ::System::Int32 LFKIHOHCPJM = 0x5; // 0x0
	// static const ::System::Int32 KEJBMPCHIIP = 0x644; // 0x0
	// static const ::System::Int32 CJPKGKMILHB = 0xC; // 0x0
	// static const ::System::Int32 NPIAEFIGGNF = 0x5F6; // 0x0
	// static const ::System::Int32 CILIEHKDANJ = 0xD; // 0x0
	::System::String* CEABOEGAKAE; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>* LGHDGPNJLLG; // 0x18
	::System::String* ECGFKHFGCIP; // 0x20
	::Class_1_FDFA365FE186E8F2_14* NOIGKBNHLMM; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFCAMGHCFPH; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EIHHAEMAPLK; // 0x38
	::Class_1_93AA40F7202497D0_11* FPPBAMLKLPD; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PGDMDMEFJAI; // 0x48
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x50
	::System::UInt32 GOFDHHHPNEP; // 0x58
	::System::UInt32 GNFLFBNCJJP; // 0x5C
	::System::UInt32 NLNMMEKPHCJ; // 0x60
	::System::UInt32 IEGGKELPNMJ; // 0x64
	::System::UInt32 EOIOGEJFELB; // 0x68
	::System::UInt32 LMHKMEEDEFG; // 0x6C
	::System::UInt32 PHELPHNGELD; // 0x70
	::System::UInt32 CBHKDDOFPMO; // 0x74
	::System::UInt32 APCDLEBMHJH; // 0x78
	::System::UInt32 EELMFDHLPMK; // 0x7C
	::System::UInt32 AIELFEMPBEN; // 0x80
	::System::UInt32 LHJILAOOJMF; // 0x84
	::System::UInt32 NKCMDAFCBPL; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_33*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_33*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_33*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_33* Clone()
	{
		return ((::Class_1_21DCD4640D389503_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Class_1_93AA40F7202497D0_11* Method_1_24748FC20F375725()
	{
		return ((::Class_1_93AA40F7202497D0_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_93AA40F7202497D0_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_11*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_FDFA365FE186E8F2_14* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FDFA365FE186E8F2_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FDFA365FE186E8F2_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_14*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_12()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_02A3D10A9D535169_12_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_12(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_METHOD_1_7786DC814C2FC3BE_12_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_33*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_33*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_33_MERGEFROM_1_OFFSET))(this, a1);
	}
};
