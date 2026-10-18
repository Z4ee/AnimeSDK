#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_B57FD4EDC70CAC4C.h"
#include "unitysdk/System/Object.h"

class Class_1_09994FA7935E2E36;
class Class_1_56A1684BE394769D;
class Class_1_5E9C16BFAA602EE3;
class Class_2_291F7DA21A504FC4;
class Class_3_BB8B7764D3497776;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0xB2D30D0)
#define CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0xB2D2EA0)
#define CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB2D3300)
#define CLASS_1_70CCABA9DB985F52__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D2D70)

inline static constexpr unsigned int Class_1_70CCABA9DB985F52_TypeDefinitionIndex = 53849;

class Class_1_70CCABA9DB985F52 : public ::System::Object
{
public:
	::Class_3_BB8B7764D3497776* GNOCBLOMLAC; // 0x10
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* OCIPOMOHBJC; // 0x18
	::System::String* HPIMGAKOIPM; // 0x20
	::Struct_2_3A335394524C9E44 MBMCEPGDIBM; // 0x28
	::Class_3_BB8B7764D3497776* DOCIPOEABOM; // 0xE0
	::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0xE8
	::Class_1_56A1684BE394769D* PAIDKGLPLFK; // 0xF0
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* AKDHBIADDOL; // 0xF8
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0x100
	::Class_1_5E9C16BFAA602EE3* AMNONNKEAEB; // 0x108
	::Class_2_291F7DA21A504FC4* EAEJGPLLGMI; // 0x110
	::Class_3_BB8B7764D3497776* OBGGPEHLPBG; // 0x118
	::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x120
	::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x128
	::RPG::GameCore::FixPoint LOEHPLGLAKD; // 0x130
	::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x138
	::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x140
	::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x148
	::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x150
	::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x198
	::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x1A0
	::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x1A8
	::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x1B0
	::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x1B8
	::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x1C0
	::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x1C8
	::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x1D0
	::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x1D8
	::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x1E0
	::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x1E8
	::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x1F0
	::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x1F8
	::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x200
	::System::UInt32 KNIABGNIBJA; // 0x208
	::System::Boolean AKLCPFOFBKG; // 0x20C
	::System::Boolean DJPJFIEDPDA; // 0x20D
	::System::Boolean DJMDPEHJOGC; // 0x20E
	::System::Boolean KEHDCIHKOBD; // 0x20F
	::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x210
	::System::Boolean EDGLOCBGLOC; // 0x218
	::System::Boolean MLBHAGIHNFA; // 0x219
	::System::Boolean DENHHOIDBLC; // 0x21A
	::System::Boolean HDMPHJGFGDE; // 0x21B
	::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x21C
	::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x220
	::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x228
	::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x278
	::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x280
	::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x288
	::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x290
	::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x298
	::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x2A0
	::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x2E8
	::RPG::GameCore::FixPoint GFBKLIGDCHG; // 0x2F0
	::RPG::GameCore::FixPoint KJAALAINDIC; // 0x2F8
	::Struct_2_B57FD4EDC70CAC4C DDMHHFBIJMA; // 0x300
	::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x388
	::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x390
	::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x398
	::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x3A0
	::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x3A8
	::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x3B0
	::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x3B8
	::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x3C0
	::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x3C8
	::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x3D0
	::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x3D8
	::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x3DC
	::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x3E0
	::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x3E8
	::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x3F0
	::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x3F8
	::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x400
	::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x408
	::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x410
	::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x418
	::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x420
	::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x428
	::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x430
	::RPG::GameCore::FixPoint MGCOFELGBED; // 0x438
	::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x440
	::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x448
	::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x450
	::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x458
	::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x460
	::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x468
	::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x470
	::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x478
	::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x480
	::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x488
	::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x48C
	::RPG::GameCore::FixPoint IDBKJLLOOHO; // 0x490
	::RPG::GameCore::FixPoint HBKAKNLFLJM; // 0x498
	::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x4A0
	::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x4A8
	::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x4F8
	::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x500
	::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x508
	::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x510
	::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x518
	::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x520
	::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x528
	::System::Boolean ELJHLJPMLAE; // 0x530
	::System::Boolean DMGFGJMGFOF; // 0x531
	::System::Boolean BLONLALNHHH; // 0x532
	::System::Boolean GFJJBADBDKP; // 0x533
	::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x534
	::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x538
	::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x580
	::RPG::GameCore::FixPoint NINECGOCDDK; // 0x588
	::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x590
	::RPG::GameCore::FixPoint AICLEMNCBED; // 0x598
	::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x5A0
	::System::Boolean HLGONPKPIBO; // 0x5A4
	::System::Boolean NHOJOIEDGEH; // 0x5A5
	::System::Boolean BJEGFBGIOBK; // 0x5A6
	::System::Boolean AOBHEMEMDJH; // 0x5A7
	::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x5A8
	::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x5B0
	::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x5B8
	::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x5C0
	::System::UInt32 DPBBGIPFCOK; // 0x608
	::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x60C
	::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x610
	::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x618
	::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x620
	::RPG::GameCore::FixPoint GHOOECIPNII; // 0x628
	::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x630
	::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x638
	::RPG::GameCore::FixPoint NAACKINMKHM; // 0x640
	::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x648
	::RPG::GameCore::FixPoint OHCIHFMAMJA; // 0x650
	::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x658
	::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x660
	::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x668
	::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x670
	::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x678
	::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x680
	::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x688
	::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x690
	::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x698
	::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x6A0
	::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x6A8
	::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x6B0
	::RPG::GameCore::FixPoint FJGPHPGJDJC; // 0x6B8
	::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x6C0
	::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x6C8
	::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x6D0
	::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x6D8
	::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x6E0
	::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x6E8
	::RPG::GameCore::FixPoint IMPHBPAJAGB; // 0x6F0
	::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x6F8
	::RPG::GameCore::FixPoint DLEALABDPEA; // 0x700

	::System::Void _ctor(::Class_3_BB8B7764D3497776* a1, ::Class_3_BB8B7764D3497776* a2, ::Class_3_BB8B7764D3497776* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET))(this);
	}
};
