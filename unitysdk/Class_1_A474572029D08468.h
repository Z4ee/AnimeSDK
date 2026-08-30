#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SkillReadyType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/Client/UISkillIndexMask.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_C6DB1F90A2BB8B39_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_152140BAFD2DB102;
class Class_1_401B04C8577D73B5;
class Class_2_2461A19B320A03F9;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A474572029D08468_GET_ACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x128443B0)
#define CLASS_1_A474572029D08468_GET_ACTIVESKILLUIINDEX_OFFSET UNITYSDK_OFFSET(0x128443D0)
#define CLASS_1_A474572029D08468_GET_CHARMLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x128443F0)
#define CLASS_1_A474572029D08468_GET_SKILLLOCKDICT_OFFSET UNITYSDK_OFFSET(0x12844510)
#define CLASS_1_A474572029D08468_METHOD_1_00663474E94BD729_OFFSET UNITYSDK_OFFSET(0x12840A40)
#define CLASS_1_A474572029D08468_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x1283F590)
#define CLASS_1_A474572029D08468_METHOD_1_0292A026F6FEACFE_OFFSET UNITYSDK_OFFSET(0x1283E9F0)
#define CLASS_1_A474572029D08468_METHOD_1_04319991B7E26866_OFFSET UNITYSDK_OFFSET(0x12840B80)
#define CLASS_1_A474572029D08468_METHOD_1_0DC1857E54EDB461_OFFSET UNITYSDK_OFFSET(0x1283E980)
#define CLASS_1_A474572029D08468_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1283E800)
#define CLASS_1_A474572029D08468_METHOD_1_12E0EF70D17D16B7_OFFSET UNITYSDK_OFFSET(0x1283C340)
#define CLASS_1_A474572029D08468_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x12843A70)
#define CLASS_1_A474572029D08468_METHOD_1_1A23764A30FD7F35_OFFSET UNITYSDK_OFFSET(0x1283DCE0)
#define CLASS_1_A474572029D08468_METHOD_1_1AB67458471FAC4D_OFFSET UNITYSDK_OFFSET(0x1283B670)
#define CLASS_1_A474572029D08468_METHOD_1_1ACE4FA8BF9AC308_OFFSET UNITYSDK_OFFSET(0x1283CEA0)
#define CLASS_1_A474572029D08468_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1283C4E0)
#define CLASS_1_A474572029D08468_METHOD_1_2363A5BDE91856D4_OFFSET UNITYSDK_OFFSET(0x128411A0)
#define CLASS_1_A474572029D08468_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1283B020)
#define CLASS_1_A474572029D08468_METHOD_1_250427530C00C53E_OFFSET UNITYSDK_OFFSET(0x1283D120)
#define CLASS_1_A474572029D08468_METHOD_1_25269843025B5C78_1_OFFSET UNITYSDK_OFFSET(0x12841C60)
#define CLASS_1_A474572029D08468_METHOD_1_25269843025B5C78_OFFSET UNITYSDK_OFFSET(0x12841B70)
#define CLASS_1_A474572029D08468_METHOD_1_25314EC055B41E66_OFFSET UNITYSDK_OFFSET(0x12843BD0)
#define CLASS_1_A474572029D08468_METHOD_1_2B0AE62D097BB2AF_OFFSET UNITYSDK_OFFSET(0x128429F0)
#define CLASS_1_A474572029D08468_METHOD_1_2DBEC89DCEB7E244_OFFSET UNITYSDK_OFFSET(0x1283DC70)
#define CLASS_1_A474572029D08468_METHOD_1_2E651A9A002E41E0_OFFSET UNITYSDK_OFFSET(0x1283DFF0)
#define CLASS_1_A474572029D08468_METHOD_1_2EC67A5E8AD7FC04_OFFSET UNITYSDK_OFFSET(0x1283ECE0)
#define CLASS_1_A474572029D08468_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x1283BFB0)
#define CLASS_1_A474572029D08468_METHOD_1_31A8CEFD4020FF4C_OFFSET UNITYSDK_OFFSET(0x1283D350)
#define CLASS_1_A474572029D08468_METHOD_1_3206458F0050EA6A_OFFSET UNITYSDK_OFFSET(0x1283DF40)
#define CLASS_1_A474572029D08468_METHOD_1_33EDCF6E6E67039A_OFFSET UNITYSDK_OFFSET(0x1283E210)
#define CLASS_1_A474572029D08468_METHOD_1_34510A1A36F2966F_OFFSET UNITYSDK_OFFSET(0x12841D50)
#define CLASS_1_A474572029D08468_METHOD_1_352CF35C0B9926B7_OFFSET UNITYSDK_OFFSET(0x1283DB00)
#define CLASS_1_A474572029D08468_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x12841F40)
#define CLASS_1_A474572029D08468_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12841B20)
#define CLASS_1_A474572029D08468_METHOD_1_40BB44DE949E57D1_OFFSET UNITYSDK_OFFSET(0x12842BF0)
#define CLASS_1_A474572029D08468_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12842650)
#define CLASS_1_A474572029D08468_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1283AFA0)
#define CLASS_1_A474572029D08468_METHOD_1_464B80C09A37526F_1_OFFSET UNITYSDK_OFFSET(0x1283F200)
#define CLASS_1_A474572029D08468_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x1283DAA0)
#define CLASS_1_A474572029D08468_METHOD_1_4A51E3A577778A97_OFFSET UNITYSDK_OFFSET(0x12841370)
#define CLASS_1_A474572029D08468_METHOD_1_4D9CA32BE6EF9005_OFFSET UNITYSDK_OFFSET(0x12844490)
#define CLASS_1_A474572029D08468_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x1283E6A0)
#define CLASS_1_A474572029D08468_METHOD_1_57E0C4B0DBDF0C8E_OFFSET UNITYSDK_OFFSET(0x1283DEE0)
#define CLASS_1_A474572029D08468_METHOD_1_6DED37D3DB1BAFA5_1_OFFSET UNITYSDK_OFFSET(0x12844450)
#define CLASS_1_A474572029D08468_METHOD_1_6DED37D3DB1BAFA5_OFFSET UNITYSDK_OFFSET(0x12844410)
#define CLASS_1_A474572029D08468_METHOD_1_70E4F26A47681690_OFFSET UNITYSDK_OFFSET(0x1283C960)
#define CLASS_1_A474572029D08468_METHOD_1_7D0AE85F0BBFE5E5_OFFSET UNITYSDK_OFFSET(0x12841060)
#define CLASS_1_A474572029D08468_METHOD_1_7F433E7183ECA5FF_OFFSET UNITYSDK_OFFSET(0x12843E50)
#define CLASS_1_A474572029D08468_METHOD_1_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x128432B0)
#define CLASS_1_A474572029D08468_METHOD_1_8368A592D46CE379_OFFSET UNITYSDK_OFFSET(0x12840CD0)
#define CLASS_1_A474572029D08468_METHOD_1_8768A5F3937098C9_OFFSET UNITYSDK_OFFSET(0x1283E930)
#define CLASS_1_A474572029D08468_METHOD_1_8C3DB70FFBBF01C7_1_OFFSET UNITYSDK_OFFSET(0x12843200)
#define CLASS_1_A474572029D08468_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x12841F90)
#define CLASS_1_A474572029D08468_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x128428F0)
#define CLASS_1_A474572029D08468_METHOD_1_9F961B4DC1A8DC14_OFFSET UNITYSDK_OFFSET(0x1283AEB0)
#define CLASS_1_A474572029D08468_METHOD_1_A454E9B78711E7B7_OFFSET UNITYSDK_OFFSET(0x1283E170)
#define CLASS_1_A474572029D08468_METHOD_1_A94D70CF9469BF95_OFFSET UNITYSDK_OFFSET(0x12840760)
#define CLASS_1_A474572029D08468_METHOD_1_AC57C1BD24049FD7_OFFSET UNITYSDK_OFFSET(0x1283D0A0)
#define CLASS_1_A474572029D08468_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x1283FFC0)
#define CLASS_1_A474572029D08468_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12842080)
#define CLASS_1_A474572029D08468_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1283B2F0)
#define CLASS_1_A474572029D08468_METHOD_1_B53EC42A1BFA44C9_OFFSET UNITYSDK_OFFSET(0x128439E0)
#define CLASS_1_A474572029D08468_METHOD_1_B666F0A2B7130916_OFFSET UNITYSDK_OFFSET(0x1283D220)
#define CLASS_1_A474572029D08468_METHOD_1_B6CD54FB2E6367EC_OFFSET UNITYSDK_OFFSET(0x1283BF30)
#define CLASS_1_A474572029D08468_METHOD_1_B710AD145420A84D_1_OFFSET UNITYSDK_OFFSET(0x12843830)
#define CLASS_1_A474572029D08468_METHOD_1_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x12843700)
#define CLASS_1_A474572029D08468_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x1283FAC0)
#define CLASS_1_A474572029D08468_METHOD_1_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0x128429A0)
#define CLASS_1_A474572029D08468_METHOD_1_C4CA61915653988A_OFFSET UNITYSDK_OFFSET(0x12843ED0)
#define CLASS_1_A474572029D08468_METHOD_1_C94A109F6C341D18_OFFSET UNITYSDK_OFFSET(0x12844530)
#define CLASS_1_A474572029D08468_METHOD_1_C9E304B8455D5FD7_OFFSET UNITYSDK_OFFSET(0x1283E550)
#define CLASS_1_A474572029D08468_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1283CE50)
#define CLASS_1_A474572029D08468_METHOD_1_CB91FC545C6D99D2_OFFSET UNITYSDK_OFFSET(0x12840F20)
#define CLASS_1_A474572029D08468_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x128427C0)
#define CLASS_1_A474572029D08468_METHOD_1_CF8E4B58C12D7954_OFFSET UNITYSDK_OFFSET(0x12844580)
#define CLASS_1_A474572029D08468_METHOD_1_D25CFA28E8C200FE_OFFSET UNITYSDK_OFFSET(0x1283B480)
#define CLASS_1_A474572029D08468_METHOD_1_DFF4B66A65F23F6B_OFFSET UNITYSDK_OFFSET(0x12842100)
#define CLASS_1_A474572029D08468_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x12840040)
#define CLASS_1_A474572029D08468_METHOD_1_E37D46A8F228DFDC_OFFSET UNITYSDK_OFFSET(0x1283C630)
#define CLASS_1_A474572029D08468_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x1283DE70)
#define CLASS_1_A474572029D08468_METHOD_1_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0x1283B770)
#define CLASS_1_A474572029D08468_METHOD_1_F2DA76F1B37ECBCC_OFFSET UNITYSDK_OFFSET(0x1283E0F0)
#define CLASS_1_A474572029D08468_METHOD_1_F2E045B3786178E0_OFFSET UNITYSDK_OFFSET(0x1283B410)
#define CLASS_1_A474572029D08468_METHOD_1_F726A15A02931B93_OFFSET UNITYSDK_OFFSET(0x12840310)
#define CLASS_1_A474572029D08468_METHOD_1_F737FC73C507D8CF_OFFSET UNITYSDK_OFFSET(0x12844000)
#define CLASS_1_A474572029D08468_SET_ACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x128443C0)
#define CLASS_1_A474572029D08468_SET_ACTIVESKILLUIINDEX_OFFSET UNITYSDK_OFFSET(0x128443E0)
#define CLASS_1_A474572029D08468_SET_CHARMLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x12844400)
#define CLASS_1_A474572029D08468_SET_SKILLLOCKDICT_OFFSET UNITYSDK_OFFSET(0x12844520)
#define CLASS_1_A474572029D08468__CTOR_OFFSET UNITYSDK_OFFSET(0x128445D0)
#define CLASS_1_A474572029D08468___PLAYSKILLREADYEFFECT_B__60_0_OFFSET UNITYSDK_OFFSET(0x12844700)

inline static constexpr unsigned int Class_1_A474572029D08468_TypeDefinitionIndex = 71942;

class Class_1_A474572029D08468 : public ::System::Object
{
public:
	// static const ::System::Single CJGHKIMLPGA; // 0x0
	// static const ::System::Single HDEENKLELFB; // 0x0
	// static const ::System::Single KCPCKEDBEJP; // 0x0
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x10
	::Class_2_2461A19B320A03F9* NCABPAPLJCI; // 0x18
	::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x20
	::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x28
	::RPG::GameCore::SkillData* GGAEMPPOJOO; // 0x30
	::RPG::Client::MonoEffect* KBEEJCPJJLI; // 0x38
	::RPG::GameCore::SkillData* LPHPLKEOPKN; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EDDCNFBGELN; // 0x48
	::Class_2_2461A19B320A03F9* PLCDBCDLGMM; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_C6DB1F90A2BB8B39_1>* NLNLJFNEHJN; // 0x58
	::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x60
	::RPG::GameCore::GameEntity* BOIFNBDCMFH; // 0x68
	::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0x70
	::System::String* MGKGLNNEPFG; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HPPDNLHIHIG; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>* _SkillLockDict_k__BackingField; // 0x88
	::System::String* ECAPACACPHI; // 0x90
	::RPG::GameCore::SkillCharacterComponent* DLKGKDBPHOH; // 0x98
	::RPG::GameCore::GameEntity* OECBECNAFEC; // 0xA0
	::System::UInt32 NHLEFDLGHMJ; // 0xA8
	::System::Int32 LNPHGDOJCGP; // 0xAC
	::RPG::Client::UISkillIndex DKIGLCPJIBJ; // 0xB0
	::System::Single BHKMFCJIPKI; // 0xB4
	::System::Single CNPALGBHBNL; // 0xB8
	::System::Int32 _ActiveSkillIndex_k__BackingField; // 0xBC
	::System::Single DIAKBJGOILK; // 0xC0
	::System::Single MKMNJPCPIBH; // 0xC4
	::System::Boolean _CharmLockTarget_k__BackingField; // 0xC8
	::System::Boolean DGNLDNGNNJG; // 0xC9
	::System::Boolean BLJDFHECHHI; // 0xCA
	::System::Boolean OMMGEHGLGKA; // 0xCB
	::RPG::Client::UISkillIndexMask EMPDINCFOLD; // 0xCC
	::System::Single BACKCBGEFFP; // 0xD0
	::System::Single IOBEPLFJBNM; // 0xD4
	::RPG::Client::UISkillIndex GOKPFFCCFFE; // 0xD8
	::RPG::Client::UISkillIndex _ActiveSkillUIIndex_k__BackingField; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9F961B4DC1A8DC14(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_9F961B4DC1A8DC14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_F2E045B3786178E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_F2E045B3786178E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6CD54FB2E6367EC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B6CD54FB2E6367EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_1ACE4FA8BF9AC308(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_1ACE4FA8BF9AC308_OFFSET))(this, a1);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_1_352CF35C0B9926B7(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_352CF35C0B9926B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A23764A30FD7F35(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_1A23764A30FD7F35_OFFSET))(this, a1);
	}

	::System::Void Method_1_57E0C4B0DBDF0C8E(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_57E0C4B0DBDF0C8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3206458F0050EA6A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_3206458F0050EA6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A454E9B78711E7B7(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_A454E9B78711E7B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F2DA76F1B37ECBCC(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_F2DA76F1B37ECBCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33EDCF6E6E67039A(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_33EDCF6E6E67039A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_31A8CEFD4020FF4C(::RPG::Client::UISkillIndex a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_31A8CEFD4020FF4C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::Class_1_152140BAFD2DB102* Method_1_F726A15A02931B93(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::BattleOperationType a3, ::System::Boolean a4, ::RPG::GameCore::GameEntity* a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::Il2CppArray<::System::String*>* a10)
	{
		return ((::Class_1_152140BAFD2DB102*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleOperationType, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_F726A15A02931B93_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::RPG::GameCore::SkillConfig* Method_1_00663474E94BD729()
	{
		return ((::RPG::GameCore::SkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_00663474E94BD729_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_04319991B7E26866()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_04319991B7E26866_OFFSET))(this);
	}

	::System::Boolean Method_1_8368A592D46CE379()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_8368A592D46CE379_OFFSET))(this);
	}

	::System::Boolean Method_1_12E0EF70D17D16B7(::RPG::Client::UISkillIndex a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::TextID& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::GameCore::GameEntity*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_12E0EF70D17D16B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Boolean Method_1_7D0AE85F0BBFE5E5(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_7D0AE85F0BBFE5E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2DBEC89DCEB7E244(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_2DBEC89DCEB7E244_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E37D46A8F228DFDC(::RPG::GameCore::SkillInputType a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillInputType, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_E37D46A8F228DFDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4A51E3A577778A97(::RPG::Client::UISkillIndexMask a1, ::RPG::GameCore::SkillInputType a2, ::System::Boolean a3, ::System::Boolean a4, ::RPG::Client::UISkillIndex& a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndexMask, ::RPG::GameCore::SkillInputType, ::System::Boolean, ::System::Boolean, ::RPG::Client::UISkillIndex&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_4A51E3A577778A97_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_25269843025B5C78(::Il2CppArray<::RPG::GameCore::ControlSkillType>* a1, ::RPG::GameCore::SkillInputType a2, ::RPG::GameCore::ControlSkillType& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ControlSkillType>*, ::RPG::GameCore::SkillInputType, ::RPG::GameCore::ControlSkillType&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_25269843025B5C78_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_25269843025B5C78_1(::Il2CppArray<::RPG::GameCore::ControlSkillType>* a1, ::RPG::GameCore::SkillInputType a2, ::RPG::GameCore::ControlSkillType& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ControlSkillType>*, ::RPG::GameCore::SkillInputType, ::RPG::GameCore::ControlSkillType&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_25269843025B5C78_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntity* Method_1_34510A1A36F2966F()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_34510A1A36F2966F_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Boolean Method_1_AC57C1BD24049FD7(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_AC57C1BD24049FD7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_250427530C00C53E(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_250427530C00C53E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_F1C870D01294DAF7_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_DFF4B66A65F23F6B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_DFF4B66A65F23F6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA410EA09457B5C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_BA410EA09457B5C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B0AE62D097BB2AF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_2B0AE62D097BB2AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_40BB44DE949E57D1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_40BB44DE949E57D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_8C3DB70FFBBF01C7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B710AD145420A84D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B710AD145420A84D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_1AB67458471FAC4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_1AB67458471FAC4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::Class_1_152140BAFD2DB102* Method_1_A94D70CF9469BF95(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::Il2CppArray<::System::String*>* a9)
	{
		return ((::Class_1_152140BAFD2DB102*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_A94D70CF9469BF95_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_D25CFA28E8C200FE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_D25CFA28E8C200FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_70E4F26A47681690(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_70E4F26A47681690_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8768A5F3937098C9(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_8768A5F3937098C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Boolean Method_1_0292A026F6FEACFE(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_0292A026F6FEACFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DC1857E54EDB461(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_0DC1857E54EDB461_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_2EC67A5E8AD7FC04(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_2EC67A5E8AD7FC04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_1_25314EC055B41E66(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_25314EC055B41E66_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::RPG::Client::SkillReadyType Method_1_7F433E7183ECA5FF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::SkillReadyType(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_7F433E7183ECA5FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_464B80C09A37526F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_464B80C09A37526F_1_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_F737FC73C507D8CF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ControlSkillType a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlSkillType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_F737FC73C507D8CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::RPG::MVector3> Method_1_C4CA61915653988A(::RPG::GameCore::VCameraConfig* a1)
	{
		return ((::System::Nullable_1<::RPG::MVector3>(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_C4CA61915653988A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C9E304B8455D5FD7(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_C9E304B8455D5FD7_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndex Method_1_2E651A9A002E41E0(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_2E651A9A002E41E0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SkillData* Method_1_B666F0A2B7130916(::RPG::Client::UISkillIndex a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B666F0A2B7130916_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ControlSkillType Method_1_CB91FC545C6D99D2(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_CB91FC545C6D99D2_OFFSET))(this, a1);
	}

	::System::Int32 get_ActiveSkillIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_GET_ACTIVESKILLINDEX_OFFSET))(this);
	}

	::System::Void set_ActiveSkillIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_SET_ACTIVESKILLINDEX_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndex get_ActiveSkillUIIndex()
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_GET_ACTIVESKILLUIINDEX_OFFSET))(this);
	}

	::System::Void set_ActiveSkillUIIndex(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_SET_ACTIVESKILLUIINDEX_OFFSET))(this, a1);
	}

	::System::Boolean get_CharmLockTarget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_GET_CHARMLOCKTARGET_OFFSET))(this);
	}

	::System::Void set_CharmLockTarget(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_SET_CHARMLOCKTARGET_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* Method_1_6DED37D3DB1BAFA5()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_6DED37D3DB1BAFA5_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_6DED37D3DB1BAFA5_1()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_6DED37D3DB1BAFA5_1_OFFSET))(this);
	}

	::RPG::Client::UISkillIndex Method_1_4D9CA32BE6EF9005()
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_4D9CA32BE6EF9005_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>* get_SkillLockDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_GET_SKILLLOCKDICT_OFFSET))(this);
	}

	::System::Void set_SkillLockDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_SET_SKILLLOCKDICT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_B53EC42A1BFA44C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_B53EC42A1BFA44C9_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndexMask Method_1_C94A109F6C341D18()
	{
		return ((::RPG::Client::UISkillIndexMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_C94A109F6C341D18_OFFSET))(this);
	}

	::System::Void Method_1_CF8E4B58C12D7954(::RPG::Client::UISkillIndexMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndexMask))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_CF8E4B58C12D7954_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndexMask Method_1_2363A5BDE91856D4()
	{
		return ((::RPG::Client::UISkillIndexMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_2363A5BDE91856D4_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void __PlaySkillReadyEffect_b__60_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_A474572029D08468___PLAYSKILLREADYEFFECT_B__60_0_OFFSET))(this, a1, a2);
	}
};
