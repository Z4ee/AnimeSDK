#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18C00C8FB77B0B39;
class Class_1_93AA40F7202497D0_11;
class Class_1_FDFA365FE186E8F2_15;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9A024DE866AAE534_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4288F0)
#define CLASS_1_9A024DE866AAE534_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E427740)
#define CLASS_1_9A024DE866AAE534_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E427AD0)
#define CLASS_1_9A024DE866AAE534_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E427A70)
#define CLASS_1_9A024DE866AAE534_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E427D20)
#define CLASS_1_9A024DE866AAE534_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E429430)
#define CLASS_1_9A024DE866AAE534_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E429190)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x1E4279F0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x1E427A10)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_12_OFFSET UNITYSDK_OFFSET(0x1E427A50)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E427870)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E4278C0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E4278E0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1E427930)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1E427950)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1E427970)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1E427990)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1E4279B0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1E4279D0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E427790)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1E427820)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E4277C0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1E427810)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E4277B0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1E427900)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E4278A0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E4273A0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E427A30)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1E427A40)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E427920)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E427890)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x1E427A00)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x1E427A20)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_12_OFFSET UNITYSDK_OFFSET(0x1E427A60)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E427880)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E4278D0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E4278F0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1E427940)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1E427960)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1E427980)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1E4279A0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1E4279C0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1E4279E0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E4277A0)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1E427910)
#define CLASS_1_9A024DE866AAE534_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E4278B0)
#define CLASS_1_9A024DE866AAE534_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E427400)
#define CLASS_1_9A024DE866AAE534_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E428160)
#define CLASS_1_9A024DE866AAE534_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4281C0)
#define CLASS_1_9A024DE866AAE534_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E429910)
#define CLASS_1_9A024DE866AAE534_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E427550)
#define CLASS_1_9A024DE866AAE534_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E427410)

inline static constexpr unsigned int Class_1_9A024DE866AAE534_1_TypeDefinitionIndex = 28608;

class Class_1_9A024DE866AAE534_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9A024DE866AAE534_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9A024DE866AAE534_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A024DE866AAE534_1_TypeDefinitionIndex)->GetStaticField(0xA7A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EAHNPGPKIPK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A024DE866AAE534_1_TypeDefinitionIndex)->GetStaticField(0xA7A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_18C00C8FB77B0B39*>** StaticGet_PNMKGCHGFML()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_18C00C8FB77B0B39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A024DE866AAE534_1_TypeDefinitionIndex)->GetStaticField(0xA7B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DGDMCPMNHPE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A024DE866AAE534_1_TypeDefinitionIndex)->GetStaticField(0xA7B8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_COOIKKHKLDK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A024DE866AAE534_1_TypeDefinitionIndex)->GetStaticField(0xA7C0);
	}
	// static const ::System::Int32 PPGLPHFCDBP = 0xD; // 0x0
	// static const ::System::Int32 HGGNFHDNBPJ = 0x393; // 0x0
	// static const ::System::Int32 LNHONCIOHDH = 0x23A; // 0x0
	// static const ::System::Int32 DNCOOFMDDAM = 0x5; // 0x0
	// static const ::System::Int32 LFKIHOHCPJM = 0xB; // 0x0
	// static const ::System::Int32 KEJBMPCHIIP = 0x2AC; // 0x0
	// static const ::System::Int32 PKEHLLJOECB = 0x6; // 0x0
	// static const ::System::Int32 CIBDKLLNDMJ = 0x4; // 0x0
	// static const ::System::Int32 OGIBHKFCIHH = 0x616; // 0x0
	// static const ::System::Int32 HHFDIKJCEEF = 0x5BE; // 0x0
	// static const ::System::Int32 OBAKBOMBPIG = 0xF; // 0x0
	// static const ::System::Int32 CJPKGKMILHB = 0x7; // 0x0
	// static const ::System::Int32 FJMBADCGOHL = 0x9; // 0x0
	// static const ::System::Int32 CILIEHKDANJ = 0xA; // 0x0
	// static const ::System::Int32 KKLBCDHHFPE = 0x1; // 0x0
	// static const ::System::Int32 HHIHEPBFADA = 0xC; // 0x0
	// static const ::System::Int32 EPPBJAMAMGC = 0xE; // 0x0
	// static const ::System::Int32 MDLMGLOMONM = 0x2; // 0x0
	// static const ::System::Int32 NPIAEFIGGNF = 0x36B; // 0x0
	// static const ::System::Int32 FGFBDLFAMHM = 0x8; // 0x0
	// static const ::System::Int32 DEJLFDDHBFN = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PGDMDMEFJAI; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::String* CEABOEGAKAE; // 0x20
	::System::String* ECGFKHFGCIP; // 0x28
	::Class_1_93AA40F7202497D0_11* FPPBAMLKLPD; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>* LGHDGPNJLLG; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFCAMGHCFPH; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EIHHAEMAPLK; // 0x48
	::Class_1_FDFA365FE186E8F2_15* NOIGKBNHLMM; // 0x50
	::System::UInt32 PHELPHNGELD; // 0x58
	::System::UInt32 GOFDHHHPNEP; // 0x5C
	::System::UInt32 LHJILAOOJMF; // 0x60
	::System::UInt32 NKCMDAFCBPL; // 0x64
	::System::UInt32 LMHKMEEDEFG; // 0x68
	::System::UInt32 EOIOGEJFELB; // 0x6C
	::System::UInt32 APCDLEBMHJH; // 0x70
	::System::UInt32 GNFLFBNCJJP; // 0x74
	::System::UInt32 IEGGKELPNMJ; // 0x78
	::System::UInt32 AIELFEMPBEN; // 0x7C
	::System::UInt32 NLNMMEKPHCJ; // 0x80
	::System::UInt32 EELMFDHLPMK; // 0x84
	::System::UInt32 CBHKDDOFPMO; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9A024DE866AAE534_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A024DE866AAE534_1*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9A024DE866AAE534_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9A024DE866AAE534_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9A024DE866AAE534_1* Clone()
	{
		return ((::Class_1_9A024DE866AAE534_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_FDFA365FE186E8F2_15* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FDFA365FE186E8F2_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FDFA365FE186E8F2_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_15*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Class_1_93AA40F7202497D0_11* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_93AA40F7202497D0_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_93AA40F7202497D0_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_11*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_12()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_02A3D10A9D535169_12_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_12(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_METHOD_1_7786DC814C2FC3BE_12_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9A024DE866AAE534_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9A024DE866AAE534_1*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9A024DE866AAE534_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A024DE866AAE534_1*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
