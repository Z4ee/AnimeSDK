#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_21DCD4640D389503_8;
class Class_1_45BB92167AED63A0_53;
class Class_1_590EC2E573209D50;
class Class_1_766E1CF11E204F43_12;
class Class_1_7E1E05C17C895270;
class Class_1_C086E47345F86771_22;
class Class_1_D17272E82AE804C2_1163;
class Class_1_D17272E82AE804C2_1164;
class Class_1_D17272E82AE804C2_611;
class Class_1_D40936EF3BF54118_100;
class Class_1_E14A0A1A8B1F847C_2;
class Class_1_EBB10EC01CCC4716_12;
class Class_1_F1F83A16E5B8B459_9;
class Class_1_FC8BF52F067E8047;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_6954D6F458B1D0FF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAFB240)
#define CLASS_1_6954D6F458B1D0FF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAFA0E0)
#define CLASS_1_6954D6F458B1D0FF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAFA300)
#define CLASS_1_6954D6F458B1D0FF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAFA2D0)
#define CLASS_1_6954D6F458B1D0FF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAFA6C0)
#define CLASS_1_6954D6F458B1D0FF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAFBF50)
#define CLASS_1_6954D6F458B1D0FF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAFB790)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1EAFA170)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1EAFA190)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x1EAFA1E0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x1EAFA200)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_5_OFFSET UNITYSDK_OFFSET(0x1EAFA240)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_6_OFFSET UNITYSDK_OFFSET(0x1EAFA270)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EAFA140)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1EAFA130)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1EAFA2C0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EAFA1C0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EAF9A30)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1EAFA2B0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1EAFA2A0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1EAFA120)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1EAFA160)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1EAFA1B0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x1EAFA1D0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x1EAFA220)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x1EAFA230)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_7_OFFSET UNITYSDK_OFFSET(0x1EAFA260)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_8_OFFSET UNITYSDK_OFFSET(0x1EAFA290)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1EAFA110)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1EAFA180)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1EAFA1A0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x1EAFA1F0)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_4_OFFSET UNITYSDK_OFFSET(0x1EAFA210)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_5_OFFSET UNITYSDK_OFFSET(0x1EAFA250)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_6_OFFSET UNITYSDK_OFFSET(0x1EAFA280)
#define CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1EAFA150)
#define CLASS_1_6954D6F458B1D0FF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF9A60)
#define CLASS_1_6954D6F458B1D0FF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAFABF0)
#define CLASS_1_6954D6F458B1D0FF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAFAC50)
#define CLASS_1_6954D6F458B1D0FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAFC740)
#define CLASS_1_6954D6F458B1D0FF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF9C70)
#define CLASS_1_6954D6F458B1D0FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF9A70)

inline static constexpr unsigned int Class_1_6954D6F458B1D0FF_TypeDefinitionIndex = 34510;

class Class_1_6954D6F458B1D0FF : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6954D6F458B1D0FF*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6954D6F458B1D0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65110);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_DILBHOCEONI()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65118);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PJPBAKMCNII()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65120);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_12*>** StaticGet_GPNHFNLKNEK()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65128);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_22*>** StaticGet_DHPCBMCLEAA()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65130);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FC8BF52F067E8047*>** StaticGet_OPBFCGLMMFI()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FC8BF52F067E8047*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65138);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MFPADBNOCMP()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65140);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E14A0A1A8B1F847C_2*>** StaticGet_IAEKKFPPGGJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E14A0A1A8B1F847C_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65148);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_590EC2E573209D50*>** StaticGet_LBEBIPBKKAK()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_590EC2E573209D50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65150);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_22*>** StaticGet_LAKNCPDKEGI()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65158);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_611*>** StaticGet_DIIBMEKGNHP()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_611*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65160);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_53*>** StaticGet_CJGAKLIBMBB()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_53*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65168);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1164*>** StaticGet_MAEKOMINFGO()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1164*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6954D6F458B1D0FF_TypeDefinitionIndex)->GetStaticField(0x65170);
	}
	// static const ::System::Int32 JIGPDBMIHPC = 0x6DD; // 0x0
	// static const ::System::Int32 IANADDPANHC = 0x11F; // 0x0
	// static const ::System::Int32 ILIAICPNDIK = 0x6D3; // 0x0
	// static const ::System::Int32 HCPJIHCELIM = 0xC; // 0x0
	// static const ::System::Int32 IKHKFKFIGBC = 0x5; // 0x0
	// static const ::System::Int32 GNCJCIHLOJC = 0x30D; // 0x0
	// static const ::System::Int32 HLCOBEOECOG = 0x6; // 0x0
	// static const ::System::Int32 DPMCMBIBIDO = 0x315; // 0x0
	// static const ::System::Int32 NFPFCBPNGND = 0x4; // 0x0
	// static const ::System::Int32 MDCDGIGBNFD = 0xA; // 0x0
	// static const ::System::Int32 OFEJJMBDLHP = 0x1EC; // 0x0
	// static const ::System::Int32 DGKPJCLNGJO = 0x10B; // 0x0
	// static const ::System::Int32 KMKNBNADCAL = 0x26C; // 0x0
	// static const ::System::Int32 CHEODMINNEO = 0x8; // 0x0
	// static const ::System::Int32 DHBDFGAEJCM = 0x2; // 0x0
	// static const ::System::Int32 LAOLBLLNLLA = 0x7; // 0x0
	// static const ::System::Int32 KOILMMGGAEM = 0xB; // 0x0
	// static const ::System::Int32 HHNPCPJMNCI = 0x1; // 0x0
	// static const ::System::Int32 JJOLKOCNADB = 0xF2; // 0x0
	// static const ::System::Int32 LPCKCKIHFKN = 0xF; // 0x0
	::Class_1_766E1CF11E204F43_12* OPICFNOJHCI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1164*>* EAAPMOMODEG; // 0x18
	::Class_1_F1F83A16E5B8B459_9* FKPDFHCNBGG; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_611*>* FKIDPPGGNJE; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_22*>* LEMGABLDCFF; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_590EC2E573209D50*>* DHNIEACFJFL; // 0x38
	::Proto::ItemList* FDAKCLMCBLE; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_12*>* DGOOJDMMJIP; // 0x48
	::Class_1_7E1E05C17C895270* ODDHEKBANJJ; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BMFGDBBNHEJ; // 0x58
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x60
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* EPIIOBFKCLE; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_53*>* IKDEDFLFPDE; // 0x70
	::Class_1_21DCD4640D389503_8* GLJMHNBLABM; // 0x78
	::Class_1_075C34D03AFA1215_7* AFCFKBEHMAD; // 0x80
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KMLIPKIEJMH; // 0x88
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_22*>* LHHJOAOFFCJ; // 0x90
	::Class_1_D40936EF3BF54118_100* JDPIFMJBOCG; // 0x98
	::Class_1_D17272E82AE804C2_1163* BDKDCNOMHNJ; // 0xA0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* FLAHMCLAAFF; // 0xA8
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E14A0A1A8B1F847C_2*>* KHBFICKDAPA; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6954D6F458B1D0FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6954D6F458B1D0FF*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6954D6F458B1D0FF*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6954D6F458B1D0FF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6954D6F458B1D0FF* Clone()
	{
		return ((::Class_1_6954D6F458B1D0FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_53*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_53*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_8*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E14A0A1A8B1F847C_2*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E14A0A1A8B1F847C_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Class_1_7E1E05C17C895270* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_7E1E05C17C895270*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_7E1E05C17C895270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E1E05C17C895270*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_1163* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_D17272E82AE804C2_1163*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_D17272E82AE804C2_1163* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1163*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1164*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1164*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_590EC2E573209D50*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_590EC2E573209D50*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::Class_1_766E1CF11E204F43_12* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_766E1CF11E204F43_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_766E1CF11E204F43_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_12*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_7* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_4(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_22*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_22*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_611*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_611*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::Class_1_F1F83A16E5B8B459_9* Method_1_24748FC20F375725_5()
	{
		return ((::Class_1_F1F83A16E5B8B459_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_5_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_5(::Class_1_F1F83A16E5B8B459_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_9*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_12*>* Method_1_6E1EC2DF63D7020F_7()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_7_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_100* Method_1_24748FC20F375725_6()
	{
		return ((::Class_1_D40936EF3BF54118_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_24748FC20F375725_6_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_6(::Class_1_D40936EF3BF54118_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_100*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_8C8625211DA811AE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_22*>* Method_1_6E1EC2DF63D7020F_8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_22*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6E1EC2DF63D7020F_8_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6954D6F458B1D0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6954D6F458B1D0FF*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6954D6F458B1D0FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6954D6F458B1D0FF*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6954D6F458B1D0FF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
