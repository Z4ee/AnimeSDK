#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Class_1_D4E2A0605A71F3AC_FadingDoneActionType.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingConsequenceClass.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingDistanceTier.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingEntryResolveResult.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingImmediateFinishReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingInvalidReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingLowRejectedReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriority.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriorityModifierFlags.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSizeTier.h"
#include "unitysdk/Struct_2_3D5F31420A8FFFAB.h"

class Class_1_303D5A33D1401D59;
class Class_1_43BD383C98B4C0C5_200;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_E7175D70942CF05A;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F2C0B67BFD1BE2D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181864A0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_006CD1FEA47A0047_OFFSET UNITYSDK_OFFSET(0x1818CA50)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x181878C0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_0DC83DAD98592ADE_OFFSET UNITYSDK_OFFSET(0x1818C900)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1576E1CE6A5A6899_OFFSET UNITYSDK_OFFSET(0x18187B50)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_17138B761264CC88_OFFSET UNITYSDK_OFFSET(0x1818DC40)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1851C433B7254E4E_OFFSET UNITYSDK_OFFSET(0x18185FF0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x18186280)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1B940836A1F34C87_OFFSET UNITYSDK_OFFSET(0x181875E0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1E65D5278B14D1FD_OFFSET UNITYSDK_OFFSET(0x18189EF0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1FAABE846E698D1A_OFFSET UNITYSDK_OFFSET(0x1818EC90)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_20DC6DCB117C6B7A_OFFSET UNITYSDK_OFFSET(0x1818D8F0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_20F4806358A3520A_OFFSET UNITYSDK_OFFSET(0x1818C830)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_23A1C0849632D0BE_OFFSET UNITYSDK_OFFSET(0x1818DFA0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2736DB93587355B8_OFFSET UNITYSDK_OFFSET(0x1818ED10)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2759ADA20E855CE8_OFFSET UNITYSDK_OFFSET(0x1818A3C0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2BB6C2E76A7F3DC4_OFFSET UNITYSDK_OFFSET(0x18188A00)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2C20843CF7095E31_OFFSET UNITYSDK_OFFSET(0x1818CBB0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x1818B510)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2F8FA374EC52F23F_OFFSET UNITYSDK_OFFSET(0x1818D640)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_38740012B28097EB_OFFSET UNITYSDK_OFFSET(0x1818DEB0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18187870)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x18189E00)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3CFDF6770C17E70E_OFFSET UNITYSDK_OFFSET(0x1818B600)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3E6FB3DE27C4C8EC_OFFSET UNITYSDK_OFFSET(0x1818E4E0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3FBC1A60355758EB_OFFSET UNITYSDK_OFFSET(0x1818CC60)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_42AE4B7779F3CD9E_OFFSET UNITYSDK_OFFSET(0x1818B8D0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4DC8F3BA94C1B88F_OFFSET UNITYSDK_OFFSET(0x1818CCB0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0x1818EA90)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4F23460C1EEEBEFF_OFFSET UNITYSDK_OFFSET(0x1818B730)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0x18187F00)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_514D758453905842_OFFSET UNITYSDK_OFFSET(0x181876B0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_52AC5A7E30C57CDD_OFFSET UNITYSDK_OFFSET(0x1818F2F0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5810DC41D2A93362_OFFSET UNITYSDK_OFFSET(0x1818A750)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_599021EE91C695A9_OFFSET UNITYSDK_OFFSET(0x1818E530)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5B0BFDE53F3EF8D7_OFFSET UNITYSDK_OFFSET(0x1818F3F0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_667279DBE105F9CF_OFFSET UNITYSDK_OFFSET(0x18188400)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_673217A779339F67_OFFSET UNITYSDK_OFFSET(0x1818E3E0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_6CE5AE8639ED54AC_OFFSET UNITYSDK_OFFSET(0x181866E0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_70FDDCEE7F0781C2_OFFSET UNITYSDK_OFFSET(0x1818EDC0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7626A278984F5E39_OFFSET UNITYSDK_OFFSET(0x18189120)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7BA8DD80C3AB9B17_OFFSET UNITYSDK_OFFSET(0x1818EFF0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x18187DE0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_8122CA65A8871E31_OFFSET UNITYSDK_OFFSET(0x1818D890)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x181874A0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_86AB569C8CD2E4F7_OFFSET UNITYSDK_OFFSET(0x1818CD40)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_88A5B850784109E7_OFFSET UNITYSDK_OFFSET(0x1818D450)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x18185A90)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_98984F75628BD4A0_OFFSET UNITYSDK_OFFSET(0x1818D850)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_9EDBF26057788353_OFFSET UNITYSDK_OFFSET(0x1818CFA0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1075642AC8E7495_OFFSET UNITYSDK_OFFSET(0x181893B0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1818A300)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1B22949C6040DE2_OFFSET UNITYSDK_OFFSET(0x1818E5B0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1818DF50)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1818F4E0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A28BA6B5EDF7FCB8_OFFSET UNITYSDK_OFFSET(0x1818C400)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A3F50826E47AF91B_OFFSET UNITYSDK_OFFSET(0x1818CB10)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x18188050)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_AA71AA0AD2B25A32_OFFSET UNITYSDK_OFFSET(0x1818D770)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_ACEE8F0463BB6E80_OFFSET UNITYSDK_OFFSET(0x1818EBC0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1818B5B0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_B0C9E856F8614857_OFFSET UNITYSDK_OFFSET(0x1818D5F0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_B26D020C1C1FC342_OFFSET UNITYSDK_OFFSET(0x1818F470)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_BEE647E2828D043F_OFFSET UNITYSDK_OFFSET(0x1818CDF0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_C3C97913312CE9BA_OFFSET UNITYSDK_OFFSET(0x1818EF30)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_C66F716788CC7B7A_OFFSET UNITYSDK_OFFSET(0x1818D150)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1818F560)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18189EB0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1818F520)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA8345F08AB32EBF_1_OFFSET UNITYSDK_OFFSET(0x18187AF0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA8345F08AB32EBF_OFFSET UNITYSDK_OFFSET(0x1818EF90)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D017EF9147EE9630_OFFSET UNITYSDK_OFFSET(0x18189F70)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x1818A080)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D1DAA01ABF3D4077_OFFSET UNITYSDK_OFFSET(0x18187AB0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D1FD1530F1D49001_OFFSET UNITYSDK_OFFSET(0x18188600)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0x18188800)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_DCCBD38EA65D68E3_OFFSET UNITYSDK_OFFSET(0x1818D960)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E02E69A2C8DC0BB2_OFFSET UNITYSDK_OFFSET(0x1818E490)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E42A8E9F39D94A22_OFFSET UNITYSDK_OFFSET(0x1818C750)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E665B6DBFA4CE79A_OFFSET UNITYSDK_OFFSET(0x1818C660)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F4499003B6A4CCA7_OFFSET UNITYSDK_OFFSET(0x1818B450)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F70931C4E29FD115_OFFSET UNITYSDK_OFFSET(0x18187810)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F7591C7E101B67A9_OFFSET UNITYSDK_OFFSET(0x1818B0C0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x181899E0)
#define CLASS_2_F2C0B67BFD1BE2D4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818F5A0)
#define CLASS_2_F2C0B67BFD1BE2D4__CTOR_OFFSET UNITYSDK_OFFSET(0x18185AE0)

inline static constexpr unsigned int Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex = 73849;

class Class_2_F2C0B67BFD1BE2D4 : public ::Class_1_7256E7A2FB36A46D
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_MEHAFKJNBPK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40CF0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NNAEKHJALPE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40CF8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JONAOOOJNOK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D00);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_DBDMBOIAJOD()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D08);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_GGFBOILBKKF()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D10);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_ALDJDPIDCEL()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D18);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_EMPOFJKJAAI()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D20);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_OEJLMMLOODK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D28);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_FMEOFADOIFH()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D30);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_FFNMAHNOEBO()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D38);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_LOHOHHBEIHD()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D40);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_OJGBLCEADOL()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D48);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_HMEMCFPIJOA()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D50);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_DDGNJEFNHAG()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D58);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_IKEIKCFCCJA()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D60);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JCAJLGEMHND()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D68);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JIMMGIJFNLL()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D70);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_LJMEBANFDOD()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D78);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_DCOCBKPOOBI()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D80);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_IMPBIOJLOFL()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D88);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_FEHJLGEPAED()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x40D90);
	}
	// static const ::System::Single CGMMBHCGHBK; // 0x0
	// static const ::System::Single CKOBHBPLHLI; // 0x0
	// static const ::System::Single KKMOFNEGNOK; // 0x0
	// static const ::System::Single GBPIJLELAJK; // 0x0
	// static const ::System::Single PJCBCNCCFLG; // 0x0
	// static const ::System::Single BOOIFAAEIDO; // 0x0
	// static const ::System::Single NGLBHPNAACI; // 0x0
	// static const ::System::Int32 JBPBAJDBFBE = 0xB4; // 0x0
	// static const ::System::Int32 HMDAEBFILDO = 0x12C; // 0x0
	// static const ::System::Int32 BBMPHIPEDPI = 0x3C; // 0x0
	// static const ::System::Int32 EOEKCBJCJAB = 0xC; // 0x0
	// static const ::System::Int32 INBPDINJKEP = 0xF; // 0x0
	// static const ::System::Int32 PHGFLBHJKAP = 0x2; // 0x0
	// static const ::System::Int32 KPIEFAMNIKI = 0x8; // 0x0
	// static const ::System::Int32 AEMKCLCFMMK = 0x1; // 0x0
	// static const ::System::Int32 MDKPBOBNCAP = 0x40; // 0x0
	// static const ::System::Int32 MEKNHMIHEMI = 0x1A4; // 0x0
	// static const ::System::Int32 LLACHBACEGA = 0x2D; // 0x0
	// static const ::System::Int32 BNMACFGNFAN = 0xC; // 0x0
	// static const ::System::Int32 DCMPOJEGMBK = 0x8; // 0x0
	// static const ::System::Int32 DCNDEGAHACH = 0x78; // 0x0
	// static const ::System::Int32 HBHIJCCDKKD = 0xB4; // 0x0
	// static const ::System::Int32 BNEFPFDBKNL = 0x12C; // 0x0
	// static const ::System::Int32 DBJNJNNPPGC = 0x5A; // 0x0
	::Il2CppArray<::System::Int32>* IHOLFEOPFAI; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_200*>* BCGCMPFHPKA; // 0x20
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* KNENIDAJIIO; // 0x28
	::System::Collections::Generic::Dictionary_2<::Class_1_8A6989C352B0F0F0*, ::Class_1_43BD383C98B4C0C5_200*>* KLJLKGHOFBG; // 0x30
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_200*>* NICBNIMAION; // 0x38
	::Il2CppArray<::System::Int32>* ECEGHGFDBBH; // 0x40
	::Il2CppArray<::System::Int32>* MLDFLIDCMCO; // 0x48
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_200*>* JBBBFJELPFB; // 0x50
	::Il2CppArray<::System::Int32>* KLPHEDLLDNC; // 0x58
	::Il2CppArray<::System::Int32>* OPFGFCLOABE; // 0x60
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* NEENANLBNKP; // 0x68
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* FBPMPJBCEIM; // 0x70
	::Il2CppArray<::System::Int32>* HFJJANJFDKI; // 0x78
	::Il2CppArray<::System::Int32>* BNIOCAJMMBJ; // 0x80
	::Il2CppArray<::System::Int32>* OINCCPCJEKL; // 0x88
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* DNHLEIHAHOA; // 0x90
	::System::Int32 JGMGALLACHB; // 0x98
	::System::Int32 AIPOLCHPJKG; // 0x9C
	::System::Int32 GGCJOBPCHNK; // 0xA0
	::System::Int32 OKKKINLMCNN; // 0xA4
	::System::Int32 PABGHGIPDIB; // 0xA8
	::System::Boolean JIOBJKNPCNH; // 0xAC
	::System::Int32 IIPICADPDEE; // 0xB0
	::System::Int32 GLNCHEOEHEK; // 0xB4
	::System::Int32 LMBGNLLIFHJ; // 0xB8
	::System::Int32 FJAIBFCEDPJ; // 0xBC
	::System::Int32 BJPLIEINDHG; // 0xC0
	::System::Int32 EGGAMNDKBHD; // 0xC4
	::System::Int32 JCLDLKGEDNH; // 0xC8
	::System::Int32 CHDHGKJFILJ; // 0xCC
	::System::Int32 FDPGOGFFOGP; // 0xD0
	::System::Int32 KLCMIJGPCBL; // 0xD4

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_1851C433B7254E4E(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1851C433B7254E4E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6CE5AE8639ED54AC(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_E7175D70942CF05A* a2, ::Class_1_303D5A33D1401D59* a3, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_E7175D70942CF05A*, ::Class_1_303D5A33D1401D59*, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_6CE5AE8639ED54AC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1576E1CE6A5A6899(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1576E1CE6A5A6899_OFFSET))(this, a1);
	}

	::System::Void Method_2_D41059BB825399DF(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D41059BB825399DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_7626A278984F5E39(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7626A278984F5E39_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1075642AC8E7495(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1075642AC8E7495_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F4499003B6A4CCA7(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F4499003B6A4CCA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F7591C7E101B67A9(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F7591C7E101B67A9_OFFSET))(this, a1);
	}

	::Struct_2_3D5F31420A8FFFAB Method_2_667279DBE105F9CF(::System::Boolean a1)
	{
		return ((::Struct_2_3D5F31420A8FFFAB(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_667279DBE105F9CF_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::FadingImmediateFinishReason Method_2_1E65D5278B14D1FD(::Struct_2_3D5F31420A8FFFAB a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::OpenWorld::FadingImmediateFinishReason(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1E65D5278B14D1FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2759ADA20E855CE8(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2759ADA20E855CE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_5810DC41D2A93362(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5810DC41D2A93362_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::FadingEntryResolveResult Method_2_2C20843CF7095E31(::Class_1_43BD383C98B4C0C5_200* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason& a3)
	{
		return ((::RPG::Client::OpenWorld::FadingEntryResolveResult(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingImmediateFinishReason&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2C20843CF7095E31_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_BEE647E2828D043F(::Class_1_43BD383C98B4C0C5_200* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingImmediateFinishReason&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_BEE647E2828D043F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_86AB569C8CD2E4F7(::Class_1_43BD383C98B4C0C5_200* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_86AB569C8CD2E4F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_42AE4B7779F3CD9E(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_42AE4B7779F3CD9E_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::FadingPriority Method_2_C66F716788CC7B7A(::Class_1_43BD383C98B4C0C5_200* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::RPG::Client::OpenWorld::FadingPriority& a3, ::RPG::Client::OpenWorld::FadingPriorityModifierFlags& a4, ::System::Boolean& a5, ::RPG::Client::OpenWorld::FadingLowRejectedReason& a6, ::System::Boolean& a7)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingPriority&, ::RPG::Client::OpenWorld::FadingPriorityModifierFlags&, ::System::Boolean&, ::RPG::Client::OpenWorld::FadingLowRejectedReason&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_C66F716788CC7B7A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::Client::OpenWorld::FadingPriority Method_2_88A5B850784109E7(::Class_1_43BD383C98B4C0C5_200* a1, ::RPG::Client::OpenWorld::FadingPriority a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::RPG::Client::OpenWorld::FadingPriority, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_88A5B850784109E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_A28BA6B5EDF7FCB8(::RPG::Client::OpenWorld::FadingPriority a1, ::Struct_2_3D5F31420A8FFFAB a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A28BA6B5EDF7FCB8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_DCCBD38EA65D68E3(::RPG::Client::OpenWorld::FadingPriority a1, ::Struct_2_3D5F31420A8FFFAB a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::Struct_2_3D5F31420A8FFFAB, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_DCCBD38EA65D68E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_E665B6DBFA4CE79A(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E665B6DBFA4CE79A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_E42A8E9F39D94A22(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E42A8E9F39D94A22_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_20F4806358A3520A(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_20F4806358A3520A_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_200* Method_2_17138B761264CC88(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_200*(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_17138B761264CC88_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DC83DAD98592ADE(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_0DC83DAD98592ADE_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_23A1C0849632D0BE(::Struct_2_3D5F31420A8FFFAB a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_23A1C0849632D0BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7F68D6D1D153FE6C(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1FD1530F1D49001(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D1FD1530F1D49001_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_D017EF9147EE9630(::Struct_2_3D5F31420A8FFFAB a1, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D017EF9147EE9630_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CFDF6770C17E70E(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3CFDF6770C17E70E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4F23460C1EEEBEFF(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4F23460C1EEEBEFF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2BB6C2E76A7F3DC4(::Class_1_43BD383C98B4C0C5_200* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a4, ::RPG::Client::OpenWorld::FadingPriority a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::Struct_2_3D5F31420A8FFFAB, ::System::Boolean, ::RPG::Client::OpenWorld::FadingImmediateFinishReason, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2BB6C2E76A7F3DC4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_20DC6DCB117C6B7A(::Class_1_43BD383C98B4C0C5_200* a1, ::RPG::Client::OpenWorld::FadingPriority a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_20DC6DCB117C6B7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_50884DFE76178C82(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_50884DFE76178C82_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_A1B22949C6040DE2(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1B22949C6040DE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_4ED5A32649C8BEBA(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4ED5A32649C8BEBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACEE8F0463BB6E80(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_ACEE8F0463BB6E80_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2736DB93587355B8(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2736DB93587355B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_70FDDCEE7F0781C2(::Class_1_43BD383C98B4C0C5_200* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_70FDDCEE7F0781C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_05679872695EE5DE(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_05679872695EE5DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_006CD1FEA47A0047(::Class_1_43BD383C98B4C0C5_200* a1, ::RPG::Client::OpenWorld::FadingInvalidReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::RPG::Client::OpenWorld::FadingInvalidReason&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_006CD1FEA47A0047_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::FadingConsequenceClass Method_2_1B940836A1F34C87(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType a2)
	{
		return ((::RPG::Client::OpenWorld::FadingConsequenceClass(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1B940836A1F34C87_OFFSET))(this, a1, a2);
	}

	static ::RPG::Client::OpenWorld::FadingPriority Method_2_F70931C4E29FD115(::RPG::Client::OpenWorld::FadingConsequenceClass a1)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F70931C4E29FD115_OFFSET))(a1);
	}

	static ::RPG::Client::OpenWorld::FadingPriority Method_2_C3C97913312CE9BA(::RPG::Client::OpenWorld::FadingConsequenceClass a1)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_C3C97913312CE9BA_OFFSET))(a1);
	}

	static ::RPG::Client::OpenWorld::FadingPriority Method_2_AA71AA0AD2B25A32(::RPG::Client::OpenWorld::FadingConsequenceClass a1, ::RPG::Client::OpenWorld::FadingPriority a2)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_AA71AA0AD2B25A32_OFFSET))(a1, a2);
	}

	static ::RPG::Client::OpenWorld::FadingPriority Method_2_B0C9E856F8614857(::RPG::Client::OpenWorld::FadingPriority a1, ::RPG::Client::OpenWorld::FadingPriority a2)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingPriority, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_B0C9E856F8614857_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_98984F75628BD4A0(::RPG::Client::OpenWorld::FadingPriority a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_98984F75628BD4A0_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_673217A779339F67(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_200*>* a1, ::Class_1_43BD383C98B4C0C5_200* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_200*>*, ::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_673217A779339F67_OFFSET))(a1, a2);
	}

	static ::RPG::Client::OpenWorld::FadingSizeTier Method_2_514D758453905842(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::RPG::Client::OpenWorld::FadingSizeTier(*)(::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_514D758453905842_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_A3F50826E47AF91B(::Class_1_8A6989C352B0F0F0* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Boolean(*)(::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A3F50826E47AF91B_OFFSET))(a1, a2);
	}

	::RPG::Client::OpenWorld::FadingDistanceTier Method_2_9EDBF26057788353(::Class_1_43BD383C98B4C0C5_200* a1, ::Struct_2_3D5F31420A8FFFAB a2)
	{
		return ((::RPG::Client::OpenWorld::FadingDistanceTier(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_9EDBF26057788353_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2F8FA374EC52F23F(::Class_1_43BD383C98B4C0C5_200* a1, ::System::Int32 a2, ::RPG::Client::OpenWorld::FadingLowRejectedReason& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::System::Int32, ::RPG::Client::OpenWorld::FadingLowRejectedReason&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2F8FA374EC52F23F_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_8122CA65A8871E31(::Class_1_43BD383C98B4C0C5_200* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_1_43BD383C98B4C0C5_200*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_8122CA65A8871E31_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_38740012B28097EB(::RPG::Client::OpenWorld::FadingPriority a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_38740012B28097EB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_2_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_814B2B0F621DA493_OFFSET))(this);
	}

	::System::Void Method_2_CA8345F08AB32EBF(::Class_1_43BD383C98B4C0C5_200* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA8345F08AB32EBF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA8345F08AB32EBF_1(::Class_1_43BD383C98B4C0C5_200* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_200*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA8345F08AB32EBF_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_D1DAA01ABF3D4077(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Boolean(*)(::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D1DAA01ABF3D4077_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_7BA8DD80C3AB9B17(::Class_1_43BD383C98B4C0C5_200* a1)
	{
		return ((::System::Boolean(*)(::Class_1_43BD383C98B4C0C5_200*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7BA8DD80C3AB9B17_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_52AC5A7E30C57CDD(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_52AC5A7E30C57CDD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_5B0BFDE53F3EF8D7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5B0BFDE53F3EF8D7_OFFSET))(a1, a2);
	}

	static ::System::String* Method_2_1FAABE846E698D1A(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1FAABE846E698D1A_OFFSET))(a1);
	}

	static ::System::String* Method_2_4DC8F3BA94C1B88F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4DC8F3BA94C1B88F_OFFSET))(a1, a2);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	static ::System::Void Method_2_B26D020C1C1FC342(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_B26D020C1C1FC342_OFFSET))(a1);
	}

	::System::Void Method_2_E02E69A2C8DC0BB2(::RPG::Client::OpenWorld::FadingPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E02E69A2C8DC0BB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_599021EE91C695A9(::RPG::Client::OpenWorld::FadingPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_599021EE91C695A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_3E6FB3DE27C4C8EC(::RPG::Client::OpenWorld::FadingImmediateFinishReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3E6FB3DE27C4C8EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FBC1A60355758EB(::RPG::Client::OpenWorld::FadingInvalidReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingInvalidReason))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3FBC1A60355758EB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2E47F09A457E7E05_OFFSET))(this, a1);
	}
};
