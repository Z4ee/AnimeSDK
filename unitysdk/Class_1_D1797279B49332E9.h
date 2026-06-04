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
class Class_2_1DBE0E1023AFDBC5;
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

#define CLASS_1_D1797279B49332E9_GET_ACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x10C81EE0)
#define CLASS_1_D1797279B49332E9_GET_ACTIVESKILLUIINDEX_OFFSET UNITYSDK_OFFSET(0x10C81F00)
#define CLASS_1_D1797279B49332E9_GET_CHARMLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x10C81F20)
#define CLASS_1_D1797279B49332E9_GET_SKILLLOCKDICT_OFFSET UNITYSDK_OFFSET(0x10C81FE0)
#define CLASS_1_D1797279B49332E9_METHOD_1_00663474E94BD729_OFFSET UNITYSDK_OFFSET(0x10C7E6D0)
#define CLASS_1_D1797279B49332E9_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x10C7D230)
#define CLASS_1_D1797279B49332E9_METHOD_1_0292A026F6FEACFE_OFFSET UNITYSDK_OFFSET(0x10C7C6A0)
#define CLASS_1_D1797279B49332E9_METHOD_1_04319991B7E26866_OFFSET UNITYSDK_OFFSET(0x10C7E820)
#define CLASS_1_D1797279B49332E9_METHOD_1_0DC1857E54EDB461_OFFSET UNITYSDK_OFFSET(0x10C7C630)
#define CLASS_1_D1797279B49332E9_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10C7C490)
#define CLASS_1_D1797279B49332E9_METHOD_1_12E0EF70D17D16B7_OFFSET UNITYSDK_OFFSET(0x10C7A170)
#define CLASS_1_D1797279B49332E9_METHOD_1_148E75AACF65798E_OFFSET UNITYSDK_OFFSET(0x10C7FBD0)
#define CLASS_1_D1797279B49332E9_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x10C81580)
#define CLASS_1_D1797279B49332E9_METHOD_1_1A23764A30FD7F35_OFFSET UNITYSDK_OFFSET(0x10C7B9B0)
#define CLASS_1_D1797279B49332E9_METHOD_1_1AB67458471FAC4D_OFFSET UNITYSDK_OFFSET(0x10C794D0)
#define CLASS_1_D1797279B49332E9_METHOD_1_1ACE4FA8BF9AC308_OFFSET UNITYSDK_OFFSET(0x10C7AC70)
#define CLASS_1_D1797279B49332E9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10C7A310)
#define CLASS_1_D1797279B49332E9_METHOD_1_2363A5BDE91856D4_OFFSET UNITYSDK_OFFSET(0x10C7EE40)
#define CLASS_1_D1797279B49332E9_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x10C78E90)
#define CLASS_1_D1797279B49332E9_METHOD_1_25269843025B5C78_1_OFFSET UNITYSDK_OFFSET(0x10C7F7D0)
#define CLASS_1_D1797279B49332E9_METHOD_1_25269843025B5C78_OFFSET UNITYSDK_OFFSET(0x10C7F6E0)
#define CLASS_1_D1797279B49332E9_METHOD_1_25314EC055B41E66_OFFSET UNITYSDK_OFFSET(0x10C816E0)
#define CLASS_1_D1797279B49332E9_METHOD_1_2B0AE62D097BB2AF_OFFSET UNITYSDK_OFFSET(0x10C80500)
#define CLASS_1_D1797279B49332E9_METHOD_1_2DBEC89DCEB7E244_OFFSET UNITYSDK_OFFSET(0x10C7B940)
#define CLASS_1_D1797279B49332E9_METHOD_1_2E651A9A002E41E0_OFFSET UNITYSDK_OFFSET(0x10C7BCC0)
#define CLASS_1_D1797279B49332E9_METHOD_1_2EC67A5E8AD7FC04_OFFSET UNITYSDK_OFFSET(0x10C7C9A0)
#define CLASS_1_D1797279B49332E9_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x10C79DE0)
#define CLASS_1_D1797279B49332E9_METHOD_1_31A8CEFD4020FF4C_OFFSET UNITYSDK_OFFSET(0x10C7B030)
#define CLASS_1_D1797279B49332E9_METHOD_1_3206458F0050EA6A_OFFSET UNITYSDK_OFFSET(0x10C7BC10)
#define CLASS_1_D1797279B49332E9_METHOD_1_33EDCF6E6E67039A_OFFSET UNITYSDK_OFFSET(0x10C7BEF0)
#define CLASS_1_D1797279B49332E9_METHOD_1_352CF35C0B9926B7_OFFSET UNITYSDK_OFFSET(0x10C7B7E0)
#define CLASS_1_D1797279B49332E9_METHOD_1_3DE89B3890D58CF2_OFFSET UNITYSDK_OFFSET(0x10C7E410)
#define CLASS_1_D1797279B49332E9_METHOD_1_40BB44DE949E57D1_OFFSET UNITYSDK_OFFSET(0x10C80710)
#define CLASS_1_D1797279B49332E9_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10C80160)
#define CLASS_1_D1797279B49332E9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10C78E10)
#define CLASS_1_D1797279B49332E9_METHOD_1_46019E40A12B5629_1_OFFSET UNITYSDK_OFFSET(0x10C81F50)
#define CLASS_1_D1797279B49332E9_METHOD_1_46019E40A12B5629_OFFSET UNITYSDK_OFFSET(0x10C81F40)
#define CLASS_1_D1797279B49332E9_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x10C7B780)
#define CLASS_1_D1797279B49332E9_METHOD_1_4D9CA32BE6EF9005_OFFSET UNITYSDK_OFFSET(0x10C81F60)
#define CLASS_1_D1797279B49332E9_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x10C7C330)
#define CLASS_1_D1797279B49332E9_METHOD_1_57E0C4B0DBDF0C8E_OFFSET UNITYSDK_OFFSET(0x10C7BBB0)
#define CLASS_1_D1797279B49332E9_METHOD_1_57E68A6EEFF1F8DB_OFFSET UNITYSDK_OFFSET(0x10C82020)
#define CLASS_1_D1797279B49332E9_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x10C79160)
#define CLASS_1_D1797279B49332E9_METHOD_1_70E4F26A47681690_OFFSET UNITYSDK_OFFSET(0x10C7A720)
#define CLASS_1_D1797279B49332E9_METHOD_1_7D0AE85F0BBFE5E5_OFFSET UNITYSDK_OFFSET(0x10C7ED00)
#define CLASS_1_D1797279B49332E9_METHOD_1_7F433E7183ECA5FF_OFFSET UNITYSDK_OFFSET(0x10C81970)
#define CLASS_1_D1797279B49332E9_METHOD_1_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x10C80DC0)
#define CLASS_1_D1797279B49332E9_METHOD_1_82356BE9CCCD3114_OFFSET UNITYSDK_OFFSET(0x10C82010)
#define CLASS_1_D1797279B49332E9_METHOD_1_8368A592D46CE379_OFFSET UNITYSDK_OFFSET(0x10C7E970)
#define CLASS_1_D1797279B49332E9_METHOD_1_8768A5F3937098C9_OFFSET UNITYSDK_OFFSET(0x10C7C5E0)
#define CLASS_1_D1797279B49332E9_METHOD_1_8C3DB70FFBBF01C7_1_OFFSET UNITYSDK_OFFSET(0x10C80D10)
#define CLASS_1_D1797279B49332E9_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x10C7FA60)
#define CLASS_1_D1797279B49332E9_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x10C7CED0)
#define CLASS_1_D1797279B49332E9_METHOD_1_90973941CA345015_OFFSET UNITYSDK_OFFSET(0x10C7EFE0)
#define CLASS_1_D1797279B49332E9_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x10C80400)
#define CLASS_1_D1797279B49332E9_METHOD_1_9F961B4DC1A8DC14_OFFSET UNITYSDK_OFFSET(0x10C78D20)
#define CLASS_1_D1797279B49332E9_METHOD_1_A454E9B78711E7B7_OFFSET UNITYSDK_OFFSET(0x10C7BE50)
#define CLASS_1_D1797279B49332E9_METHOD_1_AC57C1BD24049FD7_OFFSET UNITYSDK_OFFSET(0x10C7AE80)
#define CLASS_1_D1797279B49332E9_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x10C7DC70)
#define CLASS_1_D1797279B49332E9_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10C7FB50)
#define CLASS_1_D1797279B49332E9_METHOD_1_B368EE71C7719F8E_OFFSET UNITYSDK_OFFSET(0x10C7DFC0)
#define CLASS_1_D1797279B49332E9_METHOD_1_B53EC42A1BFA44C9_OFFSET UNITYSDK_OFFSET(0x10C814F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_B666F0A2B7130916_OFFSET UNITYSDK_OFFSET(0x10C7AF00)
#define CLASS_1_D1797279B49332E9_METHOD_1_B6CD54FB2E6367EC_OFFSET UNITYSDK_OFFSET(0x10C79D60)
#define CLASS_1_D1797279B49332E9_METHOD_1_B6E7CFEBBF3F6B86_OFFSET UNITYSDK_OFFSET(0x10C7F8C0)
#define CLASS_1_D1797279B49332E9_METHOD_1_B710AD145420A84D_1_OFFSET UNITYSDK_OFFSET(0x10C81340)
#define CLASS_1_D1797279B49332E9_METHOD_1_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x10C81210)
#define CLASS_1_D1797279B49332E9_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x10C7D780)
#define CLASS_1_D1797279B49332E9_METHOD_1_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0x10C804B0)
#define CLASS_1_D1797279B49332E9_METHOD_1_C4CA61915653988A_OFFSET UNITYSDK_OFFSET(0x10C819F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_C9E304B8455D5FD7_OFFSET UNITYSDK_OFFSET(0x10C7C1F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C7AC20)
#define CLASS_1_D1797279B49332E9_METHOD_1_CB91FC545C6D99D2_OFFSET UNITYSDK_OFFSET(0x10C7EBC0)
#define CLASS_1_D1797279B49332E9_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x10C802D0)
#define CLASS_1_D1797279B49332E9_METHOD_1_D25CFA28E8C200FE_OFFSET UNITYSDK_OFFSET(0x10C792F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x10C7DCF0)
#define CLASS_1_D1797279B49332E9_METHOD_1_E37D46A8F228DFDC_OFFSET UNITYSDK_OFFSET(0x10C7A3F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x10C7BB40)
#define CLASS_1_D1797279B49332E9_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x10C82030)
#define CLASS_1_D1797279B49332E9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10C82000)
#define CLASS_1_D1797279B49332E9_METHOD_1_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0x10C795D0)
#define CLASS_1_D1797279B49332E9_METHOD_1_F2DA76F1B37ECBCC_OFFSET UNITYSDK_OFFSET(0x10C7BDD0)
#define CLASS_1_D1797279B49332E9_METHOD_1_F2E045B3786178E0_OFFSET UNITYSDK_OFFSET(0x10C79280)
#define CLASS_1_D1797279B49332E9_METHOD_1_F737FC73C507D8CF_OFFSET UNITYSDK_OFFSET(0x10C81B20)
#define CLASS_1_D1797279B49332E9_SET_ACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x10C81EF0)
#define CLASS_1_D1797279B49332E9_SET_ACTIVESKILLUIINDEX_OFFSET UNITYSDK_OFFSET(0x10C81F10)
#define CLASS_1_D1797279B49332E9_SET_CHARMLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x10C81F30)
#define CLASS_1_D1797279B49332E9_SET_SKILLLOCKDICT_OFFSET UNITYSDK_OFFSET(0x10C81FF0)
#define CLASS_1_D1797279B49332E9__CTOR_OFFSET UNITYSDK_OFFSET(0x10C82040)
#define CLASS_1_D1797279B49332E9___PLAYSKILLREADYEFFECT_B__59_0_OFFSET UNITYSDK_OFFSET(0x10C82160)

inline static constexpr unsigned int Class_1_D1797279B49332E9_TypeDefinitionIndex = 67279;

class Class_1_D1797279B49332E9 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::System::String* Field_1_3; // 0x10
	::RPG::Client::MonoEffect* Field_1_4; // 0x18
	::RPG::GameCore::BattleInstance* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>* _SkillLockDict_k__BackingField; // 0x28
	::RPG::GameCore::CharacterDataComponent* Field_1_7; // 0x30
	::RPG::GameCore::SkillData* Field_1_8; // 0x38
	::RPG::GameCore::LevelUIComponent* Field_1_9; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_10; // 0x48
	::System::String* Field_1_11; // 0x50
	::RPG::GameCore::EventManager* Field_1_12; // 0x58
	::Class_2_1DBE0E1023AFDBC5* Field_1_13; // 0x60
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_14; // 0x68
	::System::Collections::Generic::List_1<::Struct_2_C6DB1F90A2BB8B39_1>* Field_1_15; // 0x70
	::Class_2_1DBE0E1023AFDBC5* Field_1_16; // 0x78
	::RPG::GameCore::GameEntity* Field_1_17; // 0x80
	::RPG::GameCore::SkillCharacterComponent* Field_1_18; // 0x88
	::RPG::GameCore::GameEntity* Field_1_19; // 0x90
	::RPG::GameCore::SkillData* Field_1_20; // 0x98
	::RPG::GameCore::SkillData* Field_1_21; // 0xA0
	::System::Boolean _CharmLockTarget_k__BackingField; // 0xA8
	::System::Boolean Field_1_23; // 0xA9
	::System::Boolean Field_1_24; // 0xAA
	::System::Boolean Field_1_25; // 0xAB
	::System::Single Field_1_26; // 0xAC
	::System::Int32 _ActiveSkillIndex_k__BackingField; // 0xB0
	::System::Int32 Field_1_28; // 0xB4
	::System::Single Field_1_29; // 0xB8
	::RPG::Client::UISkillIndex Field_1_30; // 0xBC
	::System::Single Field_1_31; // 0xC0
	::RPG::Client::UISkillIndex _ActiveSkillUIIndex_k__BackingField; // 0xC4
	::System::UInt32 Field_1_33; // 0xC8
	::RPG::Client::UISkillIndexMask Field_1_34; // 0xCC
	::System::Single Field_1_35; // 0xD0
	::System::Single Field_1_36; // 0xD4
	::RPG::Client::UISkillIndex Field_1_37; // 0xD8
	::System::Single Field_1_38; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9F961B4DC1A8DC14(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_9F961B4DC1A8DC14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_F2E045B3786178E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F2E045B3786178E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6CD54FB2E6367EC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B6CD54FB2E6367EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_1ACE4FA8BF9AC308(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1ACE4FA8BF9AC308_OFFSET))(this, a1);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_1_352CF35C0B9926B7(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_352CF35C0B9926B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A23764A30FD7F35(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1A23764A30FD7F35_OFFSET))(this, a1);
	}

	::System::Void Method_1_57E0C4B0DBDF0C8E(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_57E0C4B0DBDF0C8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3206458F0050EA6A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_3206458F0050EA6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A454E9B78711E7B7(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_A454E9B78711E7B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F2DA76F1B37ECBCC(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F2DA76F1B37ECBCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33EDCF6E6E67039A(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_33EDCF6E6E67039A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_31A8CEFD4020FF4C(::RPG::Client::UISkillIndex a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_31A8CEFD4020FF4C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::Class_1_152140BAFD2DB102* Method_1_B368EE71C7719F8E(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::BattleOperationType a3, ::System::Boolean a4, ::RPG::GameCore::GameEntity* a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::String* a10)
	{
		return ((::Class_1_152140BAFD2DB102*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleOperationType, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B368EE71C7719F8E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::RPG::GameCore::SkillConfig* Method_1_00663474E94BD729()
	{
		return ((::RPG::GameCore::SkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_00663474E94BD729_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_04319991B7E26866()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_04319991B7E26866_OFFSET))(this);
	}

	::System::Boolean Method_1_8368A592D46CE379()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_8368A592D46CE379_OFFSET))(this);
	}

	::System::Boolean Method_1_12E0EF70D17D16B7(::RPG::Client::UISkillIndex a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::TextID& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::GameCore::GameEntity*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_12E0EF70D17D16B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Boolean Method_1_7D0AE85F0BBFE5E5(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_7D0AE85F0BBFE5E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2DBEC89DCEB7E244(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2DBEC89DCEB7E244_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E37D46A8F228DFDC(::RPG::GameCore::SkillInputType a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillInputType, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_E37D46A8F228DFDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_90973941CA345015(::RPG::Client::UISkillIndexMask a1, ::RPG::GameCore::SkillInputType a2, ::System::Boolean a3, ::System::Boolean a4, ::RPG::Client::UISkillIndex& a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndexMask, ::RPG::GameCore::SkillInputType, ::System::Boolean, ::System::Boolean, ::RPG::Client::UISkillIndex&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_90973941CA345015_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_25269843025B5C78(::Il2CppArray<::RPG::GameCore::ControlSkillType>* a1, ::RPG::GameCore::SkillInputType a2, ::RPG::GameCore::ControlSkillType& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ControlSkillType>*, ::RPG::GameCore::SkillInputType, ::RPG::GameCore::ControlSkillType&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_25269843025B5C78_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_25269843025B5C78_1(::Il2CppArray<::RPG::GameCore::ControlSkillType>* a1, ::RPG::GameCore::SkillInputType a2, ::RPG::GameCore::ControlSkillType& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ControlSkillType>*, ::RPG::GameCore::SkillInputType, ::RPG::GameCore::ControlSkillType&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_25269843025B5C78_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntity* Method_1_B6E7CFEBBF3F6B86()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B6E7CFEBBF3F6B86_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Boolean Method_1_AC57C1BD24049FD7(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_AC57C1BD24049FD7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F1C870D01294DAF7_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_148E75AACF65798E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_148E75AACF65798E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA410EA09457B5C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_BA410EA09457B5C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B0AE62D097BB2AF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2B0AE62D097BB2AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_40BB44DE949E57D1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_40BB44DE949E57D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_8C3DB70FFBBF01C7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B710AD145420A84D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B710AD145420A84D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_1AB67458471FAC4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1AB67458471FAC4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::Class_1_152140BAFD2DB102* Method_1_3DE89B3890D58CF2(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::String* a9)
	{
		return ((::Class_1_152140BAFD2DB102*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_3DE89B3890D58CF2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_D25CFA28E8C200FE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_D25CFA28E8C200FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_70E4F26A47681690(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_70E4F26A47681690_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8768A5F3937098C9(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_8768A5F3937098C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Boolean Method_1_0292A026F6FEACFE(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_0292A026F6FEACFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DC1857E54EDB461(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_0DC1857E54EDB461_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_2EC67A5E8AD7FC04(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2EC67A5E8AD7FC04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_1_25314EC055B41E66(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_25314EC055B41E66_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::RPG::Client::SkillReadyType Method_1_7F433E7183ECA5FF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::SkillReadyType(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_7F433E7183ECA5FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_F737FC73C507D8CF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ControlSkillType a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlSkillType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F737FC73C507D8CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::RPG::MVector3> Method_1_C4CA61915653988A(::RPG::GameCore::VCameraConfig* a1)
	{
		return ((::System::Nullable_1<::RPG::MVector3>(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_C4CA61915653988A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C9E304B8455D5FD7(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_C9E304B8455D5FD7_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndex Method_1_2E651A9A002E41E0(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2E651A9A002E41E0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SkillData* Method_1_B666F0A2B7130916(::RPG::Client::UISkillIndex a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B666F0A2B7130916_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ControlSkillType Method_1_CB91FC545C6D99D2(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_CB91FC545C6D99D2_OFFSET))(this, a1);
	}

	::System::Int32 get_ActiveSkillIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_GET_ACTIVESKILLINDEX_OFFSET))(this);
	}

	::System::Void set_ActiveSkillIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_SET_ACTIVESKILLINDEX_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndex get_ActiveSkillUIIndex()
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_GET_ACTIVESKILLUIINDEX_OFFSET))(this);
	}

	::System::Void set_ActiveSkillUIIndex(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_SET_ACTIVESKILLUIINDEX_OFFSET))(this, a1);
	}

	::System::Boolean get_CharmLockTarget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_GET_CHARMLOCKTARGET_OFFSET))(this);
	}

	::System::Void set_CharmLockTarget(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_SET_CHARMLOCKTARGET_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* Method_1_46019E40A12B5629()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_46019E40A12B5629_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_46019E40A12B5629_1()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_46019E40A12B5629_1_OFFSET))(this);
	}

	::RPG::Client::UISkillIndex Method_1_4D9CA32BE6EF9005()
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_4D9CA32BE6EF9005_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>* get_SkillLockDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_GET_SKILLLOCKDICT_OFFSET))(this);
	}

	::System::Void set_SkillLockDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_SET_SKILLLOCKDICT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_B53EC42A1BFA44C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B53EC42A1BFA44C9_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndexMask Method_1_82356BE9CCCD3114()
	{
		return ((::RPG::Client::UISkillIndexMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_82356BE9CCCD3114_OFFSET))(this);
	}

	::System::Void Method_1_57E68A6EEFF1F8DB(::RPG::Client::UISkillIndexMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndexMask))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_57E68A6EEFF1F8DB_OFFSET))(this, a1);
	}

	::RPG::Client::UISkillIndexMask Method_1_2363A5BDE91856D4()
	{
		return ((::RPG::Client::UISkillIndexMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2363A5BDE91856D4_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void __PlaySkillReadyEffect_b__59_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9___PLAYSKILLREADYEFFECT_B__59_0_OFFSET))(this, a1, a2);
	}
};
