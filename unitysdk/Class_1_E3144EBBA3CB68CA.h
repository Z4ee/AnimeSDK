#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E3144EBBA3CB68CA_PVSState.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/LightOp.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_371;
class Class_1_303D5A33D1401D59;
class Class_1_BBE48024BDD3E027;
class Class_1_DC0A8D11AB967235;
class Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA;
class Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1;
class Class_1_E4CB20B056222958;
class Class_3_3689070D59DB42E6;
class Class_3_CD04D3296DF4C842_3;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_2E4F8309DC17256A;

#define CLASS_1_E3144EBBA3CB68CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE8A7FE0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_03E4D29DEA69355E_OFFSET UNITYSDK_OFFSET(0xE8A78B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_04916EF43B7749FD_OFFSET UNITYSDK_OFFSET(0xE89DE10)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_0558E0A14AC93F07_OFFSET UNITYSDK_OFFSET(0xE89E560)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_072AF0AD8832D2A6_OFFSET UNITYSDK_OFFSET(0xE89F570)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_08920F7D820068F4_OFFSET UNITYSDK_OFFSET(0xE8AB110)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_0AD137D635C0F795_OFFSET UNITYSDK_OFFSET(0xE89DA00)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_0B4CFF95AD98C086_OFFSET UNITYSDK_OFFSET(0xE8A5B50)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_0DA9A964A9F3B516_OFFSET UNITYSDK_OFFSET(0xE8A6280)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_0F574E750651B85E_OFFSET UNITYSDK_OFFSET(0xE8A5540)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_116D5228C295983B_OFFSET UNITYSDK_OFFSET(0xE8AA9F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xE89DFE0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0xE8AA290)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_19D12BDB4574A166_OFFSET UNITYSDK_OFFSET(0xE89F6B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_1DD52849FC34A332_OFFSET UNITYSDK_OFFSET(0xE8A3AD0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0xE8A8090)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_29A05BAE414EEFD2_OFFSET UNITYSDK_OFFSET(0xE8A52D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_2E002E1B9371E20B_OFFSET UNITYSDK_OFFSET(0xE8A60D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_2E6C9CBC74FAFF39_OFFSET UNITYSDK_OFFSET(0xE89E780)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0xE89DE20)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_37EF6C2D4F94A206_OFFSET UNITYSDK_OFFSET(0xE89F0A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_3F36A0BF05E10291_OFFSET UNITYSDK_OFFSET(0xE8AB020)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_3F48CC2108884159_OFFSET UNITYSDK_OFFSET(0xE8A46B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_40797D50C20B0C96_OFFSET UNITYSDK_OFFSET(0xE89DFC0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_41C75B6A2A163349_OFFSET UNITYSDK_OFFSET(0xE8A7AD0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xE8AB7F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0xE89DD80)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_4855F32E357C24B5_OFFSET UNITYSDK_OFFSET(0xE8A65B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_5022DB1DC5AA8CB4_1_OFFSET UNITYSDK_OFFSET(0xE8AB620)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xE89F850)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_544E188C75D45402_OFFSET UNITYSDK_OFFSET(0xE8AB410)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_59BEA814E5012215_OFFSET UNITYSDK_OFFSET(0xE8A3110)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xE89DDF0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0xE8A8850)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_63500C779D0E514F_OFFSET UNITYSDK_OFFSET(0xE8A58E0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xE8AC170)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_679A25BB647DB650_OFFSET UNITYSDK_OFFSET(0xE89EC50)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_6C50BE3419282CD9_OFFSET UNITYSDK_OFFSET(0xE8A7D80)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_6DB0CBC8B59AD1F4_OFFSET UNITYSDK_OFFSET(0xE89EBE0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0xE8AAD80)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_70A027EA0E44D24A_OFFSET UNITYSDK_OFFSET(0xE8A6420)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_78A1456A6DBF4558_OFFSET UNITYSDK_OFFSET(0xE89F210)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_7F2E6FE507DAB4A3_OFFSET UNITYSDK_OFFSET(0xE8A4330)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_7F3D99FA7CB53A6B_OFFSET UNITYSDK_OFFSET(0xE8A59B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_87236773FA97AC36_OFFSET UNITYSDK_OFFSET(0xE8A69F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_8845322B7E270C9E_OFFSET UNITYSDK_OFFSET(0xE89D1F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_898C9A3FDCAD7F6C_OFFSET UNITYSDK_OFFSET(0xE89EAF0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xE8A2000)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_8D2CDD758AC30BE3_OFFSET UNITYSDK_OFFSET(0xE89E0A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_93808FAF2B4C4BEC_OFFSET UNITYSDK_OFFSET(0xE89E6C0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xE89DF70)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0xE89DFF0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_3_OFFSET UNITYSDK_OFFSET(0xE89E040)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xE89DF20)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9592AE2163493F7E_OFFSET UNITYSDK_OFFSET(0xE8AA5F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9803082DC13B9390_OFFSET UNITYSDK_OFFSET(0xE8AB560)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9BA23C104CAAC501_OFFSET UNITYSDK_OFFSET(0xE8A34A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9BC6EC5EFB49F8A1_OFFSET UNITYSDK_OFFSET(0xE8A9B70)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xE89DFD0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_A043BA529334F3E6_OFFSET UNITYSDK_OFFSET(0xE8A6810)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_A2577D09970BC962_OFFSET UNITYSDK_OFFSET(0xE8A27D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xE89DB50)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_AA22C2756CBA263D_OFFSET UNITYSDK_OFFSET(0xE8A56F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_AA6F456C2B914BC4_OFFSET UNITYSDK_OFFSET(0xE8A3B60)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_AC0F8B2123B5D010_OFFSET UNITYSDK_OFFSET(0xE8A5E20)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_AF939B77497E0D47_OFFSET UNITYSDK_OFFSET(0xE8A9870)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B5E26F35909571B4_1_OFFSET UNITYSDK_OFFSET(0xE8A2500)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B5E26F35909571B4_OFFSET UNITYSDK_OFFSET(0xE8A2240)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B683026E67ADC3B6_OFFSET UNITYSDK_OFFSET(0xE89E810)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_B851170240DFFA19_OFFSET UNITYSDK_OFFSET(0xE89F040)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BB78C47882CCA6F8_OFFSET UNITYSDK_OFFSET(0xE8A7A70)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BBDFC34BA3BAC7CD_OFFSET UNITYSDK_OFFSET(0xE8A0730)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BCA542461263E2FE_OFFSET UNITYSDK_OFFSET(0xE8A4C60)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BE87460D78FF2CEF_OFFSET UNITYSDK_OFFSET(0xE89E900)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0xE8AA210)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C0716BE264E07ACD_OFFSET UNITYSDK_OFFSET(0xE89F650)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C1A38EA9414F5778_OFFSET UNITYSDK_OFFSET(0xE89F910)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C7F77D9F8EDE37D5_OFFSET UNITYSDK_OFFSET(0xE8A5330)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C85DC39BF93C8913_OFFSET UNITYSDK_OFFSET(0xE8A7CA0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_C90496A163198033_OFFSET UNITYSDK_OFFSET(0xE89E3F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE89F810)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CB613A5EF970C11B_1_OFFSET UNITYSDK_OFFSET(0xE8AA520)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xE89ED00)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CB65494BE8E630D4_OFFSET UNITYSDK_OFFSET(0xE89DAE0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0xE89ED90)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D20AF926CBB1F1E4_OFFSET UNITYSDK_OFFSET(0xE8AABE0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D419BFA565B6E872_OFFSET UNITYSDK_OFFSET(0xE89F2D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D59B83568A81C975_OFFSET UNITYSDK_OFFSET(0xE89F430)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D6704D245776A9EF_OFFSET UNITYSDK_OFFSET(0xE89D9F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D70A60BBCF450928_OFFSET UNITYSDK_OFFSET(0xE8A20A0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_D73515D048C485AC_OFFSET UNITYSDK_OFFSET(0xE8A5B00)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DA53191237B0DB8E_OFFSET UNITYSDK_OFFSET(0xE89E0D0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DDECB5BE8FBD1A6B_OFFSET UNITYSDK_OFFSET(0xE8AB790)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_1_OFFSET UNITYSDK_OFFSET(0xE89E290)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_2_OFFSET UNITYSDK_OFFSET(0xE8AAB50)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0xE89E200)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0xE8A77F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E03B96F01A6BBC77_OFFSET UNITYSDK_OFFSET(0xE89DD10)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E05B4BFBD6E0E27E_OFFSET UNITYSDK_OFFSET(0xE89E320)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E258099D15F45BA6_OFFSET UNITYSDK_OFFSET(0xE8AAF20)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xE8A7630)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E5336A44A06E0D2D_OFFSET UNITYSDK_OFFSET(0xE89DE00)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_E9A17551AEC75EA4_OFFSET UNITYSDK_OFFSET(0xE8A9D50)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xE8A82C0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EDBF1EA02D3F2810_OFFSET UNITYSDK_OFFSET(0xE8AB390)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EEB21F914992CB10_OFFSET UNITYSDK_OFFSET(0xE8AA650)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EED0E8100288DBD8_1_OFFSET UNITYSDK_OFFSET(0xE8A3A30)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_EED0E8100288DBD8_OFFSET UNITYSDK_OFFSET(0xE8A3400)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xE89DEB0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F340BB1D04955FA4_OFFSET UNITYSDK_OFFSET(0xE89EEF0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F3DBA65049E25CB1_OFFSET UNITYSDK_OFFSET(0xE8AB6E0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F461C0B254D9B285_OFFSET UNITYSDK_OFFSET(0xE89E090)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_F879B5DF2C7EBED0_OFFSET UNITYSDK_OFFSET(0xE89E5F0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB0FF2E2CC82CC6B_1_OFFSET UNITYSDK_OFFSET(0xE89E0C0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0xE89E0B0)
#define CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB9E94EAB47300C9_OFFSET UNITYSDK_OFFSET(0xE8A2B20)
#define CLASS_1_E3144EBBA3CB68CA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8AD7C0)
#define CLASS_1_E3144EBBA3CB68CA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A6B00)

inline static constexpr unsigned int Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex = 49550;

class Class_1_E3144EBBA3CB68CA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_DNLDGDGKNHE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x6430);
	}
	static ::RPG::Client::EnvironmentSystem** StaticGet_LKDKHHMECAG()
	{
		return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x6438);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E3144EBBA3CB68CA*>** StaticGet_ADGLJEDHLGK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E3144EBBA3CB68CA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x6440);
	}
	static ::System::Collections::Generic::Queue_1<::System::Int32>** StaticGet_NEHCKJLGFDL()
	{
		return (::System::Collections::Generic::Queue_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x6448);
	}
	static ::Class_1_E3144EBBA3CB68CA** StaticGet_CAPCFPCKDAB()
	{
		return (::Class_1_E3144EBBA3CB68CA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x6450);
	}
	static ::System::Boolean* StaticGet_PLIBOLNCCBP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x1C50);
	}
	static ::System::Boolean* StaticGet_CMAKJFGCOAH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x1C51);
	}
	static ::System::Int32* StaticGet_EKLIHEEOLJI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x1C54);
	}
	static ::System::Int32* StaticGet_DJDBABDKBNI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_TypeDefinitionIndex)->GetStaticField(0x1C58);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* CFDBFJBPIFB; // 0x10
	::Class_1_2E4F8309DC17256A<::System::Int32>* FGGKIHGBADJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* LDMIAIONOON; // 0x20
	::System::Collections::Generic::LinkedList_1<::Class_1_DC0A8D11AB967235*>* PCEBFMGLJOE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2E4F8309DC17256A<::System::Int32>*>* CEEOKEJFJKA; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::CustomRP::CustomLightQualityFilter, ::Class_1_2E4F8309DC17256A<::System::Int32>*>* NLKJHPDFEJM; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2E4F8309DC17256A<::System::Int32>*>* GGEKCECLHOD; // 0x40
	::Collections::Pooled::PooledList_1<::System::Int32>* JMAJAIDOGDO; // 0x48
	::ScenenLightManager::BlockEnvExportDataHeader* OCCJGHOLOPD; // 0x50
	::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>* JOJFINMFCIG; // 0x58
	::Collections::Pooled::PooledList_1<::System::Int32>* EENHOKBKGCG; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GODBDKAGLOH; // 0x68
	::Class_1_BBE48024BDD3E027* GJCGNLFBDFP; // 0x70
	::System::Collections::Generic::List_1<::Class_3_3689070D59DB42E6*>* BMHNOAEJMMH; // 0x78
	::System::String* ONDMEGKNDIJ; // 0x80
	::Class_1_2E4F8309DC17256A<::Class_1_E4CB20B056222958*>* IFHNIEDNEAF; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2E4F8309DC17256A<::System::Int32>*>* HDMAAGDHBDJ; // 0x90
	::System::Collections::Generic::List_1<::System::Boolean>* FLOMOPHKEAA; // 0x98
	::System::String* CMHGNGAMDCG; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2E4F8309DC17256A<::System::Int32>*>* CHHCMCIINFG; // 0xA8
	::System::String* IAAMJGILNIE; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JKGJBOIFODN; // 0xB8
	::Class_1_2E4F8309DC17256A<::System::Int32>* FBMJNCKFNEI; // 0xC0
	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* LNIPKLMALGD; // 0xC8
	::System::Collections::Generic::HashSet_1<::System::String*>* EAJIGLEDBOJ; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LKEIKDJAKOG; // 0xD8
	::System::Collections::Generic::List_1<::System::Int64>* BAOEDLJJFPM; // 0xE0
	::Class_1_2E4F8309DC17256A<::System::Int32>* EHJMDJKGMFL; // 0xE8
	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* ICECDIBGCPJ; // 0xF0
	::System::Collections::Generic::HashSet_1<::System::Int32>* BFGNNGMEEGP; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*>* AIABELJGOCH; // 0x100
	::Class_1_2E4F8309DC17256A<::System::Int32>* GELEBNBBPFN; // 0x108
	::System::Collections::Generic::LinkedList_1<::Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA*>* PJFNHMNJPKG; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* PHIBHIOFGDA; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*>* EGFFEJBEFPN; // 0x120
	::UnityEngine::GameObject* ALBCIPHNOBB; // 0x128
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HMKPHEAHOHD; // 0x130
	::System::Single MJHPMOBOJFL; // 0x138
	::RPG::CustomRP::CustomLightQualityFilter MIJENEBEDOK; // 0x13C
	::ScenenLightManager::FadingState NBHPFJAGCIG; // 0x140
	::System::Int32 MLFKDCAINOH; // 0x144

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

	::System::Collections::Generic::List_1<::Class_3_3689070D59DB42E6*>* Method_1_D6704D245776A9EF()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_3689070D59DB42E6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_D6704D245776A9EF_OFFSET))(this);
	}

	::System::Void Method_1_0AD137D635C0F795(::Class_3_3689070D59DB42E6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3689070D59DB42E6*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_0AD137D635C0F795_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB65494BE8E630D4(::Class_3_3689070D59DB42E6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3689070D59DB42E6*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_CB65494BE8E630D4_OFFSET))(this, a1);
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

	::Class_0_16E4307DCC419505_371* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_371*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
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

	::Class_1_2E4F8309DC17256A<::System::Int32>* Method_1_40797D50C20B0C96()
	{
		return ((::Class_1_2E4F8309DC17256A<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_40797D50C20B0C96_OFFSET))(this);
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

	::System::String* Method_1_37EF6C2D4F94A206(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_37EF6C2D4F94A206_OFFSET))(this, a1);
	}

	::System::String* Method_1_78A1456A6DBF4558(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_78A1456A6DBF4558_OFFSET))(this, a1);
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

	::System::Void Method_1_072AF0AD8832D2A6(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_072AF0AD8832D2A6_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Boolean Method_1_6DB0CBC8B59AD1F4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_6DB0CBC8B59AD1F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1A38EA9414F5778(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_C1A38EA9414F5778_OFFSET))(this, a1);
	}

	::System::Void Method_1_D70A60BBCF450928(::RPG::CustomRP::CustomLightQualityFilter a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_D70A60BBCF450928_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B5E26F35909571B4(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_B5E26F35909571B4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B5E26F35909571B4_1(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_B5E26F35909571B4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2577D09970BC962(::System::Int32 a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_A2577D09970BC962_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void Method_1_BCA542461263E2FE(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_BCA542461263E2FE_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_1_0B4CFF95AD98C086(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_0B4CFF95AD98C086_OFFSET))(this, a1);
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

	::System::Void Method_1_87236773FA97AC36(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_87236773FA97AC36_OFFSET))(this, a1);
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

	static ::System::Void Method_1_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_EBAB6A35C21A2A5B_OFFSET))();
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

	::System::Void Method_1_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_705FFC79B57F4953_OFFSET))(this, a1);
	}

	::System::Void Method_1_E258099D15F45BA6(::Class_1_2E4F8309DC17256A<::System::Int32>* a1, ::ScenenLightManager::LightOp a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E4F8309DC17256A<::System::Int32>*, ::ScenenLightManager::LightOp))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E258099D15F45BA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3F36A0BF05E10291(::Class_1_2E4F8309DC17256A<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E4F8309DC17256A<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_3F36A0BF05E10291_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA6F456C2B914BC4(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_AA6F456C2B914BC4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_2E4F8309DC17256A<::System::Int32>* Method_1_FB9E94EAB47300C9(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3)
	{
		return ((::Class_1_2E4F8309DC17256A<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_FB9E94EAB47300C9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_59BEA814E5012215(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::Class_1_2E4F8309DC17256A<::System::Int32>* a5, ::ScenenLightManager::LightOp a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::Class_1_2E4F8309DC17256A<::System::Int32>*, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_59BEA814E5012215_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_9BA23C104CAAC501(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::ScenenLightManager::LightOp a5, ::System::Boolean a6, ::System::Int32 a7, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Int32, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_9BA23C104CAAC501_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_08920F7D820068F4(::System::Int32 a1, ::System::String* a2, ::Class_1_2E4F8309DC17256A<::System::Int32>* a3, ::ScenenLightManager::LightOp a4, ::System::Int32 a5, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_2E4F8309DC17256A<::System::Int32>*, ::ScenenLightManager::LightOp, ::System::Int32, ::Class_1_E3144EBBA3CB68CA_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_08920F7D820068F4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

	::System::Boolean Method_1_DDECB5BE8FBD1A6B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_DDECB5BE8FBD1A6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A17551AEC75EA4(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_E9A17551AEC75EA4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}
};
