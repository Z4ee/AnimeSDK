#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerBeatBackReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerRebornReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DashInterruptOrbPhase.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DisablePlayerMoveReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EnterDashReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/LandingLevel.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerBehaviorFlag.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ViewGravityInterpolationFlag.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_241BF863AE3123B3.h"
#include "unitysdk/Struct_2_52A902145F5BE513_2.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_2.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_3.h"
#include "unitysdk/Struct_2_A5F3F97A94B01E4C.h"
#include "unitysdk/Struct_2_B4E2525399EA69B7.h"
#include "unitysdk/Struct_2_C326D3DFDE2D8D31.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FloatCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_0A0296D150EB9DA4_OFFSET UNITYSDK_OFFSET(0x3B7D4A0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x3B7E0C0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x3B7D390)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x3B7E180)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x3B7E1E0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x3B7E230)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0x3B7E280)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_5_OFFSET UNITYSDK_OFFSET(0x3B7E2D0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x3B7E130)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x3B7D890)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0x3B7DA70)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_3_OFFSET UNITYSDK_OFFSET(0x3B7DC50)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_4_OFFSET UNITYSDK_OFFSET(0x3B7DE30)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_5_OFFSET UNITYSDK_OFFSET(0x3B7E090)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x3B7D6B0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0x3B7D4E0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x3B7D4C0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x3B7E1D0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_B22F293B7893A372_OFFSET UNITYSDK_OFFSET(0x3B7DE70)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_1_OFFSET UNITYSDK_OFFSET(0x3B7D2F0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_2_OFFSET UNITYSDK_OFFSET(0x3B7D340)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x3B7D2A0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x3B7D3F0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x3B7E120)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3B7DE60)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x3B7D6E0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_2_OFFSET UNITYSDK_OFFSET(0x3B7D8C0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_3_OFFSET UNITYSDK_OFFSET(0x3B7DAA0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_4_OFFSET UNITYSDK_OFFSET(0x3B7DC80)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_5_OFFSET UNITYSDK_OFFSET(0x3B7DEE0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x3B7D500)

inline static constexpr unsigned int Struct_2_F31A7EC67A3AEEF7_TypeDefinitionIndex = 41801;

struct alignas(8) Struct_2_F31A7EC67A3AEEF7
{
	::UnityEngine::Vector2 IADBDJCKLEH; // 0x10
	::UnityEngine::Vector2 CNNOBOHEKHL; // 0x18
	::UnityEngine::Vector2 KGDAMPEEGMO; // 0x20
	::System::Boolean DFIMHINHBGD; // 0x28
	::System::Single CIFCGAEPHFC; // 0x2C
	::System::Boolean LCLGFNEOHNA; // 0x30
	::System::Boolean CLBEDEABFEB; // 0x31
	::System::Boolean FCPFPGGDPBF; // 0x32
	::System::Boolean PGDIGGOPFFP; // 0x33
	::System::Boolean ILFHDJIPDIF; // 0x34
	::System::Single PIKAOJJEFGP; // 0x38
	::System::Boolean HEFKDFKOILG; // 0x3C
	::System::Single PFECIEJNBFB; // 0x40
	::System::Boolean MIKDLENKPMO; // 0x44
	::System::Boolean NJGJBILPJHO; // 0x45
	::System::Single FCKKCJIJFLB; // 0x48
	::System::Int32 HJEJLIMEENO; // 0x4C
	::System::Boolean EGIJFKPKCKK; // 0x50
	::System::Boolean LEPHNANJNED; // 0x51
	::System::Single CALBJJCEMHA; // 0x54
	::System::Single FIEDMLPMIJA; // 0x58
	::RPG::Client::LittleGame::FiveDim::LandingLevel FIFGKDPIKHN; // 0x5C
	::System::Single EDGMBLAJIPD; // 0x60
	::System::Boolean FHDDAHMFOOE; // 0x64
	::UnityEngine::Vector3 GPABBJIHHGA; // 0x68
	::UnityEngine::Vector3 ALMBGKOAPCB; // 0x74
	::System::UInt32 LOPIEOJABEG; // 0x80
	::System::UInt32 JJNJFACHHCH; // 0x84
	::Struct_2_52A902145F5BE51F_3 JIHIDCICMOG; // 0x88
	::System::UInt32 MCCNDJJMNJE; // 0x2B8
	::System::Int32 LNBAMMNGNIA; // 0x2BC
	::System::Int32 NAJAFJAELKG; // 0x2C0
	::System::Single ANOLFNJHNHK; // 0x2C4
	::System::Boolean DMAKNAAHDIA; // 0x2C8
	::UnityEngine::Vector3 NHKMBHDDDIP; // 0x2CC
	::UnityEngine::Vector3 GDILELCCGLI; // 0x2D8
	::UnityEngine::Vector3 NIBGNGICDOO; // 0x2E4
	::UnityEngine::Vector3 HHFLGEKONOM; // 0x2F0
	::UnityEngine::Vector3 LBLKFGGBAKD; // 0x2FC
	::System::Boolean COGODALAJCE; // 0x308
	::System::Boolean NLNHJGBKGBE; // 0x309
	::System::Boolean BKHJOPGNNFC; // 0x30A
	::System::Boolean BEBMMGCLOBC; // 0x30B
	::System::Boolean NIOEFBLIMIP; // 0x30C
	::System::Boolean ABGBHBNACBO; // 0x30D
	::System::Boolean ENDICGGJEDD; // 0x30E
	::System::Boolean BINEMFCDAHF; // 0x30F
	::System::Boolean ABIMHAJKFNG; // 0x310
	::System::Boolean MALAHGLOAHO; // 0x311
	::System::Int32 GPLPPKBDGPM; // 0x314
	::System::Single NAIGNDMGIPO; // 0x318
	::System::Boolean NIOMBPIDDEB; // 0x31C
	::Struct_2_EAC1BB0F093534A5 NJINGGNLOHG; // 0x320
	::System::Single MHBJPLHNAGA; // 0x388
	::System::Boolean PNLODLIBOOM; // 0x38C
	::System::Boolean KFHIENJIPMI; // 0x38D
	::System::Single OJIEAMAAEGC; // 0x390
	::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason DFPKEAGOIEF; // 0x394
	::Struct_2_52A902145F5BE513_2 OPJLJOPBGOJ; // 0x398
	::RPG::Client::LittleGame::Move::MoveState ODKFODPEPNC; // 0x3C8
	::RPG::Client::LittleGame::Move::MoveState KKDFCJEENEA; // 0x3CC
	::RPG::Client::LittleGame::Move::MoveState NPDNEEPHEKN; // 0x3D0
	::RPG::Client::LittleGame::Move::MoveState MPBKLEDCCDM; // 0x3D4
	::UnityEngine::Vector3 IECOCNELPAK; // 0x3D8
	::UnityEngine::Vector3 BJFPDFGHJIG; // 0x3E4
	::UnityEngine::Vector3 MJOLHEDKMGO; // 0x3F0
	::System::Boolean FADFMGJFCIF; // 0x3FC
	::System::Single CMKHPKJNCMO; // 0x400
	::UnityEngine::Vector3 FOMPDLOCKIH; // 0x404
	::UnityEngine::Vector3 GEIGBMFKBID; // 0x410
	::System::Boolean IHLODLNFJKK; // 0x41C
	::UnityEngine::RaycastHit DOOODAIJPKI; // 0x420
	::RPG::PoolList_1<::UnityEngine::RaycastHit>* ACGBAAAAAGB; // 0x450
	::System::Int32 HMGBOLNBDGA; // 0x458
	::UnityEngine::Transform* HNKHODDNHPK; // 0x460
	::RPG::PoolList_1<::System::Int32>* NMKCNAFLHMD; // 0x468
	::RPG::PoolList_1<::System::Int32>* NGKNPIDEOPK; // 0x470
	::Struct_2_C326D3DFDE2D8D31 NNFNMKFJEDL; // 0x478
	::RPG::PoolList_1<::Struct_2_C326D3DFDE2D8D31>* HCCPHMOGHHO; // 0x580
	::System::Single LJGDKCAIICB; // 0x588
	::System::Boolean HMKBKGGLOGL; // 0x58C
	::System::Boolean MMCHLMFOLCJ; // 0x58D
	::System::Boolean DNKIOICDJIN; // 0x58E
	::System::Boolean BKPNIHOEBHA; // 0x58F
	::System::Boolean HMPOOIFMPMG; // 0x590
	::Struct_2_241BF863AE3123B3 IABKGGKFDBK; // 0x598
	::Struct_2_241BF863AE3123B3 EAHEJPAHGNK; // 0x5E8
	::System::Boolean CMBMDDIMODP; // 0x638
	::RPG::GameCore::FloatCurve* OJCJEODDPJP; // 0x640
	::System::Single KBMOIOOEPCE; // 0x648
	::System::Single KPOLINMGAGL; // 0x64C
	::System::Single IEKJPLGKNIF; // 0x650
	::System::Boolean NIDKMCNCPCF; // 0x654
	::System::Boolean KBJAEBHFJND; // 0x655
	::System::Boolean NAOKFCCMAKJ; // 0x656
	::System::Boolean HACLOFJAECP; // 0x657
	::System::Boolean ODIOCBDPHFN; // 0x658
	::System::Single PNGBENDLNDF; // 0x65C
	::System::Boolean FPBEBAHPHDK; // 0x660
	::System::Single DPOLNJBMKOI; // 0x664
	::System::Boolean GJKPJBBDELC; // 0x668
	::System::Single DPOFIBFLCMC; // 0x66C
	::System::Boolean PHHNHCDGDMD; // 0x670
	::System::Single LLHHNKHLOKN; // 0x674
	::System::Boolean ADEGLNFMKPI; // 0x678
	::System::Int32 OGBKJCPEGIE; // 0x67C
	::System::Int32 DGHNPLFIKAK; // 0x680
	::UnityEngine::Vector3 IAFMEJAACND; // 0x684
	::System::Boolean BOINIAIEEDN; // 0x690
	::System::Int32 HNJNOACJDAN; // 0x694
	::RPG::Client::LittleGame::FiveDim::EnterDashReason IHODHGMHBOC; // 0x698
	::Struct_2_A5F3F97A94B01E4C DFIKIPOMCNO; // 0x69C
	::System::Boolean KCGBNEDPBGN; // 0x6B8
	::System::Boolean IEPLDBPBFOD; // 0x6B9
	::System::Single NAPMJGDFIJO; // 0x6BC
	::System::Single OLKEADPPNAC; // 0x6C0
	::System::Int32 JPBOBGAJOKJ; // 0x6C4
	::UnityEngine::Vector3 LFGLCDBLGJD; // 0x6C8
	::UnityEngine::Vector3 BHDECEMIOFE; // 0x6D4
	::UnityEngine::Vector3 HJAGLAAFAPG; // 0x6E0
	::System::Single GABNIJEIGOH; // 0x6EC
	::System::Single GCMHHMAJMNA; // 0x6F0
	::System::Boolean OBNLIJLLGGH; // 0x6F4
	::System::Single OLOICJEDICN; // 0x6F8
	::System::Boolean DHHOJBENEKO; // 0x6FC
	::RPG::PoolList_1<::System::Int32>* PEPGCNABFGM; // 0x700
	::RPG::PoolList_1<::System::Int32>* EHABDFEMKHH; // 0x708
	::RPG::PoolList_1<::System::Int32>* DNHHDOHBLMG; // 0x710
	::System::Single MEIFGEIKEHA; // 0x718
	::System::Boolean IDJDKIPKDMD; // 0x71C
	::System::Boolean AAOHLIIHFIK; // 0x71D
	::System::Boolean HOMGFECMDAP; // 0x71E
	::System::Single MGHEBIEBDLJ; // 0x720
	::System::Boolean NKFJPCBGHCA; // 0x724
	::UnityEngine::Vector2 CMGKHJLOHHC; // 0x728
	::System::Single ALDILHDPHME; // 0x730
	::System::Single NEMGEEDLLON; // 0x734
	::System::Int32 LHMBIENLJFO; // 0x738
	::System::Single GEPMGOMFOJP; // 0x73C
	::System::Int32 MOGALOFADNF; // 0x740
	::System::Boolean CCAHAKMLBPK; // 0x744
	::System::Boolean GODMCPMODNP; // 0x745
	::System::Boolean FEBHBBNFCOO; // 0x746
	::System::Boolean BCMKHKINMDM; // 0x747
	::RPG::PoolList_1<::System::Int32>* NAMILFPLHEI; // 0x748
	::System::Int32 MNJIPMLJNGM; // 0x750
	::System::Boolean DAMDNLGKOBN; // 0x754
	::System::Boolean KGJKIDOHLNH; // 0x755
	::System::Int32 FJCEIDFBJJF; // 0x758
	::Struct_2_EAC1BB0F093534A5 PLCPIEBMBDK; // 0x75C
	::UnityEngine::Transform* AMEHPIOPAGE; // 0x7C8
	::System::Boolean DJHMGKHEHAI; // 0x7D0
	::System::UInt32 NEDBABIHMAM; // 0x7D4
	::Struct_2_EAC1BB0F093534A5 EOJFCALBDDI; // 0x7D8
	::Struct_2_EAC1BB0F093534A5 COFJKJEHOFE; // 0x840
	::System::UInt32 IPOGCLPNGNN; // 0x8A8
	::System::Int32 ODLDFBGKNNN; // 0x8AC
	::RPG::PoolList_1<::System::Int32>* NFLIHBDFLAG; // 0x8B0
	::System::Boolean ANBFENEMLCC; // 0x8B8
	::System::Int32 MKEOLBEGIJP; // 0x8BC
	::System::Single PBIICKNIBJN; // 0x8C0
	::System::Boolean FJKCBALFKIG; // 0x8C4
	::UnityEngine::Vector3 AICKBKJMLAP; // 0x8C8
	::UnityEngine::Vector3 CPJDJBHDNDF; // 0x8D4
	::UnityEngine::Vector3 GFLDLKEFAIC; // 0x8E0
	::System::Boolean DNPKCFBKKDB; // 0x8EC
	::System::Boolean KEBBNEPJCLH; // 0x8ED
	::System::Boolean MBAFHFDPGDO; // 0x8EE
	::UnityEngine::Vector3 JBAOKIHOGPJ; // 0x8F0
	::UnityEngine::Vector3 PIJNLHJDEDK; // 0x8FC
	::System::Int32 PILLDEOAJBM; // 0x908
	::RPG::PoolList_1<::System::Int32>* NPJKMHLLFDK; // 0x910
	::System::Boolean HJMGKFDEBLO; // 0x918
	::UnityEngine::Vector3 IJNNFBAEAFN; // 0x91C
	::System::Boolean LMCDAMLDMDL; // 0x928
	::RPG::Client::LittleGame::FiveDim::ViewGravityInterpolationFlag FCMLCHJMDFG; // 0x929
	::Struct_2_B4E2525399EA69B7 JHMAPJEIFCD; // 0x92C
	::System::Single MFOIBJHJADM; // 0x96C
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason ABMKOCIHAOD; // 0x970
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason OMDIFKGEJFG; // 0x974
	::System::Boolean NPFGNHDHFJL; // 0x978
	::System::Single IFNHHBDMPON; // 0x97C
	::System::Single CIEJOKMJJLA; // 0x980
	::RPG::Client::LittleGame::FiveDim::PlayerBehaviorFlag KJDKAOPEMFF; // 0x984
	::Struct_2_52A902145F5BE51F_2 GPBEMABLDEO; // 0x988
	::System::Single DDGFIBJJEAM; // 0x9AC
	::System::Single LLOHOLJFBEK; // 0x9B0
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason FMBEMPEDNEA; // 0x9B4
	::System::Single GGHHHKGPHNJ; // 0x9B8
	::System::Single DAEMIJJMGPF; // 0x9BC
	::System::Boolean KMGDMGENHHG; // 0x9C0
	::System::Single HLKIPLCEEKN; // 0x9C4
	::System::Boolean CGBDBGKDJHH; // 0x9C8
	::System::Single AEIODNIKHAH; // 0x9CC
	::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* KNEONECEFKK; // 0x9D0
	::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* MKGBOLAPBHN; // 0x9D8
	::System::Boolean PKKPEEGIALN; // 0x9E0
	::System::Boolean JKDCHGEGLDC; // 0x9E1
	::System::Single JICLELNPJKJ; // 0x9E4
	::System::Single ABPAAIBGLFJ; // 0x9E8
	::System::Boolean NKFFIIHDCCC; // 0x9EC
	::System::Boolean GEHAHKCNLDA; // 0x9ED
	::System::Single AEAAPEAOINE; // 0x9F0
	::System::Boolean OFNDDENBLGO; // 0x9F4
	::System::Single LOJGGELAEAP; // 0x9F8
	::System::Boolean COKILHAHFOM; // 0x9FC
	::System::Boolean CKHJAJFMPHG; // 0x9FD
	::System::Boolean ECMOFJONDHC; // 0x9FE
	::System::Boolean PLFKANKEIHE; // 0x9FF
	::System::Boolean EGMIDEMAANP; // 0xA00
	::UnityEngine::Vector2 PLKACHGCJPN; // 0xA04
	::System::Boolean IMKECIFHFNC; // 0xA0C
	::System::Int32 KAOHLFGPIEB; // 0xA10
	::System::Single FHJJJAKHKDM; // 0xA14
	::System::Single OJAHDBLHGMA; // 0xA18
	::System::Boolean MFBHOLDJCBP; // 0xA1C
	::System::Single FBCBNDGJKPD; // 0xA20
	::System::Boolean KDHCCEHGJGJ; // 0xA24
	::System::UInt32 GGCMJOJJJAO; // 0xA28
	::System::Single IJOHECJKAIK; // 0xA2C
	::RPG::PoolList_1<::System::Int32>* HIMIOGPNDBG; // 0xA30
	::System::Boolean HGHNOOONNIG; // 0xA38
	::System::Int32 BFLEMOKKAEB; // 0xA3C
	::System::Int32 INCMHFJLPHP; // 0xA40
	::System::Int32 JCBJIGMLOKN; // 0xA44
	::System::Single ICGBPEGLCPB; // 0xA48
	::System::Boolean GOPADKPEFJI; // 0xA4C
	::System::Boolean JLADFMKLNBK; // 0xA4D
	::System::Int32 CHDBHPMBHMN; // 0xA50
	::System::Boolean CMHEMBJKHDP; // 0xA54
	::RPG::Client::LittleGame::FiveDim::DashInterruptOrbPhase APFIKAMKCFH; // 0xA58
	::System::Int32 BBNEBMKLPOH; // 0xA5C
	::System::Boolean HCPJBMKHHMG; // 0xA60

	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_1_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0_2()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	/*
	::UnityEngine::Quaternion Method_2_C34AC80B04BCFF1B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C34AC80B04BCFF1B_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion Method_2_0A0296D150EB9DA4()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_0A0296D150EB9DA4_OFFSET))(this);
	}
	*/

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_2_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_3_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_4_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_4(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_B22F293B7893A372(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_B22F293B7893A372_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_5_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_3_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_4_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_391A84BCD9F51317_5_OFFSET))(this);
	}
};
