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

#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0x14B585F0)
#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0x14B583C0)
#define CLASS_1_843DD6330B22E422_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14B58820)
#define CLASS_1_843DD6330B22E422__CTOR_OFFSET UNITYSDK_OFFSET(0x14B582F0)

inline static constexpr unsigned int Class_1_843DD6330B22E422_TypeDefinitionIndex = 51951;

class Class_1_843DD6330B22E422 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Struct_2_EF7C37AF69DC7CE6>* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_1; // 0x18
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_2; // 0x20
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_3; // 0x28
	::Class_1_5E9C16BFAA602EE3* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_6; // 0x40
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_7; // 0x48
	::Struct_2_3A335394524C9E44 Field_1_8; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_9; // 0x108
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_10; // 0x110
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_11; // 0x118
	::RPG::GameCore::FixPoint Field_1_12; // 0x120
	::RPG::GameCore::FixPoint Field_1_13; // 0x128
	::RPG::GameCore::FixPoint Field_1_14; // 0x130
	::RPG::GameCore::FixPoint Field_1_15; // 0x138
	::RPG::GameCore::FixPoint Field_1_16; // 0x140
	::RPG::GameCore::FixPoint Field_1_17; // 0x148
	::RPG::GameCore::FixPoint Field_1_18; // 0x150
	::RPG::GameCore::FixPoint Field_1_19; // 0x158
	::RPG::GameCore::AbilityLinearProperty Field_1_20; // 0x160
	::RPG::GameCore::FixPoint Field_1_21; // 0x1A8
	::RPG::GameCore::AbilityLinearProperty Field_1_22; // 0x1B0
	::RPG::GameCore::FixPoint Field_1_23; // 0x1F8
	::RPG::GameCore::FixPoint Field_1_24; // 0x200
	::RPG::GameCore::FixPoint Field_1_25; // 0x208
	::RPG::GameCore::FixPoint Field_1_26; // 0x210
	::RPG::GameCore::FixPoint Field_1_27; // 0x218
	::RPG::GameCore::AttackDamageType Field_1_28; // 0x220
	::RPG::GameCore::FinalDamageFormulaType Field_1_29; // 0x224
	::RPG::GameCore::FixPoint Field_1_30; // 0x228
	::RPG::GameCore::FixPoint Field_1_31; // 0x230
	::RPG::GameCore::FixPoint Field_1_32; // 0x238
	::RPG::GameCore::FixPoint Field_1_33; // 0x240
	::RPG::GameCore::FixPoint Field_1_34; // 0x248
	::RPG::GameCore::FixPoint Field_1_35; // 0x250
	::RPG::GameCore::FixPoint Field_1_36; // 0x258
	::RPG::GameCore::FixPoint Field_1_37; // 0x260
	::RPG::GameCore::FixPoint Field_1_38; // 0x268
	::RPG::GameCore::FixPoint Field_1_39; // 0x270
	::RPG::GameCore::FixPoint Field_1_40; // 0x278
	::RPG::GameCore::FixPoint Field_1_41; // 0x280
	::RPG::GameCore::AbilityLinearProperty Field_1_42; // 0x288
	::RPG::GameCore::FixPoint Field_1_43; // 0x2D0
	::RPG::GameCore::FixPoint Field_1_44; // 0x2D8
	::RPG::GameCore::FixPoint Field_1_45; // 0x2E0
	::RPG::GameCore::FixPoint Field_1_46; // 0x2E8
	::RPG::GameCore::FixPoint Field_1_47; // 0x2F0
	::RPG::GameCore::FixPoint Field_1_48; // 0x2F8
	::Struct_2_B57FD4EDC70CAC4C Field_1_49; // 0x300
	::RPG::GameCore::FixPoint Field_1_50; // 0x388
	::RPG::GameCore::FixPoint Field_1_51; // 0x390
	::RPG::GameCore::FixPoint Field_1_52; // 0x398
	::RPG::GameCore::FixPoint Field_1_53; // 0x3A0
	::RPG::GameCore::FixPoint Field_1_54; // 0x3A8
	::RPG::GameCore::FixPoint Field_1_55; // 0x3B0
	::RPG::GameCore::FixPoint Field_1_56; // 0x3B8
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_57; // 0x3C0
	::RPG::GameCore::FixPoint Field_1_58; // 0x410
	::RPG::GameCore::FixPoint Field_1_59; // 0x418
	::RPG::GameCore::FixPoint Field_1_60; // 0x420
	::RPG::GameCore::FixPoint Field_1_61; // 0x428
	::RPG::GameCore::FixPoint Field_1_62; // 0x430
	::RPG::GameCore::FixPoint Field_1_63; // 0x438
	::RPG::GameCore::FixPoint Field_1_64; // 0x440
	::RPG::GameCore::FixPoint Field_1_65; // 0x448
	::RPG::GameCore::FixPoint Field_1_66; // 0x450
	::RPG::GameCore::FixPoint Field_1_67; // 0x458
	::RPG::GameCore::FixPoint Field_1_68; // 0x460
	::RPG::GameCore::FixPoint Field_1_69; // 0x468
	::RPG::GameCore::FixPoint Field_1_70; // 0x470
	::System::UInt32 Field_1_71; // 0x478
	::System::Boolean Field_1_72; // 0x47C
	::System::Boolean Field_1_73; // 0x47D
	::System::Boolean Field_1_74; // 0x47E
	::System::Boolean Field_1_75; // 0x47F
	::RPG::GameCore::FixPoint Field_1_76; // 0x480
	::RPG::GameCore::FixPoint Field_1_77; // 0x488
	::RPG::GameCore::FixPoint Field_1_78; // 0x490
	::RPG::GameCore::FixPoint Field_1_79; // 0x498
	::RPG::GameCore::FixPoint Field_1_80; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_81; // 0x4A8
	::RPG::GameCore::FixPoint Field_1_82; // 0x4B0
	::RPG::GameCore::FixPoint Field_1_83; // 0x4B8
	::RPG::GameCore::FixPoint Field_1_84; // 0x4C0
	::RPG::GameCore::FixPoint Field_1_85; // 0x4C8
	::RPG::GameCore::FixPoint Field_1_86; // 0x4D0
	::RPG::GameCore::FixPoint Field_1_87; // 0x4D8
	::RPG::GameCore::FixPoint Field_1_88; // 0x4E0
	::RPG::GameCore::FixPoint Field_1_89; // 0x4E8
	::RPG::GameCore::FixPoint Field_1_90; // 0x4F0
	::RPG::GameCore::FixPoint Field_1_91; // 0x4F8
	::RPG::GameCore::FixPoint Field_1_92; // 0x500
	::RPG::GameCore::FixPoint Field_1_93; // 0x508
	::RPG::GameCore::FixPoint Field_1_94; // 0x510
	::RPG::GameCore::FixPoint Field_1_95; // 0x518
	::RPG::GameCore::FixPoint Field_1_96; // 0x520
	::RPG::GameCore::FixPoint Field_1_97; // 0x528
	::RPG::GameCore::FixPoint Field_1_98; // 0x530
	::RPG::GameCore::FixPoint Field_1_99; // 0x538
	::RPG::GameCore::FixPoint Field_1_100; // 0x540
	::RPG::GameCore::FixPoint Field_1_101; // 0x548
	::RPG::GameCore::FixPoint Field_1_102; // 0x550
	::RPG::GameCore::FixPoint Field_1_103; // 0x558
	::RPG::GameCore::FixPoint Field_1_104; // 0x560
	::RPG::GameCore::FixPoint Field_1_105; // 0x568
	::RPG::GameCore::FixPoint Field_1_106; // 0x570
	::RPG::GameCore::FixPoint Field_1_107; // 0x578
	::System::Boolean Field_1_108; // 0x580
	::System::Boolean Field_1_109; // 0x581
	::System::Boolean Field_1_110; // 0x582
	::System::Boolean Field_1_111; // 0x583
	::RPG::GameCore::AttackType Field_1_112; // 0x584
	::RPG::GameCore::FixPoint Field_1_113; // 0x588
	::RPG::GameCore::FixPoint Field_1_114; // 0x590
	::RPG::GameCore::FixPoint Field_1_115; // 0x598
	::RPG::GameCore::FixPoint Field_1_116; // 0x5A0
	::RPG::GameCore::FixPoint Field_1_117; // 0x5A8
	::RPG::GameCore::FixPoint Field_1_118; // 0x5B0
	::System::Boolean Field_1_119; // 0x5B8
	::System::Boolean Field_1_120; // 0x5B9
	::System::Boolean Field_1_121; // 0x5BA
	::System::Boolean Field_1_122; // 0x5BB
	::System::UInt32 Field_1_123; // 0x5BC
	::RPG::GameCore::FixPoint Field_1_124; // 0x5C0
	::RPG::GameCore::SkillEffect Field_1_125; // 0x5C8
	::RPG::GameCore::AttackFormulaType Field_1_126; // 0x5CC
	::RPG::GameCore::FixPoint Field_1_127; // 0x5D0
	::System::Boolean Field_1_128; // 0x5D8
	::System::Boolean Field_1_129; // 0x5D9
	::System::Boolean Field_1_130; // 0x5DA
	::System::Boolean Field_1_131; // 0x5DB
	::RPG::GameCore::AttackFormulaType Field_1_132; // 0x5DC
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_133; // 0x5E0
	::RPG::GameCore::FixPoint Field_1_134; // 0x630
	::RPG::GameCore::FixPoint Field_1_135; // 0x638
	::RPG::GameCore::AttackDamageType Field_1_136; // 0x640
	::RPG::GameCore::DamageIntegerizeCategory Field_1_137; // 0x644
	::RPG::GameCore::FixPoint Field_1_138; // 0x648
	::RPG::GameCore::FixPoint Field_1_139; // 0x650
	::RPG::GameCore::FixPoint Field_1_140; // 0x658
	::RPG::GameCore::FixPoint Field_1_141; // 0x660
	::RPG::GameCore::FixPoint Field_1_142; // 0x668
	::RPG::GameCore::FixPoint Field_1_143; // 0x670
	::RPG::GameCore::FixPoint Field_1_144; // 0x678
	::RPG::GameCore::FixPoint Field_1_145; // 0x680
	::RPG::GameCore::FixPoint Field_1_146; // 0x688
	::System::Boolean Field_1_147; // 0x690
	::System::Boolean Field_1_148; // 0x691
	::System::Boolean Field_1_149; // 0x692
	::System::Boolean Field_1_150; // 0x693
	::RPG::GameCore::DamageBlockType Field_1_151; // 0x694
	::RPG::GameCore::FixPoint Field_1_152; // 0x698
	::RPG::GameCore::FixPoint Field_1_153; // 0x6A0
	::RPG::GameCore::FixPoint Field_1_154; // 0x6A8
	::RPG::GameCore::FixPoint Field_1_155; // 0x6B0
	::RPG::GameCore::AbilityLinearProperty Field_1_156; // 0x6B8
	::RPG::GameCore::FixPoint Field_1_157; // 0x700
	::RPG::GameCore::FixPoint Field_1_158; // 0x708
	::RPG::GameCore::FixPoint Field_1_159; // 0x710
	::RPG::GameCore::FixPoint Field_1_160; // 0x718
	::RPG::GameCore::FixPoint Field_1_161; // 0x720
	::RPG::GameCore::FixPoint Field_1_162; // 0x728

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
