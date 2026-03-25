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

#define CLASS_1_D1797279B49332E9_GET_ACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1194CD10)
#define CLASS_1_D1797279B49332E9_GET_ACTIVESKILLUIINDEX_OFFSET UNITYSDK_OFFSET(0x1194CD30)
#define CLASS_1_D1797279B49332E9_GET_CHARMLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x1194CD50)
#define CLASS_1_D1797279B49332E9_GET_SKILLLOCKDICT_OFFSET UNITYSDK_OFFSET(0x1194CE10)
#define CLASS_1_D1797279B49332E9_METHOD_1_00663474E94BD729_OFFSET UNITYSDK_OFFSET(0x11949850)
#define CLASS_1_D1797279B49332E9_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x119488F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_0292A026F6FEACFE_OFFSET UNITYSDK_OFFSET(0x11947D50)
#define CLASS_1_D1797279B49332E9_METHOD_1_04319991B7E26866_OFFSET UNITYSDK_OFFSET(0x11949990)
#define CLASS_1_D1797279B49332E9_METHOD_1_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0x1194BD50)
#define CLASS_1_D1797279B49332E9_METHOD_1_0C5935972D4E4937_OFFSET UNITYSDK_OFFSET(0x1194C4A0)
#define CLASS_1_D1797279B49332E9_METHOD_1_0E964C8FAE83AC84_OFFSET UNITYSDK_OFFSET(0x1194B730)
#define CLASS_1_D1797279B49332E9_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11947B50)
#define CLASS_1_D1797279B49332E9_METHOD_1_1441C65D1B81B844_OFFSET UNITYSDK_OFFSET(0x1194AD30)
#define CLASS_1_D1797279B49332E9_METHOD_1_1A23764A30FD7F35_OFFSET UNITYSDK_OFFSET(0x11947000)
#define CLASS_1_D1797279B49332E9_METHOD_1_1AB67458471FAC4D_OFFSET UNITYSDK_OFFSET(0x11944B80)
#define CLASS_1_D1797279B49332E9_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1194C420)
#define CLASS_1_D1797279B49332E9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x119459B0)
#define CLASS_1_D1797279B49332E9_METHOD_1_2363A5BDE91856D4_OFFSET UNITYSDK_OFFSET(0x1194A0D0)
#define CLASS_1_D1797279B49332E9_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x11926430)
#define CLASS_1_D1797279B49332E9_METHOD_1_25269843025B5C78_1_OFFSET UNITYSDK_OFFSET(0x1194A960)
#define CLASS_1_D1797279B49332E9_METHOD_1_25269843025B5C78_OFFSET UNITYSDK_OFFSET(0x1194A870)
#define CLASS_1_D1797279B49332E9_METHOD_1_28FBF172CB38F754_OFFSET UNITYSDK_OFFSET(0x119495B0)
#define CLASS_1_D1797279B49332E9_METHOD_1_2960FBD3FBA6C281_OFFSET UNITYSDK_OFFSET(0x11947200)
#define CLASS_1_D1797279B49332E9_METHOD_1_2BE94F95F56592B9_OFFSET UNITYSDK_OFFSET(0x11947510)
#define CLASS_1_D1797279B49332E9_METHOD_1_2DBEC89DCEB7E244_OFFSET UNITYSDK_OFFSET(0x11946F90)
#define CLASS_1_D1797279B49332E9_METHOD_1_2E651A9A002E41E0_OFFSET UNITYSDK_OFFSET(0x11947310)
#define CLASS_1_D1797279B49332E9_METHOD_1_33EDCF6E6E67039A_OFFSET UNITYSDK_OFFSET(0x119475B0)
#define CLASS_1_D1797279B49332E9_METHOD_1_352CF35C0B9926B7_OFFSET UNITYSDK_OFFSET(0x11946E20)
#define CLASS_1_D1797279B49332E9_METHOD_1_3CEF7AA74427613D_OFFSET UNITYSDK_OFFSET(0x11945AA0)
#define CLASS_1_D1797279B49332E9_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x11944C80)
#define CLASS_1_D1797279B49332E9_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1194B1F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11944530)
#define CLASS_1_D1797279B49332E9_METHOD_1_46019E40A12B5629_1_OFFSET UNITYSDK_OFFSET(0x1194CD80)
#define CLASS_1_D1797279B49332E9_METHOD_1_46019E40A12B5629_OFFSET UNITYSDK_OFFSET(0x1194CD70)
#define CLASS_1_D1797279B49332E9_METHOD_1_4D9CA32BE6EF9005_OFFSET UNITYSDK_OFFSET(0x1194CD90)
#define CLASS_1_D1797279B49332E9_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x119479F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_57E68A6EEFF1F8DB_OFFSET UNITYSDK_OFFSET(0x1194CE50)
#define CLASS_1_D1797279B49332E9_METHOD_1_61EC2AC0BD93363E_1_OFFSET UNITYSDK_OFFSET(0x1194C280)
#define CLASS_1_D1797279B49332E9_METHOD_1_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x1194C150)
#define CLASS_1_D1797279B49332E9_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x119447F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_7081B1F30C7FBF01_OFFSET UNITYSDK_OFFSET(0x11949E00)
#define CLASS_1_D1797279B49332E9_METHOD_1_7D04778C83D7751F_OFFSET UNITYSDK_OFFSET(0x1194AA50)
#define CLASS_1_D1797279B49332E9_METHOD_1_7D0AE85F0BBFE5E5_OFFSET UNITYSDK_OFFSET(0x11949F90)
#define CLASS_1_D1797279B49332E9_METHOD_1_7F433E7183ECA5FF_OFFSET UNITYSDK_OFFSET(0x1194C810)
#define CLASS_1_D1797279B49332E9_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x11949340)
#define CLASS_1_D1797279B49332E9_METHOD_1_82356BE9CCCD3114_OFFSET UNITYSDK_OFFSET(0x1194CE40)
#define CLASS_1_D1797279B49332E9_METHOD_1_8583C5AC29198FC4_OFFSET UNITYSDK_OFFSET(0x1194C620)
#define CLASS_1_D1797279B49332E9_METHOD_1_8768A5F3937098C9_OFFSET UNITYSDK_OFFSET(0x11947C90)
#define CLASS_1_D1797279B49332E9_METHOD_1_8BDD6EADC86BCE10_OFFSET UNITYSDK_OFFSET(0x11944440)
#define CLASS_1_D1797279B49332E9_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x1194ABC0)
#define CLASS_1_D1797279B49332E9_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x11948590)
#define CLASS_1_D1797279B49332E9_METHOD_1_90973941CA345015_OFFSET UNITYSDK_OFFSET(0x1194A270)
#define CLASS_1_D1797279B49332E9_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11947190)
#define CLASS_1_D1797279B49332E9_METHOD_1_969E51961905AA15_OFFSET UNITYSDK_OFFSET(0x1194C9C0)
#define CLASS_1_D1797279B49332E9_METHOD_1_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0x1194BCB0)
#define CLASS_1_D1797279B49332E9_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x1194B490)
#define CLASS_1_D1797279B49332E9_METHOD_1_9CFB5559B10F6907_OFFSET UNITYSDK_OFFSET(0x11945380)
#define CLASS_1_D1797279B49332E9_METHOD_1_A0B80C0C6EB6D23B_OFFSET UNITYSDK_OFFSET(0x11947CE0)
#define CLASS_1_D1797279B49332E9_METHOD_1_AC56AECB1D6A031B_OFFSET UNITYSDK_OFFSET(0x11947490)
#define CLASS_1_D1797279B49332E9_METHOD_1_AC57C1BD24049FD7_OFFSET UNITYSDK_OFFSET(0x11946570)
#define CLASS_1_D1797279B49332E9_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x119492C0)
#define CLASS_1_D1797279B49332E9_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1194ACB0)
#define CLASS_1_D1797279B49332E9_METHOD_1_B2782F70F719B163_OFFSET UNITYSDK_OFFSET(0x11949B40)
#define CLASS_1_D1797279B49332E9_METHOD_1_B368EE71C7719F8E_OFFSET UNITYSDK_OFFSET(0x11926490)
#define CLASS_1_D1797279B49332E9_METHOD_1_B666F0A2B7130916_OFFSET UNITYSDK_OFFSET(0x119465F0)
#define CLASS_1_D1797279B49332E9_METHOD_1_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0x1194B540)
#define CLASS_1_D1797279B49332E9_METHOD_1_BB7FBE4485450619_OFFSET UNITYSDK_OFFSET(0x11946350)
#define CLASS_1_D1797279B49332E9_METHOD_1_BC9F10461DC03B21_OFFSET UNITYSDK_OFFSET(0x1194C890)
#define CLASS_1_D1797279B49332E9_METHOD_1_C9E304B8455D5FD7_OFFSET UNITYSDK_OFFSET(0x119478B0)
#define CLASS_1_D1797279B49332E9_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11946300)
#define CLASS_1_D1797279B49332E9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x119445B0)
#define CLASS_1_D1797279B49332E9_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x1194B360)
#define CLASS_1_D1797279B49332E9_METHOD_1_D25CFA28E8C200FE_OFFSET UNITYSDK_OFFSET(0x119449A0)
#define CLASS_1_D1797279B49332E9_METHOD_1_D5D84EA9850F0DB7_OFFSET UNITYSDK_OFFSET(0x11946710)
#define CLASS_1_D1797279B49332E9_METHOD_1_E39E5E6030EBFF72_OFFSET UNITYSDK_OFFSET(0x119480C0)
#define CLASS_1_D1797279B49332E9_METHOD_1_E8A165BEBD75409B_OFFSET UNITYSDK_OFFSET(0x1194B590)
#define CLASS_1_D1797279B49332E9_METHOD_1_EF55C3D1E6114769_OFFSET UNITYSDK_OFFSET(0x11947260)
#define CLASS_1_D1797279B49332E9_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1194CE60)
#define CLASS_1_D1797279B49332E9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1194CE30)
#define CLASS_1_D1797279B49332E9_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x11945400)
#define CLASS_1_D1797279B49332E9_METHOD_1_F1D965EAC02E7D39_OFFSET UNITYSDK_OFFSET(0x11945810)
#define CLASS_1_D1797279B49332E9_METHOD_1_F2E045B3786178E0_OFFSET UNITYSDK_OFFSET(0x11944930)
#define CLASS_1_D1797279B49332E9_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x11948E30)
#define CLASS_1_D1797279B49332E9_METHOD_1_FFB496CF93197B70_OFFSET UNITYSDK_OFFSET(0x11945D30)
#define CLASS_1_D1797279B49332E9_SET_ACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1194CD20)
#define CLASS_1_D1797279B49332E9_SET_ACTIVESKILLUIINDEX_OFFSET UNITYSDK_OFFSET(0x1194CD40)
#define CLASS_1_D1797279B49332E9_SET_CHARMLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x1194CD60)
#define CLASS_1_D1797279B49332E9_SET_SKILLLOCKDICT_OFFSET UNITYSDK_OFFSET(0x1194CE20)
#define CLASS_1_D1797279B49332E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1194CE70)
#define CLASS_1_D1797279B49332E9___PLAYSKILLREADYEFFECT_B__59_0_OFFSET UNITYSDK_OFFSET(0x1194CFA0)

inline static constexpr unsigned int Class_1_D1797279B49332E9_TypeDefinitionIndex = 58969;

class Class_1_D1797279B49332E9 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_13; // 0x0
	// static const ::System::Single Field_1_14; // 0x0
	// static const ::System::Single Field_1_38; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_C6DB1F90A2BB8B39_1>* Field_1_12; // 0x10
	::RPG::GameCore::CharacterDataComponent* Field_1_9; // 0x18
	::RPG::Client::MonoEffect* Field_1_23; // 0x20
	::Class_2_1DBE0E1023AFDBC5* Field_1_10; // 0x28
	::System::String* Field_1_26; // 0x30
	::RPG::GameCore::BattleInstance* Field_1_5; // 0x38
	::RPG::GameCore::SkillData* Field_1_15; // 0x40
	::RPG::GameCore::SkillCharacterComponent* Field_1_8; // 0x48
	::RPG::GameCore::SkillData* Field_1_17; // 0x50
	::Class_2_1DBE0E1023AFDBC5* Field_1_11; // 0x58
	::RPG::GameCore::GameEntity* Field_1_25; // 0x60
	::RPG::GameCore::SkillData* Field_1_16; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>* _SkillLockDict_k__BackingField; // 0x70
	::RPG::GameCore::EventManager* Field_1_6; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_37; // 0x80
	::RPG::GameCore::LevelUIComponent* Field_1_4; // 0x88
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_28; // 0x90
	::System::String* Field_1_22; // 0x98
	::RPG::GameCore::GameEntity* Field_1_7; // 0xA0
	::System::Single Field_1_29; // 0xA8
	::System::Single Field_1_31; // 0xAC
	::RPG::Client::UISkillIndexMask Field_1_35; // 0xB0
	::System::Single Field_1_33; // 0xB4
	::System::Int32 _ActiveSkillIndex_k__BackingField; // 0xB8
	::System::Boolean Field_1_32; // 0xBC
	::System::Boolean Field_1_34; // 0xBD
	::System::Boolean Field_1_36; // 0xBE
	::System::Boolean _CharmLockTarget_k__BackingField; // 0xBF
	::System::Int32 Field_1_19; // 0xC0
	::RPG::Client::UISkillIndex _ActiveSkillUIIndex_k__BackingField; // 0xC4
	::System::Single Field_1_27; // 0xC8
	::RPG::Client::UISkillIndex Field_1_30; // 0xCC
	::RPG::Client::UISkillIndex Field_1_18; // 0xD0
	::System::UInt32 Field_1_24; // 0xD4
	::System::Single Field_1_21; // 0xD8
	::System::Single Field_1_20; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8BDD6EADC86BCE10(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_8BDD6EADC86BCE10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_F2E045B3786178E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F2E045B3786178E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CFB5559B10F6907(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_9CFB5559B10F6907_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_BB7FBE4485450619(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_BB7FBE4485450619_OFFSET))(this, a1);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_1_352CF35C0B9926B7(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_352CF35C0B9926B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A23764A30FD7F35(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1A23764A30FD7F35_OFFSET))(this, a1);
	}

	::System::Void Method_1_2960FBD3FBA6C281(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2960FBD3FBA6C281_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF55C3D1E6114769(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_EF55C3D1E6114769_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2BE94F95F56592B9(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2BE94F95F56592B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AC56AECB1D6A031B(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_AC56AECB1D6A031B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33EDCF6E6E67039A(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_33EDCF6E6E67039A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_D5D84EA9850F0DB7(::RPG::Client::UISkillIndex a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_D5D84EA9850F0DB7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
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

	::System::Boolean Method_1_B2782F70F719B163()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B2782F70F719B163_OFFSET))(this);
	}

	::System::Boolean Method_1_F1D965EAC02E7D39(::RPG::Client::UISkillIndex a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::TextID& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::GameCore::GameEntity*, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F1D965EAC02E7D39_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_7D0AE85F0BBFE5E5(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_7D0AE85F0BBFE5E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2DBEC89DCEB7E244(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_2DBEC89DCEB7E244_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3CEF7AA74427613D(::RPG::GameCore::SkillInputType a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillInputType, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_3CEF7AA74427613D_OFFSET))(this, a1, a2);
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

	::RPG::GameCore::GameEntity* Method_1_7D04778C83D7751F()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_7D04778C83D7751F_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_AC57C1BD24049FD7(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_AC57C1BD24049FD7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_1441C65D1B81B844(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1441C65D1B81B844_OFFSET))(this, a1);
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

	::System::Void Method_1_E8A165BEBD75409B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_E8A165BEBD75409B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E964C8FAE83AC84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_0E964C8FAE83AC84_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_96BDC4B57CCFE000_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_1_61EC2AC0BD93363E_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_61EC2AC0BD93363E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_1AB67458471FAC4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1AB67458471FAC4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::Class_1_152140BAFD2DB102* Method_1_28FBF172CB38F754(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::String* a9)
	{
		return ((::Class_1_152140BAFD2DB102*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_28FBF172CB38F754_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_D25CFA28E8C200FE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_D25CFA28E8C200FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_FFB496CF93197B70(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_FFB496CF93197B70_OFFSET))(this, a1);
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

	::System::Void Method_1_A0B80C0C6EB6D23B(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_A0B80C0C6EB6D23B_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_E39E5E6030EBFF72(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_E39E5E6030EBFF72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Method_1_8583C5AC29198FC4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_8583C5AC29198FC4_OFFSET))(this, a1);
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

	::System::Void Method_1_969E51961905AA15(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ControlSkillType a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlSkillType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_969E51961905AA15_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::RPG::MVector3> Method_1_BC9F10461DC03B21(::RPG::GameCore::VCameraConfig* a1)
	{
		return ((::System::Nullable_1<::RPG::MVector3>(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_BC9F10461DC03B21_OFFSET))(this, a1);
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

	::RPG::GameCore::ControlSkillType Method_1_7081B1F30C7FBF01(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_7081B1F30C7FBF01_OFFSET))(this, a1);
	}

	::System::Int32 get_ActiveSkillIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_GET_ACTIVESKILLINDEX_OFFSET))(this);
	}

	::System::Void set_ActiveSkillIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_SET_ACTIVESKILLINDEX_OFFSET))(this, value);
	}

	::RPG::Client::UISkillIndex get_ActiveSkillUIIndex()
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_GET_ACTIVESKILLUIINDEX_OFFSET))(this);
	}

	::System::Void set_ActiveSkillUIIndex(::RPG::Client::UISkillIndex value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_SET_ACTIVESKILLUIINDEX_OFFSET))(this, value);
	}

	::System::Boolean get_CharmLockTarget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_GET_CHARMLOCKTARGET_OFFSET))(this);
	}

	::System::Void set_CharmLockTarget(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_SET_CHARMLOCKTARGET_OFFSET))(this, value);
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

	::System::Void set_SkillLockDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_SET_SKILLLOCKDICT_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
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

	::System::Void Method_1_0C5935972D4E4937(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9_METHOD_1_0C5935972D4E4937_OFFSET))(this, a1);
	}

	::System::Void __PlaySkillReadyEffect_b__59_0(::RPG::Client::MonoEffect* pEffectObject, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_D1797279B49332E9___PLAYSKILLREADYEFFECT_B__59_0_OFFSET))(this, pEffectObject, extraParams);
	}
};
