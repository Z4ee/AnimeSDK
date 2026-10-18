#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_3D203C82F08F6855_MemberFrontApproach.h"
#include "unitysdk/Class_2_3D203C82F08F6855_MemberFrontDirection.h"
#include "unitysdk/Class_2_3D203C82F08F6855_MemberFrontPoseRejectReason.h"
#include "unitysdk/Class_2_3D203C82F08F6855_MemberFrontRouteBuildResult.h"
#include "unitysdk/Class_2_3D203C82F08F6855_NavigatePhase.h"
#include "unitysdk/Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA.h"
#include "unitysdk/Class_2_3D203C82F08F6855_Struct_2_E658502528B7C034_1.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_126;
class Class_2_ED5B635C4D775055;
class Class_2_F7886F522CF5D0F4;
class Class_3_1E5606234CB46C27;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PetPartyMemberFrontDestination; }
namespace RPG::GameCore { class PetPartyRandomStrollDestination; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_2_3D203C82F08F6855_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB421CF0)
#define CLASS_2_3D203C82F08F6855_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB41F620)
#define CLASS_2_3D203C82F08F6855_METHOD_2_0390C4E425AE9F2B_OFFSET UNITYSDK_OFFSET(0xB428510)
#define CLASS_2_3D203C82F08F6855_METHOD_2_07BB2C5DBFAC07D0_OFFSET UNITYSDK_OFFSET(0xB4275C0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_0E72B12FCD9FB8F6_OFFSET UNITYSDK_OFFSET(0xB41FB60)
#define CLASS_2_3D203C82F08F6855_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xB420FE0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_103198B055733AF4_OFFSET UNITYSDK_OFFSET(0xB4286F0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_107247B6331E64C6_OFFSET UNITYSDK_OFFSET(0xB420BC0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0xB425410)
#define CLASS_2_3D203C82F08F6855_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB425BA0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_18250CD45FE78150_OFFSET UNITYSDK_OFFSET(0xB4250F0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_189A1787B0797738_OFFSET UNITYSDK_OFFSET(0xB420CB0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_1C5751DE38D528FC_OFFSET UNITYSDK_OFFSET(0xB424BD0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB424A10)
#define CLASS_2_3D203C82F08F6855_METHOD_2_1F710FEA0746DBF6_OFFSET UNITYSDK_OFFSET(0xB41FD10)
#define CLASS_2_3D203C82F08F6855_METHOD_2_1FFD8E6440E82CC3_OFFSET UNITYSDK_OFFSET(0xB423420)
#define CLASS_2_3D203C82F08F6855_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0xB4206E0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_2F018BF45F7B2F74_OFFSET UNITYSDK_OFFSET(0xB4269E0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0xB425CB0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0xB423BA0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB420E10)
#define CLASS_2_3D203C82F08F6855_METHOD_2_33C0FC8F2DF73151_OFFSET UNITYSDK_OFFSET(0xB423580)
#define CLASS_2_3D203C82F08F6855_METHOD_2_407C055EFB16AAE2_OFFSET UNITYSDK_OFFSET(0xB422950)
#define CLASS_2_3D203C82F08F6855_METHOD_2_41A716957D425391_OFFSET UNITYSDK_OFFSET(0xB423D40)
#define CLASS_2_3D203C82F08F6855_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xB424780)
#define CLASS_2_3D203C82F08F6855_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0xB41FBE0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_558C6AE12602A241_OFFSET UNITYSDK_OFFSET(0xB425620)
#define CLASS_2_3D203C82F08F6855_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xB41FA30)
#define CLASS_2_3D203C82F08F6855_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xB425C20)
#define CLASS_2_3D203C82F08F6855_METHOD_2_6AC5965E20F3D488_OFFSET UNITYSDK_OFFSET(0xB4243A0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_6ED1A3A35D93E726_OFFSET UNITYSDK_OFFSET(0xB421E60)
#define CLASS_2_3D203C82F08F6855_METHOD_2_70F8E08853C3BAB3_OFFSET UNITYSDK_OFFSET(0xB428B00)
#define CLASS_2_3D203C82F08F6855_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xB4213E0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_7889E07C4263897F_OFFSET UNITYSDK_OFFSET(0xB4290C0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_7D54B6D10749FBD6_OFFSET UNITYSDK_OFFSET(0xB424DF0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0xB425A30)
#define CLASS_2_3D203C82F08F6855_METHOD_2_7F31D7F3A5C935D5_OFFSET UNITYSDK_OFFSET(0xB425020)
#define CLASS_2_3D203C82F08F6855_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xB421BE0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_85763733365A3BCB_OFFSET UNITYSDK_OFFSET(0xB426D50)
#define CLASS_2_3D203C82F08F6855_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0xB427F90)
#define CLASS_2_3D203C82F08F6855_METHOD_2_86501BB54DE2FE3F_OFFSET UNITYSDK_OFFSET(0xB420AB0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0xB429870)
#define CLASS_2_3D203C82F08F6855_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xB421B30)
#define CLASS_2_3D203C82F08F6855_METHOD_2_9195977DDBF43311_OFFSET UNITYSDK_OFFSET(0xB424AB0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_95234A3F16AFB705_OFFSET UNITYSDK_OFFSET(0xB429030)
#define CLASS_2_3D203C82F08F6855_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB425910)
#define CLASS_2_3D203C82F08F6855_METHOD_2_97EE62D3DAC63BDE_OFFSET UNITYSDK_OFFSET(0xB425A80)
#define CLASS_2_3D203C82F08F6855_METHOD_2_98816F102ADBDDB6_OFFSET UNITYSDK_OFFSET(0xB422140)
#define CLASS_2_3D203C82F08F6855_METHOD_2_A0B79EF867C8AFEC_OFFSET UNITYSDK_OFFSET(0xB425F80)
#define CLASS_2_3D203C82F08F6855_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB425540)
#define CLASS_2_3D203C82F08F6855_METHOD_2_A4603BBA4F8C8819_OFFSET UNITYSDK_OFFSET(0xB4295F0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_A4B286AAF7DCA3B1_OFFSET UNITYSDK_OFFSET(0xB420030)
#define CLASS_2_3D203C82F08F6855_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xB420630)
#define CLASS_2_3D203C82F08F6855_METHOD_2_ADAA000B04405FA8_OFFSET UNITYSDK_OFFSET(0xB422450)
#define CLASS_2_3D203C82F08F6855_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB4204E0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xB425E20)
#define CLASS_2_3D203C82F08F6855_METHOD_2_B1936CE4DA97AA45_2_OFFSET UNITYSDK_OFFSET(0xB420B10)
#define CLASS_2_3D203C82F08F6855_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB424950)
#define CLASS_2_3D203C82F08F6855_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xB421A90)
#define CLASS_2_3D203C82F08F6855_METHOD_2_B67A7D5A7BB42B14_OFFSET UNITYSDK_OFFSET(0xB422220)
#define CLASS_2_3D203C82F08F6855_METHOD_2_B91D843169600AC4_OFFSET UNITYSDK_OFFSET(0xB428840)
#define CLASS_2_3D203C82F08F6855_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB41F960)
#define CLASS_2_3D203C82F08F6855_METHOD_2_CD39363E608D20AF_OFFSET UNITYSDK_OFFSET(0xB428040)
#define CLASS_2_3D203C82F08F6855_METHOD_2_CD45A95662FED252_OFFSET UNITYSDK_OFFSET(0xB4260E0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_D1265062BB26104E_OFFSET UNITYSDK_OFFSET(0xB4255B0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xB421690)
#define CLASS_2_3D203C82F08F6855_METHOD_2_D87A4511195C1164_OFFSET UNITYSDK_OFFSET(0xB425480)
#define CLASS_2_3D203C82F08F6855_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xB421950)
#define CLASS_2_3D203C82F08F6855_METHOD_2_E0E3C5590B8219FD_OFFSET UNITYSDK_OFFSET(0xB422600)
#define CLASS_2_3D203C82F08F6855_METHOD_2_E41803A49F19D348_OFFSET UNITYSDK_OFFSET(0xB425880)
#define CLASS_2_3D203C82F08F6855_METHOD_2_E41EC9645EC58987_OFFSET UNITYSDK_OFFSET(0xB426AA0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_ECBAF7DFA95701DF_OFFSET UNITYSDK_OFFSET(0xB4227D0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_EFF57D56ABA65E6F_OFFSET UNITYSDK_OFFSET(0xB426E10)
#define CLASS_2_3D203C82F08F6855_METHOD_2_F0E3B487F838335C_OFFSET UNITYSDK_OFFSET(0xB422F80)
#define CLASS_2_3D203C82F08F6855_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB4241E0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_F587EF0F840323A1_OFFSET UNITYSDK_OFFSET(0xB4222D0)
#define CLASS_2_3D203C82F08F6855_METHOD_2_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0xB425EC0)
#define CLASS_2_3D203C82F08F6855_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB41F660)
#define CLASS_2_3D203C82F08F6855_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB420370)
#define CLASS_2_3D203C82F08F6855_TICK_OFFSET UNITYSDK_OFFSET(0xB420750)
#define CLASS_2_3D203C82F08F6855__CTOR_OFFSET UNITYSDK_OFFSET(0xB41F420)

inline static constexpr unsigned int Class_2_3D203C82F08F6855_TypeDefinitionIndex = 53083;

class Class_2_3D203C82F08F6855 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Int32 FICPFPPHJDJ = 0x8; // 0x0
	// static const ::System::Int32 HEMAEBACBCF = 0x14; // 0x0
	// static const ::System::Single LAGABGKHOGL; // 0x0
	// static const ::System::Single CEODLNFDFCB; // 0x0
	// static const ::System::Single ALDMACMFNMM; // 0x0
	// static const ::System::Single NAKCBAOACBK; // 0x0
	// static const ::System::Single OOABLPNHHLJ; // 0x0
	// static const ::System::Single BGMEAPLOAKI; // 0x0
	::RPG::GameCore::PetPartyMemberFrontDestination* AFDAILMPCPE; // 0x18
	::RPG::GameCore::GameEntity* CMNJDMKPPIA; // 0x20
	::RPG::GameCore::GameEntity* MNELKDDGGNJ; // 0x28
	::RPG::GameCore::GameEntity* GCNPJAEJMGA; // 0x30
	::Class_1_43BD383C98B4C0C5_126* IFEABAFDNIB; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* PIFHJEDFJIO; // 0x40
	::RPG::GameCore::GameEntity* EAGINDINJHE; // 0x48
	::Class_2_F7886F522CF5D0F4* KDEAEMBOBOK; // 0x50
	::RPG::GameCore::GameEntity* EOHOFFHHJKC; // 0x58
	::UnityEngine::AI::NavMeshPath* IAOJNJIBNNI; // 0x60
	::Il2CppArray<::UnityEngine::Vector3>* KEFJNGOPPKK; // 0x68
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x70
	::Class_3_1E5606234CB46C27* OFKGLJOAMLD; // 0x78
	::Class_1_43BD383C98B4C0C5_126* HGKBLIINDPI; // 0x80
	::RPG::GameCore::AdventureCharacterController* APNMGGMMPPN; // 0x88
	::RPG::GameCore::PetPartyRandomStrollDestination* GHAHDJHDOEE; // 0x90
	::Class_2_ED5B635C4D775055* JFMDCAIDMHJ; // 0x98
	::Class_1_43BD383C98B4C0C5_126* KPJMDJAALJF; // 0xA0
	::Il2CppArray<::UnityEngine::Vector3>* FMPIJAAEILB; // 0xA8
	::Il2CppArray<::UnityEngine::Vector3>* JDMLLKKHOMC; // 0xB0
	::RPG::GameCore::AdvNavigationFailReason DABKHDICLNA; // 0xB8
	::System::Int32 JNMKNEBBJPG; // 0xBC
	::Class_2_3D203C82F08F6855_MemberFrontApproach FCLHAMFIKMC; // 0xC0
	::System::Int32 JEGAOFKPHFG; // 0xC4
	::RPG::GameCore::CharacterMotionFlag JEFOMAFAHAI; // 0xC8
	::System::Boolean EIHOBDBEAAM; // 0xCC
	::System::Boolean CPGNMMHCMGF; // 0xCD
	::System::Boolean JJPKPNIEFJM; // 0xCE
	::System::Boolean DLDOBEFOOFN; // 0xCF
	::UnityEngine::Vector3 MBPIBLLNFHO; // 0xD0
	::Class_2_3D203C82F08F6855_MemberFrontApproach EHEICIHDPIE; // 0xDC
	::UnityEngine::Vector3 DJAGNFFDBAD; // 0xE0
	::System::Single GHIONIBDMNK; // 0xEC
	::System::Boolean OKFKMBGHEOB; // 0xF0
	::System::Boolean BEFCKACBOFI; // 0xF1
	::System::Single NKIGIHGLKKB; // 0xF4
	::System::Boolean OKJCMDOEBNM; // 0xF8
	::System::Boolean OBHMEGIICKG; // 0xF9
	::System::Boolean CAICBMEIPDF; // 0xFA
	::System::Boolean CJGOMJJHCKC; // 0xFB
	::System::Single MMDDKLGKEKL; // 0xFC
	::Class_2_3D203C82F08F6855_NavigatePhase NOHNKAIALPJ; // 0x100
	::UnityEngine::Vector3 CCCCMKPCNMO; // 0x104
	::Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA KCFOAKAINNO; // 0x110
	::System::Single NBCOPLGFJON; // 0x11C
	::System::Single MDNCBCPDBOA; // 0x120
	::System::Int32 LBMANLJCEFO; // 0x124
	::System::Single PGDCHKCEOBD; // 0x128
	::Class_2_3D203C82F08F6855_MemberFrontApproach ABJBBAHHBEN; // 0x12C
	::Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA HPCGLEKNGPF; // 0x130
	::System::Int32 LGCDGJJBOFJ; // 0x13C
	::System::Single OBNNDFBKOEL; // 0x140
	::UnityEngine::Vector3 GLFIIFDCPDO; // 0x144
	::System::Single EGJBKCDDLJO; // 0x150
	::System::Boolean PHIPPHJPMAD; // 0x154
	::System::Boolean PLEIMFNBJBL; // 0x155
	::System::Boolean KPGNOKBLNBN; // 0x156
	::System::Boolean CJJMPFHCICK; // 0x157
	::UnityEngine::Vector3 AACDMNLCNFB; // 0x158
	::Class_2_3D203C82F08F6855_MemberFrontDirection APFDCNPHEMN; // 0x164
	::System::Single KNKOMOGDLOJ; // 0x168
	::UnityEngine::Vector3 ELDJGCHLGEK; // 0x16C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1E5606234CB46C27* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1E5606234CB46C27*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_GETCONFIG_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1F710FEA0746DBF6(::RPG::GameCore::PetPartyRandomStrollDestination* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyRandomStrollDestination*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_1F710FEA0746DBF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4B286AAF7DCA3B1(::RPG::GameCore::PetPartyMemberFrontDestination* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyMemberFrontDestination*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_A4B286AAF7DCA3B1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_507A5122CD01412B_OFFSET))(this);
	}

	::System::Boolean Method_2_B67A7D5A7BB42B14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_B67A7D5A7BB42B14_OFFSET))(this);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C5751DE38D528FC(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_1C5751DE38D528FC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_33C0FC8F2DF73151(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_33C0FC8F2DF73151_OFFSET))(this, a1);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean Method_2_41A716957D425391(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_41A716957D425391_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7D54B6D10749FBD6(::System::Boolean& a1, ::System::Boolean& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_7D54B6D10749FBD6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7F31D7F3A5C935D5(::System::Boolean a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_7F31D7F3A5C935D5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_D1265062BB26104E(::System::Boolean a1, ::RPG::GameCore::AdvNavigationFailReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_D1265062BB26104E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_107247B6331E64C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_107247B6331E64C6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_558C6AE12602A241()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_558C6AE12602A241_OFFSET))(this);
	}

	::System::Void Method_2_97EE62D3DAC63BDE(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_97EE62D3DAC63BDE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41803A49F19D348(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_E41803A49F19D348_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_1FFD8E6440E82CC3(::Class_2_3D203C82F08F6855_MemberFrontRouteBuildResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3D203C82F08F6855_MemberFrontRouteBuildResult))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_1FFD8E6440E82CC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_189A1787B0797738(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_189A1787B0797738_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_0E72B12FCD9FB8F6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_0E72B12FCD9FB8F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_B1936CE4DA97AA45_2_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_3D203C82F08F6855_MemberFrontRouteBuildResult Method_2_F0E3B487F838335C()
	{
		return ((::Class_2_3D203C82F08F6855_MemberFrontRouteBuildResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_F0E3B487F838335C_OFFSET))(this);
	}

	::Class_2_3D203C82F08F6855_MemberFrontRouteBuildResult Method_2_A0B79EF867C8AFEC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::Class_2_3D203C82F08F6855_MemberFrontApproach a5)
	{
		return ((::Class_2_3D203C82F08F6855_MemberFrontRouteBuildResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::Class_2_3D203C82F08F6855_MemberFrontApproach))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_A0B79EF867C8AFEC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_CD45A95662FED252(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::Class_2_3D203C82F08F6855_MemberFrontApproach a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::Class_2_3D203C82F08F6855_MemberFrontApproach))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_CD45A95662FED252_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_2_EFF57D56ABA65E6F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5, ::Il2CppArray<::UnityEngine::Vector3>* a6)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_EFF57D56ABA65E6F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_18250CD45FE78150(::UnityEngine::Vector3 a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::RPG::GameCore::GameEntity* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single& a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_18250CD45FE78150_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_07BB2C5DBFAC07D0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean& a7, ::System::Single& a8, ::UnityEngine::Vector3& a9, ::System::Single& a10)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean&, ::System::Single&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_07BB2C5DBFAC07D0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Boolean Method_2_0390C4E425AE9F2B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean& a5, ::System::Single& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_0390C4E425AE9F2B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_407C055EFB16AAE2(::Class_2_3D203C82F08F6855_MemberFrontApproach a1, ::Class_2_3D203C82F08F6855_MemberFrontPoseRejectReason& a2, ::Class_2_3D203C82F08F6855_Struct_2_E658502528B7C034_1& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3D203C82F08F6855_MemberFrontApproach, ::Class_2_3D203C82F08F6855_MemberFrontPoseRejectReason&, ::Class_2_3D203C82F08F6855_Struct_2_E658502528B7C034_1&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_407C055EFB16AAE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_2F018BF45F7B2F74(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_2F018BF45F7B2F74_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_B91D843169600AC4(::Class_2_3D203C82F08F6855_MemberFrontApproach a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::Class_2_3D203C82F08F6855_MemberFrontApproach, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_B91D843169600AC4_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_2_E41EC9645EC58987(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_E41EC9645EC58987_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6AC5965E20F3D488(::UnityEngine::Vector3 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_6AC5965E20F3D488_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_70F8E08853C3BAB3(::UnityEngine::Vector3 a1, ::Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_70F8E08853C3BAB3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_CD39363E608D20AF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_CD39363E608D20AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_7889E07C4263897F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_7889E07C4263897F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_2_ECBAF7DFA95701DF(::RPG::GameCore::GameEntity* a1, ::Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_ECBAF7DFA95701DF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_98816F102ADBDDB6(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_98816F102ADBDDB6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_E0E3C5590B8219FD(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_E0E3C5590B8219FD_OFFSET))(a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	static ::System::Single Method_2_A4603BBA4F8C8819(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_A4603BBA4F8C8819_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_2_103198B055733AF4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_103198B055733AF4_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_2_9195977DDBF43311(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_9195977DDBF43311_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_2_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_95234A3F16AFB705(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_95234A3F16AFB705_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_86501BB54DE2FE3F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_86501BB54DE2FE3F_OFFSET))(a1);
	}

	::System::Boolean Method_2_F587EF0F840323A1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_F587EF0F840323A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	static ::System::Single Method_2_D87A4511195C1164(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_D87A4511195C1164_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_867F85CA133E06EB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_867F85CA133E06EB_OFFSET))(a1);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	static ::System::Boolean Method_2_6ED1A3A35D93E726(::RPG::GameCore::PetPartyRandomStrollDestination* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PetPartyRandomStrollDestination*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_6ED1A3A35D93E726_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_ADAA000B04405FA8(::RPG::GameCore::PetPartyMemberFrontDestination* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PetPartyMemberFrontDestination*))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_ADAA000B04405FA8_OFFSET))(a1);
	}

	::System::Void Method_2_85763733365A3BCB(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_85763733365A3BCB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
