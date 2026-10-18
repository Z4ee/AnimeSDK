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
class Class_1_A4CE9BDC05B24F4A;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0xBB13010)
#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0xBB12DE0)
#define CLASS_1_843DD6330B22E422_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBB13240)
#define CLASS_1_843DD6330B22E422__CTOR_OFFSET UNITYSDK_OFFSET(0xBB12D10)

inline static constexpr unsigned int Class_1_843DD6330B22E422_TypeDefinitionIndex = 54422;

class Class_1_843DD6330B22E422 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IEHDBDLFEGI; // 0x10
	::System::String* HPIMGAKOIPM; // 0x18
	::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x20
	::RPG::GameCore::TurnBasedAbilityComponent* OBGGPEHLPBG; // 0x28
	::RPG::GameCore::TurnBasedAbilityComponent* DOCIPOEABOM; // 0x30
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* OCIPOMOHBJC; // 0x38
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* AKDHBIADDOL; // 0x40
	::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x48
	::Class_1_5E9C16BFAA602EE3* AMNONNKEAEB; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0x58
	::RPG::GameCore::TurnBasedAbilityComponent* GNOCBLOMLAC; // 0x60
	::Struct_2_3A335394524C9E44 MBMCEPGDIBM; // 0x68
	::Class_1_A4CE9BDC05B24F4A* IDLICNKMEOC; // 0x120
	::RPG::PoolList_1<::Struct_2_EF7C37AF69DC7CE6>* GEFFDFFLPPF; // 0x128
	::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x130
	::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x138
	::RPG::GameCore::FixPoint MGCOFELGBED; // 0x140
	::RPG::GameCore::FixPoint BNNKHNNCPHN; // 0x148
	::RPG::GameCore::FixPoint KJAALAINDIC; // 0x150
	::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x158
	::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x160
	::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x168
	::System::Boolean DJMDPEHJOGC; // 0x170
	::System::Boolean AAJBEJEPILH; // 0x171
	::System::Boolean GFJJBADBDKP; // 0x172
	::System::Boolean INNMMBDBGJC; // 0x173
	::System::Boolean PJJJBBNPFIL; // 0x174
	::System::Boolean HDMPHJGFGDE; // 0x175
	::System::Boolean KEHDCIHKOBD; // 0x176
	::System::Boolean EDGLOCBGLOC; // 0x177
	::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x178
	::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x180
	::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x188
	::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x190
	::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x194
	::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x198
	::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x1A0
	::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x1A8
	::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x1B0
	::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x1B8
	::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x1C0
	::RPG::GameCore::FixPoint EIDKMJEFKEF; // 0x1C8
	::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x1D0
	::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x1D8
	::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x1E0
	::Struct_2_B57FD4EDC70CAC4C DDMHHFBIJMA; // 0x1E8
	::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x270
	::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x278
	::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x280
	::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x288
	::RPG::GameCore::FixPoint ODOECAHLNNI; // 0x290
	::RPG::GameCore::FixPoint PKMAOKAENJO; // 0x298
	::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x2A0
	::RPG::GameCore::FixPoint PADDJNBMFOF; // 0x2A8
	::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x2B0
	::RPG::GameCore::FixPoint KNEPAPEIOPB; // 0x300
	::RPG::GameCore::FixPoint INNKNDDFGHP; // 0x308
	::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x310
	::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x318
	::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x320
	::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x328
	::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x330
	::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x338
	::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x340
	::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x348
	::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x350
	::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x358
	::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x360
	::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x368
	::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x370
	::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x378
	::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x380
	::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x388
	::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x390
	::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x398
	::System::UInt32 DPBBGIPFCOK; // 0x3E0
	::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x3E4
	::RPG::GameCore::FixPoint HGOECIIHNDB; // 0x3E8
	::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x3F0
	::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x3F8
	::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x400
	::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x408
	::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x410
	::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x418
	::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x420
	::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x428
	::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x430
	::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x438
	::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x440
	::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x448
	::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x450
	::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x458
	::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x45C
	::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x460
	::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x468
	::RPG::GameCore::FixPoint GHOOECIPNII; // 0x470
	::RPG::GameCore::DamageIntegerizeCategory ECJIFBMNFJP; // 0x478
	::System::Boolean KKNILGDAAGI; // 0x47C
	::System::Boolean AKLCPFOFBKG; // 0x47D
	::System::Boolean ELJHLJPMLAE; // 0x47E
	::System::Boolean AOBHEMEMDJH; // 0x47F
	::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x480
	::RPG::GameCore::FixPoint GIJLEFHHAIO; // 0x4D0
	::RPG::GameCore::FixPoint CNNINPEOHCH; // 0x4D8
	::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x4E0
	::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x4E8
	::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x4F0
	::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x4F8
	::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x500
	::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x548
	::System::UInt32 KNIABGNIBJA; // 0x550
	::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x554
	::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x558
	::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x560
	::System::Boolean BJEGFBGIOBK; // 0x568
	::System::Boolean BLONLALNHHH; // 0x569
	::System::Boolean HLGONPKPIBO; // 0x56A
	::System::Boolean JCBHAFCHIPF; // 0x56B
	::System::Boolean LJDODGNOHAE; // 0x56C
	::System::Boolean DENHHOIDBLC; // 0x56D
	::System::Boolean MLBHAGIHNFA; // 0x56E
	::System::Boolean DMGFGJMGFOF; // 0x56F
	::RPG::GameCore::FixPoint NINECGOCDDK; // 0x570
	::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x578
	::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x580
	::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x588
	::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x590
	::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x598
	::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x5A0
	::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x5A8
	::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x5B0
	::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x5F8
	::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x600
	::RPG::GameCore::FixPoint AICLEMNCBED; // 0x648
	::RPG::GameCore::FixPoint IIOCCBNGIAM; // 0x650
	::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x658
	::RPG::GameCore::FixPoint DLEALABDPEA; // 0x660
	::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x668
	::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x670
	::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x678
	::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x680
	::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x688
	::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x690
	::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x698
	::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x6A0
	::RPG::GameCore::FixPoint NAACKINMKHM; // 0x6A8
	::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x6B0
	::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x6B8
	::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x6C0
	::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x6C8
	::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x6D0
	::RPG::GameCore::FixPoint IEDDEFKCOBL; // 0x6D8
	::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x6E0
	::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x6E8
	::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x6F0
	::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x6F8
	::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x700
	::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x708
	::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x710
	::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x718
	::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x720
	::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x728
	::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x730
	::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x738
	::System::Boolean DJPJFIEDPDA; // 0x740
	::System::Boolean NHOJOIEDGEH; // 0x741
	::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x744
	::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x748

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_TOSTRING_OFFSET))(this);
	}
};
