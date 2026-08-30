#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_B57FD4EDC70CAC4C.h"
#include "unitysdk/Struct_2_EF7C37AF69DC7CE6.h"
#include "unitysdk/System/Object.h"

class Class_1_09994FA7935E2E36;
class Class_1_5E9C16BFAA602EE3;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0x15CC2530)
#define CLASS_1_843DD6330B22E422_METHOD_1_FA3CBF3B3C77E400_OFFSET UNITYSDK_OFFSET(0x15CC2300)
#define CLASS_1_843DD6330B22E422_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15CC2760)
#define CLASS_1_843DD6330B22E422__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC2230)

inline static constexpr unsigned int Class_1_843DD6330B22E422_TypeDefinitionIndex = 54635;

class Class_1_843DD6330B22E422 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0x10
	::Class_1_5E9C16BFAA602EE3* AMNONNKEAEB; // 0x18
	::RPG::GameCore::TurnBasedAbilityComponent* DOCIPOEABOM; // 0x20
	::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x28
	::Struct_2_3A335394524C9E44 MBMCEPGDIBM; // 0x30
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* AKDHBIADDOL; // 0xE8
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* OCIPOMOHBJC; // 0xF0
	::System::String* HPIMGAKOIPM; // 0xF8
	::RPG::GameCore::TurnBasedAbilityComponent* OBGGPEHLPBG; // 0x100
	::RPG::GameCore::TurnBasedAbilityComponent* GNOCBLOMLAC; // 0x108
	::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x110
	::RPG::PoolList_1<::Struct_2_EF7C37AF69DC7CE6>* GEFFDFFLPPF; // 0x118
	::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x120
	::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x128
	::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x130
	::System::Boolean KKNILGDAAGI; // 0x134
	::System::Boolean AAJBEJEPILH; // 0x135
	::System::Boolean KEHDCIHKOBD; // 0x136
	::System::Boolean INNMMBDBGJC; // 0x137
	::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x138
	::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x140
	::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x148
	::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x150
	::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x158
	::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x160
	::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x168
	::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x170
	::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x178
	::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x180
	::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x188
	::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x190
	::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x198
	::RPG::GameCore::FixPoint GHOOECIPNII; // 0x1A0
	::RPG::GameCore::FixPoint GIJLEFHHAIO; // 0x1A8
	::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x1B0
	::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x1B8
	::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x1C0
	::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x210
	::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x218
	::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x220
	::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x228
	::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x230
	::RPG::GameCore::FixPoint KNEPAPEIOPB; // 0x238
	::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x240
	::RPG::GameCore::FixPoint CNNINPEOHCH; // 0x248
	::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x250
	::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x258
	::RPG::GameCore::FixPoint INNKNDDFGHP; // 0x260
	::RPG::GameCore::FixPoint BNNKHNNCPHN; // 0x268
	::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x270
	::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x278
	::System::Boolean MLBHAGIHNFA; // 0x280
	::System::Boolean AOBHEMEMDJH; // 0x281
	::System::Boolean AKLCPFOFBKG; // 0x282
	::System::Boolean NHOJOIEDGEH; // 0x283
	::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x284
	::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x288
	::RPG::GameCore::FixPoint PADDJNBMFOF; // 0x290
	::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x298
	::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x2A0
	::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x2A8
	::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x2B0
	::RPG::GameCore::FixPoint NINECGOCDDK; // 0x2B8
	::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x2C0
	::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x2C8
	::RPG::GameCore::FixPoint MGCOFELGBED; // 0x2D0
	::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x2D8
	::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x2E0
	::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x2E8
	::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x2F0
	::System::UInt32 DPBBGIPFCOK; // 0x2F8
	::System::Boolean HDMPHJGFGDE; // 0x2FC
	::System::Boolean EDGLOCBGLOC; // 0x2FD
	::System::Boolean BJEGFBGIOBK; // 0x2FE
	::System::Boolean DENHHOIDBLC; // 0x2FF
	::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x300
	::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x308
	::RPG::GameCore::FixPoint ODOECAHLNNI; // 0x310
	::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x318
	::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x320
	::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x328
	::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x330
	::RPG::GameCore::DamageIntegerizeCategory ECJIFBMNFJP; // 0x338
	::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x33C
	::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x340
	::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x388
	::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x390
	::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x398
	::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x3A0
	::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x3A8
	::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x3B0
	::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x3B8
	::RPG::GameCore::FixPoint DLEALABDPEA; // 0x3C0
	::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x3C8
	::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x3D0
	::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x3D8
	::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x3E0
	::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x430
	::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x438
	::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x440
	::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x448
	::RPG::GameCore::FixPoint PKMAOKAENJO; // 0x490
	::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x498
	::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x4A0
	::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x4A8
	::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x4F0
	::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x4F8
	::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x500
	::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x508
	::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x510
	::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x518
	::RPG::GameCore::FixPoint NAACKINMKHM; // 0x520
	::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x528
	::System::Boolean GFJJBADBDKP; // 0x530
	::System::Boolean JCBHAFCHIPF; // 0x531
	::System::Boolean DMGFGJMGFOF; // 0x532
	::System::Boolean DJMDPEHJOGC; // 0x533
	::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x534
	::RPG::GameCore::FixPoint EIDKMJEFKEF; // 0x538
	::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x540
	::System::Boolean HLGONPKPIBO; // 0x544
	::System::Boolean DJPJFIEDPDA; // 0x545
	::System::Boolean BLONLALNHHH; // 0x546
	::System::Boolean ELJHLJPMLAE; // 0x547
	::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x548
	::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x550
	::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x558
	::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x560
	::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x568
	::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x570
	::Struct_2_B57FD4EDC70CAC4C DDMHHFBIJMA; // 0x578
	::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x600
	::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x608
	::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x610
	::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x618
	::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x620
	::RPG::GameCore::FixPoint HGOECIIHNDB; // 0x628
	::RPG::GameCore::FixPoint KJAALAINDIC; // 0x630
	::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x638
	::RPG::GameCore::FixPoint AICLEMNCBED; // 0x640
	::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x648
	::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x650
	::System::UInt32 KNIABGNIBJA; // 0x658
	::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x65C
	::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x660
	::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x668
	::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x670
	::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x678
	::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x680
	::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x688
	::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x690
	::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x698
	::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x6A0
	::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x6A8
	::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x6B0
	::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x6B8
	::RPG::GameCore::FixPoint IIOCCBNGIAM; // 0x700
	::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x708
	::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x710
	::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x714
	::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x718
	::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x720
	::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x728

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_FA3CBF3B3C77E400()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_FA3CBF3B3C77E400_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_TOSTRING_OFFSET))(this);
	}
};
