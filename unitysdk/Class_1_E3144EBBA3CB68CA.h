#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E3144EBBA3CB68CA_PVSState.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/LightOp.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_328;
class Class_1_303D5A33D1401D59;
class Class_1_BBE48024BDD3E027;
class Class_1_DC0A8D11AB967235;
class Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA;
class Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1;
class Class_1_E4CB20B056222958;
class Class_3_CD04D3296DF4C842_3;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_463D937AB9C3D339;

#define CLASS_1_E3144EBBA3CB68CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD174C50)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_03E4D29DEA69355E_OFFSET UNITYSDK_OFFSET(0xD174510)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_04916EF43B7749FD_OFFSET UNITYSDK_OFFSET(0xD16B050)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_0558E0A14AC93F07_OFFSET UNITYSDK_OFFSET(0xD16B790)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_08920F7D820068F4_OFFSET UNITYSDK_OFFSET(0xD177C30)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_0DA9A964A9F3B516_OFFSET UNITYSDK_OFFSET(0xD173070)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_0F574E750651B85E_OFFSET UNITYSDK_OFFSET(0xD172430)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_116D5228C295983B_OFFSET UNITYSDK_OFFSET(0xD177510)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xD16B220)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0xD176DC0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_19D12BDB4574A166_OFFSET UNITYSDK_OFFSET(0xD16C9E0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_1DD52849FC34A332_OFFSET UNITYSDK_OFFSET(0xD170BD0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0xD174D00)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_29A05BAE414EEFD2_OFFSET UNITYSDK_OFFSET(0xD1721C0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_2E002E1B9371E20B_OFFSET UNITYSDK_OFFSET(0xD172EC0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_2E6C9CBC74FAFF39_OFFSET UNITYSDK_OFFSET(0xD16B9B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_33AC5C72E0EF495B_OFFSET UNITYSDK_OFFSET(0xD16C480)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0xD172A50)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0xD16B060)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xD174F30)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_3F36A0BF05E10291_OFFSET UNITYSDK_OFFSET(0xD177B40)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_3F48CC2108884159_OFFSET UNITYSDK_OFFSET(0xD1717A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_406174A47F38EDFD_1_OFFSET UNITYSDK_OFFSET(0xD1782C0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0xD16BE10)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_40797D50C20B0C96_OFFSET UNITYSDK_OFFSET(0xD16B200)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_41C75B6A2A163349_OFFSET UNITYSDK_OFFSET(0xD174730)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0xD16AFC0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_4855F32E357C24B5_OFFSET UNITYSDK_OFFSET(0xD1733A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_5022DB1DC5AA8CB4_1_OFFSET UNITYSDK_OFFSET(0xD178150)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xD16CB80)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_544E188C75D45402_OFFSET UNITYSDK_OFFSET(0xD177F40)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_54BCFB5CA49757DB_OFFSET UNITYSDK_OFFSET(0xD16ABB0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_54E7837D65381FFD_OFFSET UNITYSDK_OFFSET(0xD16F950)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_58E13F613105B23C_OFFSET UNITYSDK_OFFSET(0xD16AD20)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_59BEA814E5012215_OFFSET UNITYSDK_OFFSET(0xD170210)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xD16B030)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0xD175380)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_63500C779D0E514F_OFFSET UNITYSDK_OFFSET(0xD1727D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_679A25BB647DB650_OFFSET UNITYSDK_OFFSET(0xD16BE80)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_6C50BE3419282CD9_OFFSET UNITYSDK_OFFSET(0xD1749E0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_707FBCDCB7E58989_OFFSET UNITYSDK_OFFSET(0xD173750)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_70A027EA0E44D24A_OFFSET UNITYSDK_OFFSET(0xD173210)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_7F2E6FE507DAB4A3_OFFSET UNITYSDK_OFFSET(0xD171430)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_7F3D99FA7CB53A6B_OFFSET UNITYSDK_OFFSET(0xD1728B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_8845322B7E270C9E_OFFSET UNITYSDK_OFFSET(0xD16A3A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_898C9A3FDCAD7F6C_OFFSET UNITYSDK_OFFSET(0xD16BD20)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD16F1F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xD178320)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_8D2CDD758AC30BE3_OFFSET UNITYSDK_OFFSET(0xD16B2E0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_93808FAF2B4C4BEC_OFFSET UNITYSDK_OFFSET(0xD16B8F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xD16B1B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0xD16B230)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_3_OFFSET UNITYSDK_OFFSET(0xD16B280)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xD16B160)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9592AE2163493F7E_OFFSET UNITYSDK_OFFSET(0xD177120)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9803082DC13B9390_OFFSET UNITYSDK_OFFSET(0xD178090)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9BA23C104CAAC501_OFFSET UNITYSDK_OFFSET(0xD1705A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9BC6EC5EFB49F8A1_OFFSET UNITYSDK_OFFSET(0xD1766A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xD16B210)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_A043BA529334F3E6_OFFSET UNITYSDK_OFFSET(0xD173570)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0xD1778B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xD16AD90)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_AA22C2756CBA263D_OFFSET UNITYSDK_OFFSET(0xD1725E0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_AA6F456C2B914BC4_OFFSET UNITYSDK_OFFSET(0xD170C60)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_AC0F8B2123B5D010_OFFSET UNITYSDK_OFFSET(0xD172C90)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_AF939B77497E0D47_OFFSET UNITYSDK_OFFSET(0xD1763A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B558A65BC747CCEF_OFFSET UNITYSDK_OFFSET(0xD16C2E0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B5E26F35909571B4_1_OFFSET UNITYSDK_OFFSET(0xD16F690)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B5E26F35909571B4_OFFSET UNITYSDK_OFFSET(0xD16F3C0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B683026E67ADC3B6_OFFSET UNITYSDK_OFFSET(0xD16BA40)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B851170240DFFA19_OFFSET UNITYSDK_OFFSET(0xD16C280)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BB78C47882CCA6F8_OFFSET UNITYSDK_OFFSET(0xD1746D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BBDFC34BA3BAC7CD_OFFSET UNITYSDK_OFFSET(0xD16DA70)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BE87460D78FF2CEF_OFFSET UNITYSDK_OFFSET(0xD16BB30)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0xD176D40)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C0716BE264E07ACD_OFFSET UNITYSDK_OFFSET(0xD16C980)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C1A38EA9414F5778_OFFSET UNITYSDK_OFFSET(0xD16CC40)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C641B5BD895A430C_OFFSET UNITYSDK_OFFSET(0xD16ABA0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C6AC9BE06346C0F9_OFFSET UNITYSDK_OFFSET(0xD16C800)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C7F77D9F8EDE37D5_OFFSET UNITYSDK_OFFSET(0xD172220)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C85DC39BF93C8913_OFFSET UNITYSDK_OFFSET(0xD174900)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C90496A163198033_OFFSET UNITYSDK_OFFSET(0xD16B620)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD16CB40)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CB613A5EF970C11B_1_OFFSET UNITYSDK_OFFSET(0xD177050)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xD16BF40)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0xD16BFD0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D0BBEAC1EFAF3251_OFFSET UNITYSDK_OFFSET(0xD16F280)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D20AF926CBB1F1E4_OFFSET UNITYSDK_OFFSET(0xD177710)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D419BFA565B6E872_OFFSET UNITYSDK_OFFSET(0xD16C570)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D59B83568A81C975_OFFSET UNITYSDK_OFFSET(0xD16C6D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D73515D048C485AC_OFFSET UNITYSDK_OFFSET(0xD172A00)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DA53191237B0DB8E_OFFSET UNITYSDK_OFFSET(0xD16B310)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_1_OFFSET UNITYSDK_OFFSET(0xD16B4D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_2_OFFSET UNITYSDK_OFFSET(0xD177680)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0xD16B440)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0xD174450)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E03B96F01A6BBC77_OFFSET UNITYSDK_OFFSET(0xD16AF50)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E05B4BFBD6E0E27E_OFFSET UNITYSDK_OFFSET(0xD16B560)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E1A2D6EB864C3F87_OFFSET UNITYSDK_OFFSET(0xD171CA0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E258099D15F45BA6_OFFSET UNITYSDK_OFFSET(0xD177A40)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xD174290)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E5336A44A06E0D2D_OFFSET UNITYSDK_OFFSET(0xD16B040)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E9A17551AEC75EA4_OFFSET UNITYSDK_OFFSET(0xD176880)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EDBF1EA02D3F2810_OFFSET UNITYSDK_OFFSET(0xD177EB0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EEB21F914992CB10_OFFSET UNITYSDK_OFFSET(0xD177180)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EED0E8100288DBD8_1_OFFSET UNITYSDK_OFFSET(0xD170B30)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EED0E8100288DBD8_OFFSET UNITYSDK_OFFSET(0xD170500)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xD16B0F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F340BB1D04955FA4_OFFSET UNITYSDK_OFFSET(0xD16C130)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F3DBA65049E25CB1_OFFSET UNITYSDK_OFFSET(0xD178210)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F461C0B254D9B285_OFFSET UNITYSDK_OFFSET(0xD16B2D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F879B5DF2C7EBED0_OFFSET UNITYSDK_OFFSET(0xD16B820)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB0FF2E2CC82CC6B_1_OFFSET UNITYSDK_OFFSET(0xD16B300)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0xD16B2F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB9E94EAB47300C9_OFFSET UNITYSDK_OFFSET(0xD16FC30)
#define CLASS_1_E3144EBBA3CB68CA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD178760)
#define CLASS_1_E3144EBBA3CB68CA__CTOR_OFFSET UNITYSDK_OFFSET(0xD173860)

inline static constexpr unsigned int Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex = 46305;

class Class_1_E3144EBBA3CB68CA : public ::System::Object
{
public:
	static ::RPG::Client::EnvironmentSystem** StaticGet_Field_1_0()
	{
		return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x68CF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E3144EBBA3CB68CA*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E3144EBBA3CB68CA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x68CF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x68D00);
	}
	static ::Class_1_E3144EBBA3CB68CA** StaticGet_Field_1_3()
	{
		return (::Class_1_E3144EBBA3CB68CA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x68D08);
	}
	static ::System::Collections::Generic::Queue_1<::System::Int32>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Queue_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x68D10);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x14230);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x14231);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x14234);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x14238);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_9; // 0x10
	::ScenenLightManager::BlockEnvExportDataHeader* Field_1_10; // 0x18
	::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>* Field_1_11; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_12; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_13; // 0x30
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_1_14; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*>* Field_1_15; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_16; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_17; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_18; // 0x58
	::System::Collections::Generic::LinkedList_1<::Class_1_DC0A8D11AB967235*>* Field_1_19; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_20; // 0x68
	::System::Collections::Generic::LinkedList_1<::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA*>* Field_1_21; // 0x70
	::System::Collections::Generic::List_1<::RPG::CustomRP::CustomAdditionalLightData*>* Field_1_22; // 0x78
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_23; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_24; // 0x88
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_1_25; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*>* Field_1_26; // 0x98
	::System::Collections::Generic::List_1<::System::Int64>* Field_1_27; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_28; // 0xA8
	::Collections::Pooled::PooledList_1<::System::Int32>* Field_1_29; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Field_1_30; // 0xB8
	::UnityEngine::GameObject* Field_1_31; // 0xC0
	::System::String* Field_1_32; // 0xC8
	::Class_1_BBE48024BDD3E027* Field_1_33; // 0xD0
	::System::Collections::Generic::Dictionary_2<::RPG::CustomRP::CustomLightQualityFilter, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_34; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* Field_1_35; // 0xE0
	::Class_1_463D937AB9C3D339<::Class_1_E4CB20B056222958*>* Field_1_36; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* Field_1_37; // 0xF0
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_1_38; // 0xF8
	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Field_1_39; // 0x100
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_40; // 0x108
	::Collections::Pooled::PooledList_1<::System::Int32>* Field_1_41; // 0x110
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_1_42; // 0x118
	::RPG::CustomRP::CustomLightQualityFilter Field_1_43; // 0x120
	::System::Single Field_1_44; // 0x124
	::ScenenLightManager::FadingState Field_1_45; // 0x128
	::System::Int32 Field_1_46; // 0x12C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA__CCTOR_OFFSET))();
	}

	::System::Double Method_1_8845322B7E270C9E()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_8845322B7E270C9E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::CustomRP::CustomAdditionalLightData*>* Method_1_C641B5BD895A430C()
	{
		return ((::System::Collections::Generic::List_1<::RPG::CustomRP::CustomAdditionalLightData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_C641B5BD895A430C_OFFSET))(this);
	}

	::System::Void Method_1_54BCFB5CA49757DB(::RPG::CustomRP::CustomAdditionalLightData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_54BCFB5CA49757DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E13F613105B23C(::RPG::CustomRP::CustomAdditionalLightData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_58E13F613105B23C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_1_E03B96F01A6BBC77(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E03B96F01A6BBC77_OFFSET))(this, a1);
	}

	::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_485502A9571E17C0_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_328* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_328*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter Method_1_E5336A44A06E0D2D()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E5336A44A06E0D2D_OFFSET))(this);
	}

	::System::Collections::Generic::LinkedList_1<::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA*>* Method_1_04916EF43B7749FD()
	{
		return ((::System::Collections::Generic::LinkedList_1<::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_04916EF43B7749FD_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::Class_1_463D937AB9C3D339<::System::Int32>* Method_1_40797D50C20B0C96()
	{
		return ((::Class_1_463D937AB9C3D339<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_40797D50C20B0C96_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_2_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_3_OFFSET))(this);
	}

	::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>* Method_1_F461C0B254D9B285()
	{
		return ((::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_F461C0B254D9B285_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* Method_1_8D2CDD758AC30BE3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_8D2CDD758AC30BE3_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_1_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB0FF2E2CC82CC6B_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_1_FB0FF2E2CC82CC6B_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB0FF2E2CC82CC6B_1_OFFSET))(this);
	}

	::System::Boolean Method_1_DA53191237B0DB8E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_DA53191237B0DB8E_OFFSET))(this);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E05B4BFBD6E0E27E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E05B4BFBD6E0E27E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C90496A163198033(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_C90496A163198033_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0558E0A14AC93F07(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_0558E0A14AC93F07_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F879B5DF2C7EBED0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_F879B5DF2C7EBED0_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_93808FAF2B4C4BEC(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_93808FAF2B4C4BEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B683026E67ADC3B6(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_B683026E67ADC3B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BE87460D78FF2CEF(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_BE87460D78FF2CEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_898C9A3FDCAD7F6C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_898C9A3FDCAD7F6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCAAE56E08561869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_CCAAE56E08561869_OFFSET))(this, a1);
	}

	::System::Void Method_1_F340BB1D04955FA4(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_F340BB1D04955FA4_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_B558A65BC747CCEF(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_B558A65BC747CCEF_OFFSET))(this, a1);
	}

	::System::String* Method_1_33AC5C72E0EF495B(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_33AC5C72E0EF495B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D419BFA565B6E872(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_D419BFA565B6E872_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_2E6C9CBC74FAFF39(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_2E6C9CBC74FAFF39_OFFSET))(this, a1);
	}

	::System::Void Method_1_D59B83568A81C975(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_D59B83568A81C975_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C6AC9BE06346C0F9(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_C6AC9BE06346C0F9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C0716BE264E07ACD(::System::String* a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_C0716BE264E07ACD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_19D12BDB4574A166(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_19D12BDB4574A166_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1A38EA9414F5778(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_C1A38EA9414F5778_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BBEAC1EFAF3251(::RPG::CustomRP::CustomLightQualityFilter a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_D0BBEAC1EFAF3251_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B5E26F35909571B4(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_B5E26F35909571B4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B5E26F35909571B4_1(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_B5E26F35909571B4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_54E7837D65381FFD(::System::Int32 a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_54E7837D65381FFD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EED0E8100288DBD8(::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_EED0E8100288DBD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EED0E8100288DBD8_1(::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_EED0E8100288DBD8_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DD52849FC34A332(::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_1DD52849FC34A332_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int64>* Method_1_7F2E6FE507DAB4A3(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::String* a4)
	{
		return ((::System::Collections::Generic::List_1<::System::Int64>*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_7F2E6FE507DAB4A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3F48CC2108884159(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::Boolean a4, ::System::String* a5, ::System::Collections::Generic::List_1<::System::Int64>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Boolean, ::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_3F48CC2108884159_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_E1A2D6EB864C3F87(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E1A2D6EB864C3F87_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::RPG::CustomRP::CustomLightQualityFilter Method_1_29A05BAE414EEFD2(::RPG::CustomRP::CustomLightQualityFilter a1)
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_29A05BAE414EEFD2_OFFSET))(a1);
	}

	::System::Void Method_1_C7F77D9F8EDE37D5(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_C7F77D9F8EDE37D5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0F574E750651B85E(::System::Int32 a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_0F574E750651B85E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_AA22C2756CBA263D(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_AA22C2756CBA263D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_63500C779D0E514F(::Class_3_CD04D3296DF4C842_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CD04D3296DF4C842_3*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_63500C779D0E514F_OFFSET))(this, a1);
	}

	::Class_1_E4CB20B056222958* Method_1_D73515D048C485AC(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_D73515D048C485AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_368884BBCA3D2697(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_368884BBCA3D2697_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC0F8B2123B5D010(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_AC0F8B2123B5D010_OFFSET))(this, a1);
	}

	::System::Void Method_1_2E002E1B9371E20B(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_2E002E1B9371E20B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DA9A964A9F3B516(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_0DA9A964A9F3B516_OFFSET))(this, a1);
	}

	::System::Void Method_1_70A027EA0E44D24A(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_70A027EA0E44D24A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4855F32E357C24B5(::Class_1_E4CB20B056222958* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_4855F32E357C24B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A043BA529334F3E6(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_A043BA529334F3E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_707FBCDCB7E58989(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_707FBCDCB7E58989_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::System::Int32 Method_1_03E4D29DEA69355E()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_03E4D29DEA69355E_OFFSET))();
	}

	static ::Class_1_E3144EBBA3CB68CA* Method_1_BB78C47882CCA6F8(::System::Int32 a1)
	{
		return ((::Class_1_E3144EBBA3CB68CA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_BB78C47882CCA6F8_OFFSET))(a1);
	}

	static ::Class_1_E3144EBBA3CB68CA* Method_1_41C75B6A2A163349()
	{
		return ((::Class_1_E3144EBBA3CB68CA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_41C75B6A2A163349_OFFSET))();
	}

	static ::Class_1_E3144EBBA3CB68CA* Method_1_C85DC39BF93C8913(::System::Int32 a1)
	{
		return ((::Class_1_E3144EBBA3CB68CA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_C85DC39BF93C8913_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C50BE3419282CD9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_6C50BE3419282CD9_OFFSET))(a1);
	}

	static ::System::Void Method_1_26C5221AC22B6534()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_26C5221AC22B6534_OFFSET))();
	}

	static ::System::Void Method_1_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_3CAB3F134E5CEF52_OFFSET))();
	}

	static ::System::Void Method_1_9BC6EC5EFB49F8A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_9BC6EC5EFB49F8A1_OFFSET))(a1);
	}

	::System::Void Method_1_AF939B77497E0D47(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_AF939B77497E0D47_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Void Method_1_14014646206E49EF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_14014646206E49EF_OFFSET))();
	}

	static ::System::Void Method_1_CB613A5EF970C11B_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_CB613A5EF970C11B_1_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_DISPOSE_OFFSET))(this);
	}

	::Class_1_E4CB20B056222958* Method_1_679A25BB647DB650(::System::Int32 a1)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_679A25BB647DB650_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_9592AE2163493F7E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_9592AE2163493F7E_OFFSET))(this);
	}

	::Class_1_E4CB20B056222958* Method_1_B851170240DFFA19(::System::Int32 a1)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_B851170240DFFA19_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEB21F914992CB10(::System::Int64 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_EEB21F914992CB10_OFFSET))(this, a1, a2);
	}

	::Class_1_E3144EBBA3CB68CA_PVSState Method_1_116D5228C295983B(::System::Int32 a1)
	{
		return ((::Class_1_E3144EBBA3CB68CA_PVSState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_116D5228C295983B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1_2(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBDFC34BA3BAC7CD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_BBDFC34BA3BAC7CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D20AF926CBB1F1E4(::ScenenLightManager::BlockEnvExportDataHeader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportDataHeader*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_D20AF926CBB1F1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Void Method_1_E258099D15F45BA6(::Class_1_463D937AB9C3D339<::System::Int32>* a1, ::ScenenLightManager::LightOp a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463D937AB9C3D339<::System::Int32>*, ::ScenenLightManager::LightOp))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E258099D15F45BA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3F36A0BF05E10291(::Class_1_463D937AB9C3D339<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463D937AB9C3D339<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_3F36A0BF05E10291_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA6F456C2B914BC4(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_AA6F456C2B914BC4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_463D937AB9C3D339<::System::Int32>* Method_1_FB9E94EAB47300C9(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3)
	{
		return ((::Class_1_463D937AB9C3D339<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB9E94EAB47300C9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_59BEA814E5012215(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::Class_1_463D937AB9C3D339<::System::Int32>* a5, ::ScenenLightManager::LightOp a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::Class_1_463D937AB9C3D339<::System::Int32>*, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_59BEA814E5012215_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_9BA23C104CAAC501(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::ScenenLightManager::LightOp a5, ::System::Boolean a6, ::System::Int32 a7, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Int32, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_9BA23C104CAAC501_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_08920F7D820068F4(::System::Int32 a1, ::System::String* a2, ::Class_1_463D937AB9C3D339<::System::Int32>* a3, ::ScenenLightManager::LightOp a4, ::System::Int32 a5, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*, ::ScenenLightManager::LightOp, ::System::Int32, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_08920F7D820068F4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_EDBF1EA02D3F2810(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_EDBF1EA02D3F2810_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F3D99FA7CB53A6B(::Class_1_DC0A8D11AB967235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DC0A8D11AB967235*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_7F3D99FA7CB53A6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_544E188C75D45402(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_544E188C75D45402_OFFSET))(this, a1);
	}

	::System::Void Method_1_9803082DC13B9390(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_9803082DC13B9390_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4_1(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_5022DB1DC5AA8CB4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3DBA65049E25CB1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_F3DBA65049E25CB1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_406174A47F38EDFD_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_406174A47F38EDFD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A17551AEC75EA4(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E9A17551AEC75EA4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}
};
