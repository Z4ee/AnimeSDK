#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_152140BAFD2DB102;
class Class_1_274386B6ECA5E606;
class Class_1_611F5177B2A953F1;
class Class_2_B61AA605EEABB61B;
namespace RPG::Client { class HPBar; }
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelTurnAvatarChangeFinish; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillExecutingBegin; }
namespace RPG::GameCore { class LevelTurnUltraSkillPrepare; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_87A25F59CE9BC10D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x183A0FF0)
#define CLASS_2_87A25F59CE9BC10D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x183A1510)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1839F180)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_12DDD6C6B63F2F2A_OFFSET UNITYSDK_OFFSET(0x183A0C60)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x1839CD90)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_2386C7BBF94ECF92_OFFSET UNITYSDK_OFFSET(0x1839F0D0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x1839D8C0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x1839EDC0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_2E07D057E72DE76A_OFFSET UNITYSDK_OFFSET(0x1839E960)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_33810DA10A929460_OFFSET UNITYSDK_OFFSET(0x1839DF10)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_361C380E2F55376A_OFFSET UNITYSDK_OFFSET(0x1839FBD0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x183A04A0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1839D200)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1839E4E0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_561BB15593B1F1CB_OFFSET UNITYSDK_OFFSET(0x1839D960)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_5800B8C2CE59928F_OFFSET UNITYSDK_OFFSET(0x1839ECB0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x1839EE10)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_655880E9A77423EB_OFFSET UNITYSDK_OFFSET(0x1839DEB0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1839D2C0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x1839D020)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_76E2B58C2AA79A8F_OFFSET UNITYSDK_OFFSET(0x1839F370)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_7AB2C887EB34984A_OFFSET UNITYSDK_OFFSET(0x1839E390)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x1839F590)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_7F7E40EC5698C6EF_OFFSET UNITYSDK_OFFSET(0x1839DDF0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_7FBAA229ED524F8E_1_OFFSET UNITYSDK_OFFSET(0x1839FF80)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x1839E7A0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_87A99E4BDD8FF37B_OFFSET UNITYSDK_OFFSET(0x1839F020)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_89BDA051DC0B625D_OFFSET UNITYSDK_OFFSET(0x1839D4C0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x1839D440)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0x1839D3A0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x1839CFD0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1839DD90)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_96A0F0F8F3E30F20_OFFSET UNITYSDK_OFFSET(0x1839EF20)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x183A05F0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x183A0450)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_A671DB75B24BDC06_OFFSET UNITYSDK_OFFSET(0x1839F4E0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x183A0000)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_AEA58ADE0ABA06C8_OFFSET UNITYSDK_OFFSET(0x1839EB80)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_B190F8BB00264010_OFFSET UNITYSDK_OFFSET(0x1839D6A0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_B7879BA86A6429FD_OFFSET UNITYSDK_OFFSET(0x1839D5D0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0x1839D250)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_BF51A7F7DC348455_OFFSET UNITYSDK_OFFSET(0x1839D870)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x183A0F00)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x183A0AB0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1839CF30)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_D2A677C6728D2D07_OFFSET UNITYSDK_OFFSET(0x1839F200)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_D3E970D78BB8886D_OFFSET UNITYSDK_OFFSET(0x1839E580)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_E55E4AD995D596D8_OFFSET UNITYSDK_OFFSET(0x183A0260)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_E5D1955A389D1F9C_OFFSET UNITYSDK_OFFSET(0x183A0140)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0x183A03D0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x1839FB50)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x183A06F0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x183A07B0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x183A0870)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x183A0930)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x183A09F0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x183A0BA0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0x183A0D80)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_8_OFFSET UNITYSDK_OFFSET(0x183A0E40)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x183A04F0)
#define CLASS_2_87A25F59CE9BC10D_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1839CD50)
#define CLASS_2_87A25F59CE9BC10D__CTOR_OFFSET UNITYSDK_OFFSET(0x183A19F0)
#define CLASS_2_87A25F59CE9BC10D__ONBIND_OFFSET UNITYSDK_OFFSET(0x1839CCA0)
#define CLASS_2_87A25F59CE9BC10D__ONTICK_OFFSET UNITYSDK_OFFSET(0x1839CF70)

inline static constexpr unsigned int Class_2_87A25F59CE9BC10D_TypeDefinitionIndex = 68328;

class Class_2_87A25F59CE9BC10D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x2; // 0x0
	::RPG::GameCore::SkillData* Field_2_2; // 0x60
	::RPG::GameCore::CharacterDataComponent* Field_2_3; // 0x68
	::Class_1_611F5177B2A953F1* Field_2_4; // 0x70
	::RPG::GameCore::SkillCharacterComponent* Field_2_5; // 0x78
	::RPG::GameCore::LevelUIComponent* Field_2_6; // 0x80
	::RPG::Client::HPBar* Field_2_7; // 0x88
	::System::Func_1<::System::Boolean>* Field_2_8; // 0x90
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_9; // 0x98
	::RPG::GameCore::GameEntity* Field_2_10; // 0xA0
	::RPG::GameCore::BattleInstance* Field_2_11; // 0xA8
	::Class_1_274386B6ECA5E606* Field_2_12; // 0xB0
	::UnityEngine::Transform* Field_2_13; // 0xB8
	::System::Collections::Generic::List_1<::Class_2_B61AA605EEABB61B*>* Field_2_14; // 0xC0
	::System::UInt32 Field_2_15; // 0xC8
	::System::UInt32 Field_2_16; // 0xCC
	::RPG::GameCore::SkillSPProgressType Field_2_17; // 0xD0
	::RPG::GameCore::FixPoint Field_2_18; // 0xD8
	::System::Int32 Field_2_19; // 0xE0
	::System::Boolean Field_2_20; // 0xE4
	::System::Boolean Field_2_21; // 0xE5
	::System::Boolean Field_2_22; // 0xE6

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D__ONBIND_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_BD6A3C745D127D79_OFFSET))(this, a1);
	}

	::System::Void Method_2_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_89BDA051DC0B625D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_89BDA051DC0B625D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7879BA86A6429FD(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_B7879BA86A6429FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF51A7F7DC348455(::System::Func_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_BF51A7F7DC348455_OFFSET))(this, a1);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_561BB15593B1F1CB(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_561BB15593B1F1CB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo Method_2_7F7E40EC5698C6EF()
	{
		return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_7F7E40EC5698C6EF_OFFSET))(this);
	}

	::System::Void Method_2_655880E9A77423EB(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_655880E9A77423EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AB2C887EB34984A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_7AB2C887EB34984A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3E970D78BB8886D(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_D3E970D78BB8886D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E07D057E72DE76A(::RPG::GameCore::AbilityMaxSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_2E07D057E72DE76A_OFFSET))(this, a1);
	}

	::System::Void Method_2_AEA58ADE0ABA06C8(::RPG::GameCore::AbilityBeingLimbo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_AEA58ADE0ABA06C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::System::Void Method_2_96A0F0F8F3E30F20(::RPG::GameCore::LevelTurnUltraSkillPrepare* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillPrepare*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_96A0F0F8F3E30F20_OFFSET))(this, a1);
	}

	::System::Void Method_2_87A99E4BDD8FF37B(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_87A99E4BDD8FF37B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2386C7BBF94ECF92(::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_2386C7BBF94ECF92_OFFSET))(this, a1);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A677C6728D2D07(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_D2A677C6728D2D07_OFFSET))(this, a1);
	}

	::System::Void Method_2_76E2B58C2AA79A8F(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_76E2B58C2AA79A8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_A671DB75B24BDC06(::RPG::GameCore::LevelTurnAvatarChangeFinish* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnAvatarChangeFinish*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_A671DB75B24BDC06_OFFSET))(this, a1);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean Method_2_33810DA10A929460(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_33810DA10A929460_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_E5D1955A389D1F9C(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_E5D1955A389D1F9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_361C380E2F55376A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_361C380E2F55376A_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_7FBAA229ED524F8E_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_E55E4AD995D596D8()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_E55E4AD995D596D8_OFFSET))(this);
	}

	::System::Void Method_2_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_2_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_8A3D91A38AD395C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_B190F8BB00264010(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_B190F8BB00264010_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_5D6CD31BA2372F92_OFFSET))(this);
	}

	::System::Void Method_2_5800B8C2CE59928F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_5800B8C2CE59928F_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_12DDD6C6B63F2F2A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_12DDD6C6B63F2F2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_F37CDBD6D46274D2_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87A25F59CE9BC10D_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
