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

#define CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0x163E78B0)
#define CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0x163E7680)
#define CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x163E7AE0)
#define CLASS_1_70CCABA9DB985F52__CTOR_OFFSET UNITYSDK_OFFSET(0x163E7550)

inline static constexpr unsigned int Class_1_70CCABA9DB985F52_TypeDefinitionIndex = 54063;

class Class_1_70CCABA9DB985F52 : public ::System::Object
{
public:
	::Class_2_291F7DA21A504FC4* EAEJGPLLGMI; // 0x10
	::Struct_2_3A335394524C9E44 MBMCEPGDIBM; // 0x18
	::System::String* HPIMGAKOIPM; // 0xD0
	::Class_1_5E9C16BFAA602EE3* AMNONNKEAEB; // 0xD8
	::Class_3_BB8B7764D3497776* DOCIPOEABOM; // 0xE0
	::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0xE8
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* AKDHBIADDOL; // 0xF0
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0xF8
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* OCIPOMOHBJC; // 0x100
	::Class_1_56A1684BE394769D* PAIDKGLPLFK; // 0x108
	::Class_3_BB8B7764D3497776* GNOCBLOMLAC; // 0x110
	::Class_3_BB8B7764D3497776* OBGGPEHLPBG; // 0x118
	::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x120
	::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x128
	::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x178
	::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x180
	::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x188
	::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x190
	::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x198
	::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x1A0
	::System::Boolean DJPJFIEDPDA; // 0x1A8
	::System::Boolean MLBHAGIHNFA; // 0x1A9
	::System::Boolean NHOJOIEDGEH; // 0x1AA
	::System::Boolean BJEGFBGIOBK; // 0x1AB
	::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x1AC
	::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x1B0
	::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x1B8
	::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x1C0
	::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x1C8
	::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x1D0
	::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x1D8
	::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x220
	::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x228
	::System::Boolean DENHHOIDBLC; // 0x22C
	::System::Boolean ELJHLJPMLAE; // 0x22D
	::System::Boolean HDMPHJGFGDE; // 0x22E
	::System::Boolean HLGONPKPIBO; // 0x22F
	::RPG::GameCore::FixPoint NINECGOCDDK; // 0x230
	::RPG::GameCore::FixPoint IMPHBPAJAGB; // 0x238
	::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x240
	::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x248
	::System::Boolean KEHDCIHKOBD; // 0x24C
	::System::Boolean GFJJBADBDKP; // 0x24D
	::System::Boolean AOBHEMEMDJH; // 0x24E
	::System::Boolean BLONLALNHHH; // 0x24F
	::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x250
	::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x2A0
	::RPG::GameCore::FixPoint IDBKJLLOOHO; // 0x2A8
	::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x2B0
	::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x2B8
	::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x2C0
	::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x2C8
	::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x2D0
	::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x2D8
	::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x2E0
	::RPG::GameCore::FixPoint GHOOECIPNII; // 0x2E8
	::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x2F0
	::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x2F8
	::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x300
	::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x308
	::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x310
	::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x318
	::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x320
	::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x328
	::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x370
	::RPG::GameCore::FixPoint HBKAKNLFLJM; // 0x378
	::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x380
	::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x3C8
	::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x3D0
	::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x3D8
	::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x3E0
	::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x3E8
	::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x3F0
	::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x3F8
	::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x400
	::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x408
	::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x410
	::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x418
	::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x420
	::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x428
	::RPG::GameCore::FixPoint FJGPHPGJDJC; // 0x430
	::RPG::GameCore::FixPoint LOEHPLGLAKD; // 0x438
	::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x440
	::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x448
	::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x450
	::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x458
	::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x460
	::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x468
	::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x470
	::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x478
	::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x480
	::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x488
	::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x490
	::System::UInt32 KNIABGNIBJA; // 0x494
	::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x498
	::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x4A0
	::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x4A8
	::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x4B0
	::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x4B8
	::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x4C0
	::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x4C8
	::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x4D0
	::RPG::GameCore::FixPoint KJAALAINDIC; // 0x4D8
	::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x4E0
	::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x4E8
	::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x4F0
	::RPG::GameCore::FixPoint OHCIHFMAMJA; // 0x4F8
	::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x500
	::RPG::GameCore::FixPoint AICLEMNCBED; // 0x508
	::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x510
	::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x518
	::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x520
	::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x528
	::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x530
	::RPG::GameCore::FixPoint MGCOFELGBED; // 0x538
	::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x540
	::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x548
	::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x550
	::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x558
	::RPG::GameCore::FixPoint NAACKINMKHM; // 0x560
	::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x568
	::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x570
	::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x578
	::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x580
	::System::Boolean AKLCPFOFBKG; // 0x584
	::System::Boolean DMGFGJMGFOF; // 0x585
	::System::Boolean EDGLOCBGLOC; // 0x586
	::System::Boolean DJMDPEHJOGC; // 0x587
	::System::UInt32 DPBBGIPFCOK; // 0x588
	::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x58C
	::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x590
	::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x598
	::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x5A0
	::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x5A8
	::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x5B0
	::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x5B8
	::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x5C0
	::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x5C8
	::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x5D0
	::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x5D8
	::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x5E0
	::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x5E8
	::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x5F0
	::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x5F4
	::Struct_2_B57FD4EDC70CAC4C DDMHHFBIJMA; // 0x5F8
	::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x680
	::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x688
	::RPG::GameCore::FixPoint DLEALABDPEA; // 0x690
	::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x698
	::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x6A0
	::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x6A8
	::RPG::GameCore::FixPoint GFBKLIGDCHG; // 0x6F0
	::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x6F8
	::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x700

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
