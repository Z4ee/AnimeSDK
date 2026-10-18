#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4CDA8FF36827A1F_ColumeType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_547;
class Class_1_9B885D89E776D6C6;
class Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0xB4DE490)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0xB4E5BD0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xB4E5AC0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_1F2D766A8C220114_1_OFFSET UNITYSDK_OFFSET(0xB4E45E0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_1F2D766A8C220114_OFFSET UNITYSDK_OFFSET(0xB4DFC20)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_27251A3945436E8E_1_OFFSET UNITYSDK_OFFSET(0xB4E2990)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_27251A3945436E8E_OFFSET UNITYSDK_OFFSET(0xB4E1DD0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_39A6486358C5EEEE_OFFSET UNITYSDK_OFFSET(0xB4DC670)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_3FB378AD48E4B10B_OFFSET UNITYSDK_OFFSET(0xB4E4070)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_485F3682F812D478_OFFSET UNITYSDK_OFFSET(0xB4DCA50)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_59697C655231D4B1_1_OFFSET UNITYSDK_OFFSET(0xB4E3780)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_59697C655231D4B1_OFFSET UNITYSDK_OFFSET(0xB4DEEB0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_5A6E6A9E8375DF48_OFFSET UNITYSDK_OFFSET(0xB4E02F0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0xB4E23C0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xB4E21A0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_5E9E9972123BF939_1_OFFSET UNITYSDK_OFFSET(0xB4E35C0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_5E9E9972123BF939_OFFSET UNITYSDK_OFFSET(0xB4E2DB0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0xB4DBC10)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_686E23A4B3E2E9EC_OFFSET UNITYSDK_OFFSET(0xB4DE4D0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_6D7FE6CC17E02460_OFFSET UNITYSDK_OFFSET(0xB4DEB10)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_72C8EFA09BE7294E_OFFSET UNITYSDK_OFFSET(0xB4DE7B0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_75998D4FA122BE0C_OFFSET UNITYSDK_OFFSET(0xB4DE300)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_7FA622F8238A92B7_1_OFFSET UNITYSDK_OFFSET(0xB4E2720)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_7FA622F8238A92B7_2_OFFSET UNITYSDK_OFFSET(0xB4E33B0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_7FA622F8238A92B7_OFFSET UNITYSDK_OFFSET(0xB4DFA40)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_82125FD1B8FE1611_OFFSET UNITYSDK_OFFSET(0xB4E2F80)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_84A9358A026DA23C_OFFSET UNITYSDK_OFFSET(0xB4E3DB0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB4DBB40)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_95E181670AB28CF8_1_OFFSET UNITYSDK_OFFSET(0xB4DEB90)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_95E181670AB28CF8_OFFSET UNITYSDK_OFFSET(0xB4DED20)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_962761C929DB2E3F_OFFSET UNITYSDK_OFFSET(0xB4DCE10)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_A36DD6986EFA06F9_OFFSET UNITYSDK_OFFSET(0xB4E42C0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_A72DDBE27B2DFEF7_OFFSET UNITYSDK_OFFSET(0xB4E0590)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_AEEF66F4561AE478_OFFSET UNITYSDK_OFFSET(0xB4E2450)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xB4E02A0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xB4E5B60)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xB4E5A50)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB4DC4F0)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_E20865B68A0DABD7_OFFSET UNITYSDK_OFFSET(0xB4E0630)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_E52817D5DECB3A42_OFFSET UNITYSDK_OFFSET(0xB4E3A90)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_EA8587082301D8CE_OFFSET UNITYSDK_OFFSET(0xB4DF590)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0xB4DC530)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_F737863C2C676D53_OFFSET UNITYSDK_OFFSET(0xB4DB020)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_F8B33E9F274A9509_OFFSET UNITYSDK_OFFSET(0xB4E1A50)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_F99B4893D2D37DA4_OFFSET UNITYSDK_OFFSET(0xB4DFE30)
#define CLASS_1_F4CDA8FF36827A1F_METHOD_1_FBC3D7D544C66CDA_OFFSET UNITYSDK_OFFSET(0xB4E2230)
#define CLASS_1_F4CDA8FF36827A1F__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4E47C0)
#define CLASS_1_F4CDA8FF36827A1F__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E5C70)
#define CLASS_1_F4CDA8FF36827A1F___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_27_0_OFFSET UNITYSDK_OFFSET(0xB4E1A30)

inline static constexpr unsigned int Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex = 56207;

class Class_1_F4CDA8FF36827A1F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_PDKAECMJECD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551A0);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_NOHHEJMBMCO()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551A8);
	}
	static ::System::String** StaticGet_JOILJOCPKDE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551B0);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_GCFJMINLDFP()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_OJMKGEFKMOM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551C0);
	}
	static ::System::String** StaticGet_NDMBBNJPGGB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551C8);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_EHDLHKBFLHG()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_GLFANIFAMOO()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551D8);
	}
	static ::System::String** StaticGet_BFJPPJDBBMA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_MDAMKDHCBMO()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551E8);
	}
	static ::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>** StaticGet_BMFKEHONEFH()
	{
		return (::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F_TypeDefinitionIndex)->GetStaticField(0x551F0);
	}
	// static const ::System::String* PCIMCJGPAEI; // 0x0
	// static const ::System::String* GKDBBPCHGOG; // 0x0
	// static const ::System::String* LFPGLDENDEM; // 0x0
	// static const ::System::String* BMLAMNOOGCN; // 0x0
	// static const ::System::String* LKGMNOKKFHK; // 0x0
	// static const ::System::String* MCLPNDHABBB; // 0x0
	// static const ::System::String* DHMGGCCFKPH; // 0x0
	// static const ::System::String* JLCNNHMLJNH; // 0x0
	// static const ::System::String* HOHNLKFFBFN; // 0x0
	// static const ::System::String* NJADGNPDNLJ; // 0x0
	// static const ::System::String* MBFCHFHBKFO; // 0x0
	// static const ::System::String* LEGEPHAPCLI; // 0x0
	// static const ::System::String* KIPAFLELKKA; // 0x0
	// static const ::System::String* CDJADKLOHDI; // 0x0
	// static const ::System::String* KGBCFEIJHOA; // 0x0
	// static const ::System::String* LALOBIAEOLC; // 0x0
	// static const ::System::String* MKFMCLIDBIM; // 0x0
	// static const ::System::String* JOFLCFBJFOK; // 0x0
	// static const ::System::String* MOJPDDAOIMM; // 0x0
	// static const ::System::String* HHMEHOCPEPA; // 0x0
	// static const ::System::String* KEJGCDHMGDD; // 0x0
	// static const ::System::String* LKEKLMHDBAL; // 0x0
	// static const ::System::String* BKAKPIALGLF; // 0x0
	// static const ::System::String* CBLLMPHPGIC; // 0x0
	// static const ::System::String* PAOENFNNBOK; // 0x0
	// static const ::System::String* KGNCKCMHMJK; // 0x0
	// static const ::System::String* JBNIAKPOAMG; // 0x0
	// static const ::System::String* PGDKAJLHBDA; // 0x0
	// static const ::System::String* MLHILPLHIHO; // 0x0
	// static const ::System::String* AHFKGICOODI; // 0x0
	// static const ::System::String* IPHIKMLGKOB; // 0x0
	// static const ::System::String* BCHAMFJBICH; // 0x0
	// static const ::System::String* HLMPEPEEDGI; // 0x0
	// static const ::System::String* FFPGMJGCEEP; // 0x0
	// static const ::System::String* KHEJKCBCAKO; // 0x0
	// static const ::System::String* DGAAHCCKGHH; // 0x0
	// static const ::System::String* OGJHDOEBJEP; // 0x0
	// static const ::System::String* KOJGKAHMBOH; // 0x0
	// static const ::System::String* JHOJKKDPLLH; // 0x0
	// static const ::System::String* CDDKAPDCBAM; // 0x0
	// static const ::System::String* DKBACPDPNBE; // 0x0
	// static const ::System::String* NCFPGLLNNNL; // 0x0
	// static const ::System::String* MAMNNLDILBL; // 0x0
	// static const ::System::String* EKLCEEDJIOF; // 0x0
	// static const ::System::String* CPJKDNDNJPF; // 0x0
	// static const ::System::String* JMHPIECCOHK; // 0x0
	// static const ::System::String* AMHLCJFJHFB; // 0x0
	// static const ::System::String* DJHIEEJLDFC; // 0x0
	// static const ::System::String* GGPHOOEGGOM; // 0x0
	// static const ::System::String* AKPGNEEDFGE; // 0x0
	// static const ::System::String* HACMIMBDEAA; // 0x0
	::System::String* JLPFONFICNK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*>* GBOFGEEPFCM; // 0x18
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F737863C2C676D53(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::BattleLineupData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_F737863C2C676D53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_ED60CE426DBC8E38_OFFSET))(this, a1);
	}

	::System::Void Method_1_485F3682F812D478(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_485F3682F812D478_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_39A6486358C5EEEE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_39A6486358C5EEEE_OFFSET))(this, a1);
	}

	static ::Class_1_9B885D89E776D6C6* Method_1_75998D4FA122BE0C(::System::Collections::Generic::List_1<::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*>* a1)
	{
		return ((::Class_1_9B885D89E776D6C6*(*)(::System::Collections::Generic::List_1<::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*>*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_75998D4FA122BE0C_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	static ::System::String* Method_1_686E23A4B3E2E9EC(::Class_1_F4CDA8FF36827A1F_ColumeType a1, ::RPG::GameCore::AbilityProperty a2)
	{
		return ((::System::String*(*)(::Class_1_F4CDA8FF36827A1F_ColumeType, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_686E23A4B3E2E9EC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_72C8EFA09BE7294E(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_72C8EFA09BE7294E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_962761C929DB2E3F(::RPG::GameCore::CSVRow* a1, ::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CSVRow*, ::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_962761C929DB2E3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D7FE6CC17E02460(::RPG::GameCore::CSVRow* a1, ::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CSVRow*, ::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_6D7FE6CC17E02460_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_95E181670AB28CF8(::RPG::GameCore::CSVRow* a1, ::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CSVRow*, ::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_95E181670AB28CF8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_95E181670AB28CF8_1(::RPG::GameCore::CSVRow* a1, ::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CSVRow*, ::Class_1_F4CDA8FF36827A1F_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_95E181670AB28CF8_1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_59697C655231D4B1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_59697C655231D4B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA8587082301D8CE(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_EA8587082301D8CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_7FA622F8238A92B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_1F2D766A8C220114_OFFSET))(this, a1);
	}

	::System::Void Method_1_F99B4893D2D37DA4(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_F99B4893D2D37DA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A6E6A9E8375DF48(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_5A6E6A9E8375DF48_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_A72DDBE27B2DFEF7(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_A72DDBE27B2DFEF7_OFFSET))(a1);
	}

	::System::Void Method_1_E20865B68A0DABD7(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_E20865B68A0DABD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8B33E9F274A9509(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_F8B33E9F274A9509_OFFSET))(this, a1);
	}

	::System::Void Method_1_27251A3945436E8E(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_27251A3945436E8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBC3D7D544C66CDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_FBC3D7D544C66CDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_AEEF66F4561AE478(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_AEEF66F4561AE478_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_7FA622F8238A92B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_27251A3945436E8E_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_27251A3945436E8E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E9E9972123BF939(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_5E9E9972123BF939_OFFSET))(this, a1);
	}

	::System::Void Method_1_82125FD1B8FE1611(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_82125FD1B8FE1611_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7_2(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_7FA622F8238A92B7_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E9E9972123BF939_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_5E9E9972123BF939_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_59697C655231D4B1_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_59697C655231D4B1_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52817D5DECB3A42(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_E52817D5DECB3A42_OFFSET))(this, a1);
	}

	::System::Void Method_1_84A9358A026DA23C(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_84A9358A026DA23C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FB378AD48E4B10B(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_3FB378AD48E4B10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A36DD6986EFA06F9(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_A36DD6986EFA06F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_1F2D766A8C220114_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_1B9CC121BDC8766D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F_METHOD_1_1B9CC121BDC8766D_1_OFFSET))(a1);
	}

	static ::System::String* __OnLightCharacterCreate_g___ConcatBuildData_27_0(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_27_0_OFFSET))(a1);
	}
};
