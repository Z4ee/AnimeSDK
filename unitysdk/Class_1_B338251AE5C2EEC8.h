#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/RegionVisualStateReason.h"
#include "unitysdk/RPG/Client/RegionVisualStateRefCntReason.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionType.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_6B1DEF4C12A48710.h"
#include "unitysdk/Struct_2_960171EC79068492.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3948F09825CE1BA8;
class Class_1_A71861351D4ACE4D;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelRegionInfo; }
namespace RPG::GameCore { class LevelRegionStateCondition; }
namespace RPG::GameCore { class LevelRegionStateConditionSet; }
namespace RPG::GameCore { class LevelRegionStateConfig; }
namespace RPG::GameCore { class StageRegionAffect; }
namespace RPG::GameCore { class StageRegionConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B338251AE5C2EEC8_GET_INSIDEPRELOADSOURCE_OFFSET UNITYSDK_OFFSET(0xB3D4850)
#define CLASS_1_B338251AE5C2EEC8_GET_PRELOADSOURCEDIST_OFFSET UNITYSDK_OFFSET(0xB3D4830)
#define CLASS_1_B338251AE5C2EEC8_GET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0xB3D4380)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_0173612688FB36A6_OFFSET UNITYSDK_OFFSET(0xB3D23A0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_0BD43267D60313DC_OFFSET UNITYSDK_OFFSET(0xB3D0DD0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_0FB4701C048F21A8_OFFSET UNITYSDK_OFFSET(0xB3CF6A0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_1011839DF6D17ECE_OFFSET UNITYSDK_OFFSET(0xB3D1390)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_1187332C2A395F1C_OFFSET UNITYSDK_OFFSET(0xB3D0720)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB3D4870)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_20B511A103C213DD_OFFSET UNITYSDK_OFFSET(0xB3CF1A0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_241FCB0507EB9FA1_1_OFFSET UNITYSDK_OFFSET(0xB3D4330)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xB3D2EA0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_34504604B0FFC7C3_OFFSET UNITYSDK_OFFSET(0xB3C8B50)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_385BCF30C8013B97_OFFSET UNITYSDK_OFFSET(0xB3D0C90)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB3D3AA0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB3C8130)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_3D1A76B7DFE821F3_OFFSET UNITYSDK_OFFSET(0xB3D2F30)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_42534C094D9FC222_1_OFFSET UNITYSDK_OFFSET(0xB3D43A0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_42534C094D9FC222_OFFSET UNITYSDK_OFFSET(0xB3D3020)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xB3CC020)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_49085A3FC0F13F5E_1_OFFSET UNITYSDK_OFFSET(0xB3D27F0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_49085A3FC0F13F5E_OFFSET UNITYSDK_OFFSET(0xB3D2570)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_4962C6204638693E_OFFSET UNITYSDK_OFFSET(0xB3CDE40)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_4D43147BDC6D78EE_OFFSET UNITYSDK_OFFSET(0xB3C8360)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_4FCD9BBC7667EED5_OFFSET UNITYSDK_OFFSET(0xB3D46A0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_4FDFCF0E824F852D_OFFSET UNITYSDK_OFFSET(0xB3D3B60)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_53788AABC08BED63_OFFSET UNITYSDK_OFFSET(0xB3CF1F0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_586D3E78EB76EA14_OFFSET UNITYSDK_OFFSET(0xB3D3080)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_5AE65BC66F5834C0_OFFSET UNITYSDK_OFFSET(0xB3D2A70)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_68007CFD6400DAC2_OFFSET UNITYSDK_OFFSET(0xB3C84F0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_6ABA6A7D3FD8E04E_OFFSET UNITYSDK_OFFSET(0xB3D3D30)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_6AC60E17A6A2BBB9_OFFSET UNITYSDK_OFFSET(0xB3CEDF0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_6BB8B909016DC1E1_OFFSET UNITYSDK_OFFSET(0xB3D2F70)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_6CC0E8D2DB72D85E_OFFSET UNITYSDK_OFFSET(0xB3CA3B0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_6E4A08BCEEDE9205_OFFSET UNITYSDK_OFFSET(0xB3D1D80)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_6F901BAEE7DCC4D1_OFFSET UNITYSDK_OFFSET(0xB3D2120)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xB3CDDA0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_71BF3BB85FCF6010_OFFSET UNITYSDK_OFFSET(0xB3D4510)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xB3CB700)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_74C5E451DB3BCE7F_OFFSET UNITYSDK_OFFSET(0xB3D4010)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0xB3D4210)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_78AD0549AFFA52F6_OFFSET UNITYSDK_OFFSET(0xB3D4400)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_7A66102D908D91DF_OFFSET UNITYSDK_OFFSET(0xB3D0530)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_818F911E2177BEB3_OFFSET UNITYSDK_OFFSET(0xB3CEBB0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_829B09E994469287_OFFSET UNITYSDK_OFFSET(0xB3CAC00)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_840DB136F4FEF208_OFFSET UNITYSDK_OFFSET(0xB3D3550)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_85D9BB2EBD662D55_OFFSET UNITYSDK_OFFSET(0xB3CF8C0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_873C8C270F2F7234_OFFSET UNITYSDK_OFFSET(0xB3D0C40)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_87EBA5EB20CB62D4_OFFSET UNITYSDK_OFFSET(0xB3CF250)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_898CE669B85C20CE_OFFSET UNITYSDK_OFFSET(0xB3CFC50)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_8DBA9D503648CF4A_1_OFFSET UNITYSDK_OFFSET(0xB3D53D0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_8DBA9D503648CF4A_OFFSET UNITYSDK_OFFSET(0xB3D49B0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB3D01A0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_986E4F3D92DC02FB_OFFSET UNITYSDK_OFFSET(0xB3CF840)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_990D492087A958D7_OFFSET UNITYSDK_OFFSET(0xB3C7B00)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xB3CCFE0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_9F5F3F90C66496E1_OFFSET UNITYSDK_OFFSET(0xB3CAC50)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_A3341C341945A85E_OFFSET UNITYSDK_OFFSET(0xB3D0EC0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xB3D42A0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB3C9200)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_ABE5738A0CCE8823_OFFSET UNITYSDK_OFFSET(0xB3CFB60)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_B0D0D30AA6E083F2_OFFSET UNITYSDK_OFFSET(0xB3CE550)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_B1FD6E7C3CBA7EAF_OFFSET UNITYSDK_OFFSET(0xB3D1100)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0xB3CDA20)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_B355D3861E365318_OFFSET UNITYSDK_OFFSET(0xB3CCE50)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xB3C8180)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_B79C2FE4831A322B_OFFSET UNITYSDK_OFFSET(0xB3D1BA0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0xB3D0410)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_BBAB4D72BFD3417E_OFFSET UNITYSDK_OFFSET(0xB3C8B00)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0xB3D2EF0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_BC5B668148D964CC_OFFSET UNITYSDK_OFFSET(0xB3CEEA0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_BD932B56F58CAF64_OFFSET UNITYSDK_OFFSET(0xB3D3AF0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_C3C63C17C6B696D2_OFFSET UNITYSDK_OFFSET(0xB3D4950)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_C50A1E75A953A127_OFFSET UNITYSDK_OFFSET(0xB3CF2C0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_C533DFD74EC3B4F1_OFFSET UNITYSDK_OFFSET(0xB3D42F0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_C78CD55DCDD16250_OFFSET UNITYSDK_OFFSET(0xB3D39F0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB3CFBB0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB3D0270)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xB3D16E0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xB3D4900)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3C8210)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_D3D90DFCA5A06372_OFFSET UNITYSDK_OFFSET(0xB3D2E50)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_D51C43B78C16F87F_OFFSET UNITYSDK_OFFSET(0xB3D2FC0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_D52BA3DAE5DF1A9E_OFFSET UNITYSDK_OFFSET(0xB3CBF10)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_D8A38B75FB093779_OFFSET UNITYSDK_OFFSET(0xB3C8E60)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_DAE2E18BDC4ADFD7_OFFSET UNITYSDK_OFFSET(0xB3D1210)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_E107ABB7B934BEF3_OFFSET UNITYSDK_OFFSET(0xB3D1E80)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0xB3D0310)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xB3D0470)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_E4B33477B7A6A3F1_OFFSET UNITYSDK_OFFSET(0xB3D1720)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_E7661A75673806CC_OFFSET UNITYSDK_OFFSET(0xB3C8C30)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xB3CA600)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_ECA9CEB8BBCC7524_OFFSET UNITYSDK_OFFSET(0xB3C8260)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_EEA3DA24B2C7A27F_OFFSET UNITYSDK_OFFSET(0xB3CCCE0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_F59C64654F230E9C_OFFSET UNITYSDK_OFFSET(0xB3D3D80)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_FD9FABB0A847C348_OFFSET UNITYSDK_OFFSET(0xB3CE2E0)
#define CLASS_1_B338251AE5C2EEC8_METHOD_1_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0xB3CE8F0)
#define CLASS_1_B338251AE5C2EEC8_SET_INSIDEPRELOADSOURCE_OFFSET UNITYSDK_OFFSET(0xB3D4860)
#define CLASS_1_B338251AE5C2EEC8_SET_PRELOADSOURCEDIST_OFFSET UNITYSDK_OFFSET(0xB3D4840)
#define CLASS_1_B338251AE5C2EEC8_SET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0xB3D4390)
#define CLASS_1_B338251AE5C2EEC8_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB3C9130)
#define CLASS_1_B338251AE5C2EEC8__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3D5DF0)
#define CLASS_1_B338251AE5C2EEC8__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C9250)

inline static constexpr unsigned int Class_1_B338251AE5C2EEC8_TypeDefinitionIndex = 62148;

class Class_1_B338251AE5C2EEC8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>** StaticGet_MGNAEKAIDBD()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B338251AE5C2EEC8_TypeDefinitionIndex)->GetStaticField(0x45750);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>** StaticGet_HJKDIKKODEC()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B338251AE5C2EEC8_TypeDefinitionIndex)->GetStaticField(0x45758);
	}
	static ::Class_1_B338251AE5C2EEC8** StaticGet_PJEPEMCGJMF()
	{
		return (::Class_1_B338251AE5C2EEC8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B338251AE5C2EEC8_TypeDefinitionIndex)->GetStaticField(0x45760);
	}
	// static const ::System::Int32 FBEHOLBACJE = 0xFFFFFFFF; // 0x0
	// static const ::System::String* GMNOGCANNNF; // 0x0
	::RPG::GameCore::HoyoTagContainer* FLLGAPPECIO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* CMNLNIPMHBI; // 0x18
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionVisualState>*>* PBIMIKABLGO; // 0x20
	::RPG::GameCore::StageRegionConfig* CFKEEIGFKDH; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* HGLLDKBNOEJ; // 0x30
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* _VisibleMiddleOwnerStreamingBlocks_k__BackingField; // 0x38
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* DFLKEEOEBIA; // 0x40
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_B338251AE5C2EEC8*, ::Struct_2_960171EC79068492>*>* MDKJEHNDFPD; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* MILHJDLAODN; // 0x50
	::UnityEngine::GameObject* JFKANJOPEHN; // 0x58
	::RPG::GameCore::LevelRegionStateConfig* KAJFMMNOLEJ; // 0x60
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* EAMOCIIICBE; // 0x68
	::RPG::GameCore::HoyoTagContainer* HIJFIDNJJKB; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* FDEDCDIMIPA; // 0x78
	::Class_1_D70A30D666F20D90* NFPCBMCGFDD; // 0x80
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* DPKNJGFHOAC; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A71861351D4ACE4D*>* JODLNDJGOPC; // 0x90
	::RPG::GameCore::LevelRegionInfo* OANJKADBIBE; // 0x98
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* DHDLAAAEGPI; // 0xA0
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* IJPJPHMMODC; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* FONDGECHGHA; // 0xB0
	::System::Action_3<::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* JHFLOAFAFBA; // 0xB8
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Struct_2_960171EC79068492, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* KBBIKMMDCGI; // 0xC0
	::Class_1_3948F09825CE1BA8* CJGHIABBLHI; // 0xC8
	::System::Collections::Generic::HashSet_1<::System::UInt32>* MJKLPKMNMFF; // 0xD0
	::RPG::GameCore::StageRegionVisualState BIMCKIJJJJJ; // 0xD8
	::Struct_2_6B1DEF4C12A48710 GJMKMHHJHAE; // 0xDC
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority PBFENJMKPLP; // 0xF8
	::RPG::GameCore::StageRegionActiveState NHJJGOHPBLA; // 0xFC
	::System::Int32 KEKJBLFMAEL; // 0x100
	::Struct_2_960171EC79068492 LIAFAKEHMID; // 0x104
	::System::Boolean EBBICOBIIJP; // 0x10C
	::System::Boolean FEODGDAMPKO; // 0x10D
	::System::Boolean GNLHMEALOAG; // 0x10E
	::System::Int32 _PreloadSourceDist_k__BackingField; // 0x110
	::RPG::GameCore::StageRegionVisualState HHMICDPNGJK; // 0x114
	::System::Boolean EJFDKHNEEOM; // 0x118
	::System::Boolean NGLPGCKGIFB; // 0x119
	::System::Boolean _InsidePreloadSource_k__BackingField; // 0x11A
	::System::Boolean NPKCELIKGCD; // 0x11B
	::Struct_2_960171EC79068492 EAOFLGIHDBG; // 0x11C
	::System::Boolean ANNHPINKMCO; // 0x124
	::System::Boolean NANMLACOOCC; // 0x125
	::System::Boolean EFIIOOJJLDM; // 0x126
	::System::Boolean ABKLGIKNBOC; // 0x127
	::UnityEngine::Matrix4x4 HGPFBOLEACI; // 0x128
	::System::Boolean NHKDIFJGGKL; // 0x168
	::System::Boolean BKPMGCPJKKO; // 0x169
	::System::Boolean NPNLDMJGNEK; // 0x16A
	::System::Boolean EOFIIKNACBH; // 0x16B

	::System::Void _ctor(::Class_1_3948F09825CE1BA8* a1, ::RPG::GameCore::StageRegionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3948F09825CE1BA8*, ::RPG::GameCore::StageRegionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8__CCTOR_OFFSET))();
	}

	::Struct_2_960171EC79068492 Method_1_990D492087A958D7()
	{
		return ((::Struct_2_960171EC79068492(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_990D492087A958D7_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Struct_2_6B1DEF4C12A48710 Method_1_ECA9CEB8BBCC7524()
	{
		return ((::Struct_2_6B1DEF4C12A48710(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_ECA9CEB8BBCC7524_OFFSET))(this);
	}

	::Struct_2_6B1DEF4C12A48710 Method_1_4D43147BDC6D78EE()
	{
		return ((::Struct_2_6B1DEF4C12A48710(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_4D43147BDC6D78EE_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_68007CFD6400DAC2(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_68007CFD6400DAC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7661A75673806CC(::Class_1_B338251AE5C2EEC8* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_E7661A75673806CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D8A38B75FB093779(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_D8A38B75FB093779_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_6CC0E8D2DB72D85E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_6CC0E8D2DB72D85E_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_9F5F3F90C66496E1(::RPG::GameCore::LevelRegionInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_9F5F3F90C66496E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D52BA3DAE5DF1A9E(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_D52BA3DAE5DF1A9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_1_FD9FABB0A847C348(::Class_1_B338251AE5C2EEC8* a1, ::RPG::GameCore::StageRegionVisualState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_FD9FABB0A847C348_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B0D0D30AA6E083F2(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_B0D0D30AA6E083F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC5B668148D964CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_BC5B668148D964CC_OFFSET))(this);
	}

	::System::Void Method_1_818F911E2177BEB3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_818F911E2177BEB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_53788AABC08BED63(::RPG::GameCore::LevelRegionStateConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionStateConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_53788AABC08BED63_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA3DA24B2C7A27F(::Class_1_B338251AE5C2EEC8* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_EEA3DA24B2C7A27F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_87EBA5EB20CB62D4(::Class_1_B338251AE5C2EEC8* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_87EBA5EB20CB62D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FB4701C048F21A8(::Class_1_B338251AE5C2EEC8* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_0FB4701C048F21A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B355D3861E365318(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_B355D3861E365318_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_986E4F3D92DC02FB(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_986E4F3D92DC02FB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_85D9BB2EBD662D55(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_85D9BB2EBD662D55_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C50A1E75A953A127(::Struct_2_960171EC79068492 a1, ::Struct_2_960171EC79068492 a2, ::RPG::GameCore::StageRegionActiveState a3, ::RPG::GameCore::StageRegionActiveState a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::Struct_2_960171EC79068492, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_C50A1E75A953A127_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_BADDA70ED68283AE_OFFSET))(this);
	}

	::System::Void Method_1_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_4962C6204638693E(::Struct_2_960171EC79068492 a1, ::System::Boolean a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_4962C6204638693E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1187332C2A395F1C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_1187332C2A395F1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6AC60E17A6A2BBB9(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_6AC60E17A6A2BBB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3341C341945A85E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_A3341C341945A85E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0BD43267D60313DC(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_0BD43267D60313DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAE2E18BDC4ADFD7(::Class_1_303D5A33D1401D59* a1, ::RPG::GameCore::RegionBlockVisibilityStatus a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_DAE2E18BDC4ADFD7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_B1FD6E7C3CBA7EAF(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_B1FD6E7C3CBA7EAF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A66102D908D91DF(::Struct_2_960171EC79068492 a1, ::System::Boolean a2, ::Class_1_303D5A33D1401D59* a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::System::Boolean, ::Class_1_303D5A33D1401D59*, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_7A66102D908D91DF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_385BCF30C8013B97(::Struct_2_960171EC79068492 a1, ::System::Boolean a2, ::Class_1_303D5A33D1401D59* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::System::Boolean, ::Class_1_303D5A33D1401D59*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_385BCF30C8013B97_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_E4B33477B7A6A3F1(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_E4B33477B7A6A3F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B79C2FE4831A322B(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_B79C2FE4831A322B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6E4A08BCEEDE9205(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_6E4A08BCEEDE9205_OFFSET))(this, a1);
	}

	::System::Void Method_1_E107ABB7B934BEF3(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_E107ABB7B934BEF3_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_6F901BAEE7DCC4D1(::RPG::GameCore::LevelRegionStateCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_6F901BAEE7DCC4D1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0173612688FB36A6(::RPG::GameCore::LevelRegionStateConditionSet* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_0173612688FB36A6_OFFSET))(a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_49085A3FC0F13F5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_49085A3FC0F13F5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_49085A3FC0F13F5E_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_49085A3FC0F13F5E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AE65BC66F5834C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_5AE65BC66F5834C0_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageRegionType Method_1_D3D90DFCA5A06372()
	{
		return ((::RPG::GameCore::StageRegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_D3D90DFCA5A06372_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StageRegionAffect*>* Method_1_20B511A103C213DD()
	{
		return ((::Il2CppArray<::RPG::GameCore::StageRegionAffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_20B511A103C213DD_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionConfig* Method_1_3D1A76B7DFE821F3()
	{
		return ((::RPG::GameCore::StageRegionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_3D1A76B7DFE821F3_OFFSET))(this);
	}

	::RPG::GameCore::LevelRegionInfo* Method_1_6BB8B909016DC1E1()
	{
		return ((::RPG::GameCore::LevelRegionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_6BB8B909016DC1E1_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_D51C43B78C16F87F()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_D51C43B78C16F87F_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_42534C094D9FC222()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_42534C094D9FC222_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_586D3E78EB76EA14()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_586D3E78EB76EA14_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_840DB136F4FEF208(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_840DB136F4FEF208_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_ABE5738A0CCE8823(::Struct_2_960171EC79068492 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_960171EC79068492))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_ABE5738A0CCE8823_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_34504604B0FFC7C3(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_34504604B0FFC7C3_OFFSET))(a1);
	}

	::System::Void Method_1_898CE669B85C20CE(::Struct_2_960171EC79068492 a1, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_898CE669B85C20CE_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::StageRegionActiveState Method_1_C78CD55DCDD16250()
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_C78CD55DCDD16250_OFFSET))(this);
	}

	static ::RPG::GameCore::StageRegionActiveState Method_1_BBAB4D72BFD3417E(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_BBAB4D72BFD3417E_OFFSET))(a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	static ::System::Boolean Method_1_BD932B56F58CAF64(::System::Boolean a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::GameCore::LevelRegionInfo* a3)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_BD932B56F58CAF64_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_1_4FDFCF0E824F852D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_4FDFCF0E824F852D_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_6ABA6A7D3FD8E04E()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_6ABA6A7D3FD8E04E_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_829B09E994469287()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_829B09E994469287_OFFSET))(this);
	}

	::System::Boolean Method_1_F59C64654F230E9C(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_F59C64654F230E9C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_74C5E451DB3BCE7F(::Class_1_303D5A33D1401D59* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::Class_1_303D5A33D1401D59*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_74C5E451DB3BCE7F_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_77577333B4681208_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1011839DF6D17ECE(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_1011839DF6D17ECE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Method_1_C533DFD74EC3B4F1()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_C533DFD74EC3B4F1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_241FCB0507EB9FA1_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_241FCB0507EB9FA1_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* get_VisibleMiddleOwnerStreamingBlocks()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_GET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET))(this);
	}

	::System::Void set_VisibleMiddleOwnerStreamingBlocks(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_SET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET))(this, a1);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_42534C094D9FC222_1()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_42534C094D9FC222_1_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_78AD0549AFFA52F6()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_78AD0549AFFA52F6_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_71BF3BB85FCF6010()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_71BF3BB85FCF6010_OFFSET))(this);
	}

	::System::Int32 get_PreloadSourceDist()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_GET_PRELOADSOURCEDIST_OFFSET))(this);
	}

	::System::Void set_PreloadSourceDist(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_SET_PRELOADSOURCEDIST_OFFSET))(this, a1);
	}

	::System::Boolean get_InsidePreloadSource()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_GET_INSIDEPRELOADSOURCE_OFFSET))(this);
	}

	::System::Void set_InsidePreloadSource(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_SET_INSIDEPRELOADSOURCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_873C8C270F2F7234()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_873C8C270F2F7234_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_4FCD9BBC7667EED5()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_4FCD9BBC7667EED5_OFFSET))(this);
	}

	static ::RPG::GameCore::StageRegionVisualState Method_1_C3C63C17C6B696D2(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_C3C63C17C6B696D2_OFFSET))(a1);
	}

	::System::Void Method_1_8DBA9D503648CF4A(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_8DBA9D503648CF4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8DBA9D503648CF4A_1(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_B338251AE5C2EEC8_METHOD_1_8DBA9D503648CF4A_1_OFFSET))(this, a1, a2);
	}
};
