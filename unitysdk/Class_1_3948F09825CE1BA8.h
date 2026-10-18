#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/PauseRegionManagerReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_0116DF2DF707827A.h"
#include "unitysdk/Struct_2_070A00258D76D4EF.h"
#include "unitysdk/Struct_2_85609C8D1B5CE8E3.h"
#include "unitysdk/Struct_2_960171EC79068492.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3948F09825CE1BA8_Class_1_D821F557CE4717CF;
class Class_1_3948F09825CE1BA8_Class_2_236B7252CED38016;
class Class_1_3948F09825CE1BA8_Class_2_C7B167532A4FEF9E;
class Class_1_4CE2015FBA9EB106;
class Class_1_B338251AE5C2EEC8;
class Class_1_D256EDA05CFBDF64;
class Class_1_DE4C6B309308A230;
namespace RPG::Client { class RegionManagerDebugMono; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRegionCollection; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3948F09825CE1BA8_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0xC2CF5F0)
#define CLASS_1_3948F09825CE1BA8_GET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0xC2CF540)
#define CLASS_1_3948F09825CE1BA8_GET_HASREGION_OFFSET UNITYSDK_OFFSET(0xC2CF520)
#define CLASS_1_3948F09825CE1BA8_GET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0xC2CF6A0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0623E385C311F5BF_OFFSET UNITYSDK_OFFSET(0xC2C55D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xC2C4F40)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0xC2C99B0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0AC1A67F263CD5B2_OFFSET UNITYSDK_OFFSET(0xC2CD310)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_1_OFFSET UNITYSDK_OFFSET(0xC2C6160)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_2_OFFSET UNITYSDK_OFFSET(0xC2C6200)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_3_OFFSET UNITYSDK_OFFSET(0xC2C62A0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_OFFSET UNITYSDK_OFFSET(0xC2C60C0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0F277A9D098842CD_OFFSET UNITYSDK_OFFSET(0xC2C5C20)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0FE89573C3FE4978_OFFSET UNITYSDK_OFFSET(0xC2CDCB0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_18EBFF3A190BD0E0_OFFSET UNITYSDK_OFFSET(0xC2C70B0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_1EBFCF83E3B55D24_OFFSET UNITYSDK_OFFSET(0xC2CCCE0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_2044E4C6D20E5CBC_OFFSET UNITYSDK_OFFSET(0xC2C9BF0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_239FFFA3D9461D78_OFFSET UNITYSDK_OFFSET(0xC2C49F0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xC2C6340)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_2581C7C18C4336EC_OFFSET UNITYSDK_OFFSET(0xC2CD450)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_2964439C006AF9F5_OFFSET UNITYSDK_OFFSET(0xC2CF3E0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0xC2C5100)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC2CF610)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_394905343968AA47_OFFSET UNITYSDK_OFFSET(0xC2C7A10)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_3CE3888623737EB0_OFFSET UNITYSDK_OFFSET(0xC2C9E30)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_418875B112A8CF2C_OFFSET UNITYSDK_OFFSET(0xC2C6CE0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_4711E70DF272C20C_OFFSET UNITYSDK_OFFSET(0xC2CD3D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xC2C9AB0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_565AA3EF89C82663_OFFSET UNITYSDK_OFFSET(0xC2C71E0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_78A69BBDCB1FA27A_OFFSET UNITYSDK_OFFSET(0xC2C6A40)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xC2CAF70)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_7F775CED3096B027_OFFSET UNITYSDK_OFFSET(0xC2CCB20)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_8159F0067112FF61_OFFSET UNITYSDK_OFFSET(0xC2CF660)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_829B09E994469287_OFFSET UNITYSDK_OFFSET(0xC2CF560)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_838255C97B7E8A88_OFFSET UNITYSDK_OFFSET(0xC2C5910)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_83976A321A1E8072_OFFSET UNITYSDK_OFFSET(0xC2C5190)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_84F4D10E041E2BEE_OFFSET UNITYSDK_OFFSET(0xC2C5420)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_8CDC51540437DD98_OFFSET UNITYSDK_OFFSET(0xC2CD8F0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_977363C43A88A54F_OFFSET UNITYSDK_OFFSET(0xC2C6AE0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0xC2C78D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_1_OFFSET UNITYSDK_OFFSET(0xC2C6660)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_OFFSET UNITYSDK_OFFSET(0xC2C65F0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A85A5A4F484E8E77_OFFSET UNITYSDK_OFFSET(0xC2C5A70)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0xC2C56E0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_B210A7945BA5EABD_OFFSET UNITYSDK_OFFSET(0xC2C4A50)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xC2CB930)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_B9F20EE182644086_OFFSET UNITYSDK_OFFSET(0xC2C7420)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_BA7208D5810564A8_OFFSET UNITYSDK_OFFSET(0xC2C5DF0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_BE1D74FB34792AB9_OFFSET UNITYSDK_OFFSET(0xC2C5B80)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_C0CFDE2355F2B2ED_OFFSET UNITYSDK_OFFSET(0xC2C66D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC2CD240)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xC2CDC60)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC2C7890)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CA6A44C2892EA9EB_OFFSET UNITYSDK_OFFSET(0xC2C8A80)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_D1F3A338D3E27B90_OFFSET UNITYSDK_OFFSET(0xC2C4D50)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_D7E7B17A71976D23_OFFSET UNITYSDK_OFFSET(0xC2C6030)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_D8698CD426D6823D_OFFSET UNITYSDK_OFFSET(0xC2CF5A0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_DA41DCAD7C27DB4D_OFFSET UNITYSDK_OFFSET(0xC2C6390)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0xC2C7180)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xC2C77F0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xC2C92E0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E6A156CCCF0451F6_OFFSET UNITYSDK_OFFSET(0xC2CE380)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E8686965723FB908_1_OFFSET UNITYSDK_OFFSET(0xC2C6470)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E8686965723FB908_OFFSET UNITYSDK_OFFSET(0xC2C63D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F1BE9F8DD9A4BA42_OFFSET UNITYSDK_OFFSET(0xC2CD1F0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F232DA5FE2B51D5A_OFFSET UNITYSDK_OFFSET(0xC2C58B0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0xC2C4930)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F3FEE5E138A4E64E_OFFSET UNITYSDK_OFFSET(0xC2CC090)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xC2CD4D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0xC2C7840)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xC2C5A20)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_FA25AB22EE12CF8D_1_OFFSET UNITYSDK_OFFSET(0xC2C6580)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_FA25AB22EE12CF8D_OFFSET UNITYSDK_OFFSET(0xC2C6510)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_FC3D01938DB4F220_OFFSET UNITYSDK_OFFSET(0xC2CD280)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_FCD0E2BE6F1FB5FC_OFFSET UNITYSDK_OFFSET(0xC2CBAF0)
#define CLASS_1_3948F09825CE1BA8_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0xC2CF600)
#define CLASS_1_3948F09825CE1BA8_SET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0xC2CF550)
#define CLASS_1_3948F09825CE1BA8_SET_HASREGION_OFFSET UNITYSDK_OFFSET(0xC2CF530)
#define CLASS_1_3948F09825CE1BA8_SET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0xC2CF6B0)
#define CLASS_1_3948F09825CE1BA8__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2CF6C0)
#define CLASS_1_3948F09825CE1BA8__CTOR_OFFSET UNITYSDK_OFFSET(0xC2C7AB0)

inline static constexpr unsigned int Class_1_3948F09825CE1BA8_TypeDefinitionIndex = 62175;

class Class_1_3948F09825CE1BA8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_JBBCKPOAHCL()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0x4C670);
	}
	static ::System::Boolean* StaticGet_HMKFCDPBKFJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0x119F0);
	}
	static ::System::Boolean* StaticGet_AHOMJDMJJPO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0x119F1);
	}
	static ::System::Boolean* StaticGet_ENNGPHPPFPP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0x119F2);
	}
	::Class_1_4CE2015FBA9EB106* CIHCMFCLCNI; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* PPMMPAOAKGE; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* CICFOBOMHNI; // 0x20
	::RPG::GameCore::StageRegionCollection* OCPODIPIJFN; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* OGGGBMKGKIP; // 0x30
	::RPG::Client::RegionManagerDebugMono* MPFDPICIPID; // 0x38
	::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*>* EPFAPAONHMI; // 0x40
	::System::Action_2<::Class_1_B338251AE5C2EEC8*, ::Class_1_B338251AE5C2EEC8*>* BIKOJDMGFON; // 0x48
	::Class_1_3948F09825CE1BA8_Class_2_C7B167532A4FEF9E* KGLEAOAOHKO; // 0x50
	::Class_1_3948F09825CE1BA8_Class_1_D821F557CE4717CF* MHNKIDKIHHM; // 0x58
	::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_B338251AE5C2EEC8*>*>* AKILKFIOHNA; // 0x60
	::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* NCNPOINLNGC; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Action_2<::Class_1_B338251AE5C2EEC8*, ::Class_1_B338251AE5C2EEC8*>*>* FHFGICFBGMK; // 0x70
	::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* GMOGELHAPDP; // 0x78
	::RPG::Client::Stage* PKLNPNKEJOO; // 0x80
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* BCKANDNDKMA; // 0x88
	::Class_1_3948F09825CE1BA8_Class_1_D821F557CE4717CF* FJOCNPFBHIJ; // 0x90
	::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* JKAFPIGAPKD; // 0x98
	::Class_1_3948F09825CE1BA8_Class_2_236B7252CED38016* MOEDCKJAOEB; // 0xA0
	::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* MEAPIMDMKLK; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* MDOHEJMFDCN; // 0xB0
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* JBOAHJHEOJL; // 0xB8
	::System::Action_1<::Class_1_B338251AE5C2EEC8*>* MEMMLLEOEEH; // 0xC0
	::System::Collections::Generic::List_1<::Struct_2_070A00258D76D4EF>* EJKCBEMOCBM; // 0xC8
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* AJMEFIKCNED; // 0xD0
	::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* ICENIBNIENK; // 0xD8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_B338251AE5C2EEC8*>* LKNMPNEMGJH; // 0xE0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JMBKNAGNKEL; // 0xE8
	::System::Collections::Generic::HashSet_1<::System::UInt32>* OCMOPOKGJNN; // 0xF0
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* HOPDGDDJKOA; // 0xF8
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* CCJMNHLONEA; // 0x100
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_B338251AE5C2EEC8*>* LMMJPNMIDFN; // 0x108
	::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* OHDJPOJFAAL; // 0x110
	::System::Action_1<::Class_1_B338251AE5C2EEC8*>* OFJLHOIMPCD; // 0x118
	::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* JMGHNGMPACJ; // 0x120
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* LCFOBPCCLIB; // 0x128
	::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* ICGDKKEHJMH; // 0x130
	::Class_1_B338251AE5C2EEC8* DOKGABILFED; // 0x138
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* DHCFAIKJBNH; // 0x140
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* PPIFFLDJJEF; // 0x148
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B338251AE5C2EEC8*>* OPLMLLNGEEF; // 0x150
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* BKNIFDPBPJG; // 0x158
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D256EDA05CFBDF64*>* DCJGBNLBGME; // 0x160
	::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* GDNBCDOFPJG; // 0x168
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurrentActiveAndConnectionRegionsIDs_k__BackingField; // 0x170
	::UnityEngine::GameObject* GKNBCPMJHMN; // 0x178
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* FGODHGOAAAE; // 0x180
	::System::UInt64 NLLCNGAIFCL; // 0x188
	::RPG::Client::ReasonBool_1<::RPG::Client::PauseRegionManagerReason> IMGPHHLDLNE; // 0x190
	::System::Boolean KFDGAGLPABC; // 0x198
	::System::Boolean _EnableGroupRegionStreaming_k__BackingField; // 0x199
	::System::Boolean AEHAGJIAAOE; // 0x19A
	::System::Boolean MGDNHBGKDBD; // 0x19B
	::System::Boolean _HasRegion_k__BackingField; // 0x19C
	::System::Boolean IFJELGCDAPJ; // 0x19D
	::System::Boolean _SourceDistUseRegionV1_k__BackingField; // 0x19E
	::System::Boolean PAIIGLNBFCP; // 0x19F
	::System::UInt64 JPFHHABLMIL; // 0x1A0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8__CCTOR_OFFSET))();
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	static ::System::Boolean Method_1_239FFFA3D9461D78(::RPG::GameCore::RegionBlockVisibilityStatus a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_239FFFA3D9461D78_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_B210A7945BA5EABD(::Class_1_B338251AE5C2EEC8* a1, ::Class_1_303D5A33D1401D59* a2, ::Struct_2_960171EC79068492 a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::Class_1_303D5A33D1401D59*, ::Struct_2_960171EC79068492, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_B210A7945BA5EABD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_D1F3A338D3E27B90(::Class_1_B338251AE5C2EEC8* a1, ::Class_1_303D5A33D1401D59* a2, ::Struct_2_960171EC79068492 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::Class_1_303D5A33D1401D59*, ::Struct_2_960171EC79068492, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_D1F3A338D3E27B90_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_1_83976A321A1E8072(::Class_1_B338251AE5C2EEC8* a1, ::Class_1_303D5A33D1401D59* a2, ::RPG::GameCore::RegionBlockVisibilityStatus a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::Class_1_303D5A33D1401D59*, ::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_83976A321A1E8072_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_84F4D10E041E2BEE(::Class_1_303D5A33D1401D59* a1, ::Struct_2_960171EC79068492 a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::Struct_2_960171EC79068492, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_84F4D10E041E2BEE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0623E385C311F5BF(::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0623E385C311F5BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F232DA5FE2B51D5A(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F232DA5FE2B51D5A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_838255C97B7E8A88(::Class_1_303D5A33D1401D59* a1, ::Struct_2_0116DF2DF707827A& a2, ::Struct_2_85609C8D1B5CE8E3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::Struct_2_0116DF2DF707827A&, ::Struct_2_85609C8D1B5CE8E3&))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_838255C97B7E8A88_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B03F6D31318CC2B8(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_B03F6D31318CC2B8_OFFSET))(this, a1);
	}

	::Class_1_B338251AE5C2EEC8* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_B338251AE5C2EEC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::Class_1_B338251AE5C2EEC8* Method_1_A85A5A4F484E8E77(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::Class_1_B338251AE5C2EEC8*(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A85A5A4F484E8E77_OFFSET))(this, a1);
	}

	static ::Class_1_B338251AE5C2EEC8* Method_1_0F277A9D098842CD(::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_B338251AE5C2EEC8*(*)(::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0F277A9D098842CD_OFFSET))(a1, a2);
	}

	::Class_1_B338251AE5C2EEC8* Method_1_BE1D74FB34792AB9(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_B338251AE5C2EEC8*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_BE1D74FB34792AB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA7208D5810564A8(::RPG::GameCore::GameEntity* a1, ::System::Action_2<::Class_1_B338251AE5C2EEC8*, ::Class_1_B338251AE5C2EEC8*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_2<::Class_1_B338251AE5C2EEC8*, ::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_BA7208D5810564A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7E7B17A71976D23(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_D7E7B17A71976D23_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536(::System::Action_1<::Class_1_B338251AE5C2EEC8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_1(::System::Action_1<::Class_1_B338251AE5C2EEC8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_2(::System::Action_1<::Class_1_B338251AE5C2EEC8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_3(::System::Action_1<::Class_1_B338251AE5C2EEC8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B338251AE5C2EEC8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B338251AE5C2EEC8*>* Method_1_DA41DCAD7C27DB4D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B338251AE5C2EEC8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_DA41DCAD7C27DB4D_OFFSET))(this);
	}

	::System::Void Method_1_E8686965723FB908(::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E8686965723FB908_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8686965723FB908_1(::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E8686965723FB908_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA25AB22EE12CF8D(::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_B338251AE5C2EEC8*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_B338251AE5C2EEC8*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_FA25AB22EE12CF8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA25AB22EE12CF8D_1(::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_B338251AE5C2EEC8*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_B338251AE5C2EEC8*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_FA25AB22EE12CF8D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55C38544D359C3B(::System::Action_2<::Class_1_B338251AE5C2EEC8*, ::Class_1_B338251AE5C2EEC8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_B338251AE5C2EEC8*, ::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55C38544D359C3B_1(::System::Action_2<::Class_1_B338251AE5C2EEC8*, ::Class_1_B338251AE5C2EEC8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_B338251AE5C2EEC8*, ::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0CFDE2355F2B2ED(::System::Action_3<::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_C0CFDE2355F2B2ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_977363C43A88A54F(::System::Action_3<::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_B338251AE5C2EEC8*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_977363C43A88A54F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_418875B112A8CF2C(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action* a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_418875B112A8CF2C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_18EBFF3A190BD0E0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_18EBFF3A190BD0E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE25B04543C947C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_DE25B04543C947C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9F20EE182644086(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_B9F20EE182644086_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_565AA3EF89C82663(::Class_1_3948F09825CE1BA8_Class_1_D821F557CE4717CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3948F09825CE1BA8_Class_1_D821F557CE4717CF*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_565AA3EF89C82663_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_3948F09825CE1BA8* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_3948F09825CE1BA8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_995B4AEB9D9468D5_OFFSET))();
	}

	static ::RPG::GameCore::StageRegionCollection* Method_1_394905343968AA47(::System::String* a1)
	{
		return ((::RPG::GameCore::StageRegionCollection*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_394905343968AA47_OFFSET))(a1);
	}

	::System::Void Method_1_CA6A44C2892EA9EB(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CA6A44C2892EA9EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_2044E4C6D20E5CBC(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_2044E4C6D20E5CBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCD0E2BE6F1FB5FC(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_FCD0E2BE6F1FB5FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_FC3D01938DB4F220(::RPG::Client::PauseRegionManagerReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_FC3D01938DB4F220_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AC1A67F263CD5B2(::RPG::Client::PauseRegionManagerReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0AC1A67F263CD5B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_78A69BBDCB1FA27A(::System::UInt32 a1, ::Class_1_B338251AE5C2EEC8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_B338251AE5C2EEC8*&))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_78A69BBDCB1FA27A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F775CED3096B027(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_7F775CED3096B027_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CE3888623737EB0(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_3CE3888623737EB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_1EBFCF83E3B55D24(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_1EBFCF83E3B55D24_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_8CDC51540437DD98(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_8CDC51540437DD98_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_0FE89573C3FE4978(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0FE89573C3FE4978_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_E6A156CCCF0451F6(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E6A156CCCF0451F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F3FEE5E138A4E64E(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::HashSet_1<::Class_1_B338251AE5C2EEC8*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F3FEE5E138A4E64E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4711E70DF272C20C(::Class_1_B338251AE5C2EEC8* a1, ::Class_1_DE4C6B309308A230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_4711E70DF272C20C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2581C7C18C4336EC(::Class_1_B338251AE5C2EEC8* a1, ::Class_1_DE4C6B309308A230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_2581C7C18C4336EC_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_2964439C006AF9F5()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_2964439C006AF9F5_OFFSET))(this);
	}

	::Class_1_B338251AE5C2EEC8* Method_1_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_B338251AE5C2EEC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_B338251AE5C2EEC8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Boolean get_HasRegion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_HASREGION_OFFSET))(this);
	}

	::System::Void set_HasRegion(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_HASREGION_OFFSET))(this, a1);
	}

	::System::Boolean get_EnableGroupRegionStreaming()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this);
	}

	::System::Void set_EnableGroupRegionStreaming(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_829B09E994469287()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_829B09E994469287_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* Method_1_D8698CD426D6823D()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_D8698CD426D6823D_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_CurrentActiveAndConnectionRegionsIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this);
	}

	::System::Void set_CurrentActiveAndConnectionRegionsIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionCollection* Method_1_8159F0067112FF61()
	{
		return ((::RPG::GameCore::StageRegionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_8159F0067112FF61_OFFSET))(this);
	}

	::System::Boolean get_SourceDistUseRegionV1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_SOURCEDISTUSEREGIONV1_OFFSET))(this);
	}

	::System::Void set_SourceDistUseRegionV1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_SOURCEDISTUSEREGIONV1_OFFSET))(this, a1);
	}

	::RPG::Client::Stage* Method_1_F1BE9F8DD9A4BA42()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F1BE9F8DD9A4BA42_OFFSET))(this);
	}
};
