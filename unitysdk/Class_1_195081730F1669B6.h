#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_195081730F1669B6_ColumeType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_195081730F1669B6_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0xB641650)
#define CLASS_1_195081730F1669B6_METHOD_1_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0xB648790)
#define CLASS_1_195081730F1669B6_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xB648680)
#define CLASS_1_195081730F1669B6_METHOD_1_1E9CD1B112190748_OFFSET UNITYSDK_OFFSET(0xB641690)
#define CLASS_1_195081730F1669B6_METHOD_1_1F2D766A8C220114_1_OFFSET UNITYSDK_OFFSET(0xB642A40)
#define CLASS_1_195081730F1669B6_METHOD_1_1F2D766A8C220114_2_OFFSET UNITYSDK_OFFSET(0xB647310)
#define CLASS_1_195081730F1669B6_METHOD_1_1F2D766A8C220114_OFFSET UNITYSDK_OFFSET(0xB642830)
#define CLASS_1_195081730F1669B6_METHOD_1_27251A3945436E8E_1_OFFSET UNITYSDK_OFFSET(0xB6456C0)
#define CLASS_1_195081730F1669B6_METHOD_1_27251A3945436E8E_OFFSET UNITYSDK_OFFSET(0xB644B10)
#define CLASS_1_195081730F1669B6_METHOD_1_3FB378AD48E4B10B_OFFSET UNITYSDK_OFFSET(0xB646DA0)
#define CLASS_1_195081730F1669B6_METHOD_1_4B7241AD053E7D5C_OFFSET UNITYSDK_OFFSET(0xB63F5F0)
#define CLASS_1_195081730F1669B6_METHOD_1_59697C655231D4B1_1_OFFSET UNITYSDK_OFFSET(0xB6464B0)
#define CLASS_1_195081730F1669B6_METHOD_1_59697C655231D4B1_OFFSET UNITYSDK_OFFSET(0xB641CB0)
#define CLASS_1_195081730F1669B6_METHOD_1_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0xB645100)
#define CLASS_1_195081730F1669B6_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xB644EE0)
#define CLASS_1_195081730F1669B6_METHOD_1_5E9E9972123BF939_1_OFFSET UNITYSDK_OFFSET(0xB6462F0)
#define CLASS_1_195081730F1669B6_METHOD_1_5E9E9972123BF939_OFFSET UNITYSDK_OFFSET(0xB645AF0)
#define CLASS_1_195081730F1669B6_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0xB63EB90)
#define CLASS_1_195081730F1669B6_METHOD_1_7B7B1169743C5973_OFFSET UNITYSDK_OFFSET(0xB63F980)
#define CLASS_1_195081730F1669B6_METHOD_1_7DD66AD8261C01D5_OFFSET UNITYSDK_OFFSET(0xB642380)
#define CLASS_1_195081730F1669B6_METHOD_1_7FA622F8238A92B7_1_OFFSET UNITYSDK_OFFSET(0xB6460E0)
#define CLASS_1_195081730F1669B6_METHOD_1_7FA622F8238A92B7_OFFSET UNITYSDK_OFFSET(0xB645460)
#define CLASS_1_195081730F1669B6_METHOD_1_82125FD1B8FE1611_OFFSET UNITYSDK_OFFSET(0xB645CC0)
#define CLASS_1_195081730F1669B6_METHOD_1_84A9358A026DA23C_OFFSET UNITYSDK_OFFSET(0xB646AE0)
#define CLASS_1_195081730F1669B6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB63EAC0)
#define CLASS_1_195081730F1669B6_METHOD_1_8F74C4A88302B13A_1_OFFSET UNITYSDK_OFFSET(0xB641970)
#define CLASS_1_195081730F1669B6_METHOD_1_8F74C4A88302B13A_OFFSET UNITYSDK_OFFSET(0xB641B10)
#define CLASS_1_195081730F1669B6_METHOD_1_962761C929DB2E3F_OFFSET UNITYSDK_OFFSET(0xB63FD00)
#define CLASS_1_195081730F1669B6_METHOD_1_A36DD6986EFA06F9_OFFSET UNITYSDK_OFFSET(0xB646FF0)
#define CLASS_1_195081730F1669B6_METHOD_1_AA250C88CBAD6806_OFFSET UNITYSDK_OFFSET(0xB641900)
#define CLASS_1_195081730F1669B6_METHOD_1_AEEF66F4561AE478_OFFSET UNITYSDK_OFFSET(0xB645190)
#define CLASS_1_195081730F1669B6_METHOD_1_C33F2C60A2B4E64A_OFFSET UNITYSDK_OFFSET(0xB643110)
#define CLASS_1_195081730F1669B6_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xB6430C0)
#define CLASS_1_195081730F1669B6_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xB648720)
#define CLASS_1_195081730F1669B6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xB648610)
#define CLASS_1_195081730F1669B6_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB63F470)
#define CLASS_1_195081730F1669B6_METHOD_1_E20865B68A0DABD7_OFFSET UNITYSDK_OFFSET(0xB643370)
#define CLASS_1_195081730F1669B6_METHOD_1_E52817D5DECB3A42_OFFSET UNITYSDK_OFFSET(0xB6467C0)
#define CLASS_1_195081730F1669B6_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0xB63F4B0)
#define CLASS_1_195081730F1669B6_METHOD_1_F737863C2C676D53_OFFSET UNITYSDK_OFFSET(0xB63DFA0)
#define CLASS_1_195081730F1669B6_METHOD_1_F8B33E9F274A9509_OFFSET UNITYSDK_OFFSET(0xB644780)
#define CLASS_1_195081730F1669B6_METHOD_1_F99B4893D2D37DA4_OFFSET UNITYSDK_OFFSET(0xB642C50)
#define CLASS_1_195081730F1669B6_METHOD_1_FBC3D7D544C66CDA_OFFSET UNITYSDK_OFFSET(0xB644F70)
#define CLASS_1_195081730F1669B6__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6474F0)
#define CLASS_1_195081730F1669B6__CTOR_OFFSET UNITYSDK_OFFSET(0xB648830)
#define CLASS_1_195081730F1669B6___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET UNITYSDK_OFFSET(0xB644760)

inline static constexpr unsigned int Class_1_195081730F1669B6_TypeDefinitionIndex = 56394;

class Class_1_195081730F1669B6 : public ::System::Object
{
public:
	static ::System::String** StaticGet_JOILJOCPKDE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6_TypeDefinitionIndex)->GetStaticField(0x65420);
	}
	static ::System::String** StaticGet_BFJPPJDBBMA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6_TypeDefinitionIndex)->GetStaticField(0x65428);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_PDKAECMJECD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6_TypeDefinitionIndex)->GetStaticField(0x65430);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_MDAMKDHCBMO()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6_TypeDefinitionIndex)->GetStaticField(0x65438);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_NOHHEJMBMCO()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6_TypeDefinitionIndex)->GetStaticField(0x65440);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_GLFANIFAMOO()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6_TypeDefinitionIndex)->GetStaticField(0x65448);
	}
	static ::System::String** StaticGet_NDMBBNJPGGB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6_TypeDefinitionIndex)->GetStaticField(0x65450);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_GCFJMINLDFP()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6_TypeDefinitionIndex)->GetStaticField(0x65458);
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
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x10
	::System::Collections::Generic::List_1<::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824*>* GBOFGEEPFCM; // 0x18
	::System::String* JLPFONFICNK; // 0x20
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>* BMFKEHONEFH; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F737863C2C676D53(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::BattleLineupData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_F737863C2C676D53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_ED60CE426DBC8E38_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B7B1169743C5973(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_7B7B1169743C5973_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4B7241AD053E7D5C(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_4B7241AD053E7D5C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	::System::String* Method_1_1E9CD1B112190748(::Class_1_195081730F1669B6_ColumeType a1, ::RPG::GameCore::AbilityProperty a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_195081730F1669B6_ColumeType, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_1E9CD1B112190748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_962761C929DB2E3F(::RPG::GameCore::CSVRow* a1, ::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_962761C929DB2E3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA250C88CBAD6806(::RPG::GameCore::CSVRow* a1, ::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_AA250C88CBAD6806_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F74C4A88302B13A(::RPG::GameCore::CSVRow* a1, ::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_8F74C4A88302B13A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F74C4A88302B13A_1(::RPG::GameCore::CSVRow* a1, ::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_195081730F1669B6_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_8F74C4A88302B13A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_59697C655231D4B1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_59697C655231D4B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD66AD8261C01D5(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_7DD66AD8261C01D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_1F2D766A8C220114_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_1F2D766A8C220114_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F99B4893D2D37DA4(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_F99B4893D2D37DA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C33F2C60A2B4E64A(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_C33F2C60A2B4E64A_OFFSET))(this, a1);
	}

	::System::Void Method_1_E20865B68A0DABD7(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_E20865B68A0DABD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8B33E9F274A9509(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_F8B33E9F274A9509_OFFSET))(this, a1);
	}

	::System::Void Method_1_27251A3945436E8E(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_27251A3945436E8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBC3D7D544C66CDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_FBC3D7D544C66CDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_AEEF66F4561AE478(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_AEEF66F4561AE478_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_7FA622F8238A92B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_27251A3945436E8E_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_27251A3945436E8E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E9E9972123BF939(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_5E9E9972123BF939_OFFSET))(this, a1);
	}

	::System::Void Method_1_82125FD1B8FE1611(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_82125FD1B8FE1611_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_7FA622F8238A92B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E9E9972123BF939_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_5E9E9972123BF939_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_59697C655231D4B1_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_59697C655231D4B1_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52817D5DECB3A42(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_E52817D5DECB3A42_OFFSET))(this, a1);
	}

	::System::Void Method_1_84A9358A026DA23C(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_84A9358A026DA23C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FB378AD48E4B10B(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_3FB378AD48E4B10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A36DD6986EFA06F9(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_A36DD6986EFA06F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114_2(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_1F2D766A8C220114_2_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_1B9CC121BDC8766D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6_METHOD_1_1B9CC121BDC8766D_1_OFFSET))(a1);
	}

	static ::System::String* __OnLightCharacterCreate_g___ConcatBuildData_24_0(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET))(a1);
	}
};
