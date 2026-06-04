#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
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

#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0xA8C83A0)
#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0xA8C8170)
#define CLASS_1_843DD6330B22E422_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA8C85D0)
#define CLASS_1_843DD6330B22E422__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C8090)
#define CLASS_1_843DD6330B22E422___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA8C8EA0)

inline static constexpr unsigned int Class_1_843DD6330B22E422_TypeDefinitionIndex = 50866;

class Class_1_843DD6330B22E422 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_0; // 0x10
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_1; // 0x18
	::Struct_2_3A335394524C9E44 Field_1_2; // 0x20
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_3; // 0xD8
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_4; // 0xE0
	::System::String* Field_1_5; // 0xE8
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_6; // 0xF0
	::Class_1_5E9C16BFAA602EE3* Field_1_7; // 0xF8
	::RPG::PoolList_1<::Struct_2_EF7C37AF69DC7CE6>* Field_1_8; // 0x100
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_9; // 0x108
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_10; // 0x110
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_11; // 0x118
	::RPG::GameCore::FixPoint Field_1_12; // 0x120
	::RPG::GameCore::FixPoint Field_1_13; // 0x128
	::RPG::GameCore::FixPoint Field_1_14; // 0x130
	::RPG::GameCore::FixPoint Field_1_15; // 0x138
	::RPG::GameCore::FixPoint Field_1_16; // 0x140
	::RPG::GameCore::FixPoint Field_1_17; // 0x148
	::RPG::GameCore::AttackDamageType Field_1_18; // 0x150
	::RPG::GameCore::AttackFormulaType Field_1_19; // 0x154
	::RPG::GameCore::FixPoint Field_1_20; // 0x158
	::RPG::GameCore::FixPoint Field_1_21; // 0x160
	::RPG::GameCore::FixPoint Field_1_22; // 0x168
	::RPG::GameCore::FixPoint Field_1_23; // 0x170
	::RPG::GameCore::FixPoint Field_1_24; // 0x178
	::RPG::GameCore::FixPoint Field_1_25; // 0x180
	::RPG::GameCore::FixPoint Field_1_26; // 0x188
	::RPG::GameCore::FixPoint Field_1_27; // 0x190
	::RPG::GameCore::FixPoint Field_1_28; // 0x198
	::RPG::GameCore::FixPoint Field_1_29; // 0x1A0
	::RPG::GameCore::FixPoint Field_1_30; // 0x1A8
	::RPG::GameCore::FixPoint Field_1_31; // 0x1B0
	::RPG::GameCore::FixPoint Field_1_32; // 0x1B8
	::RPG::GameCore::AbilityLinearProperty Field_1_33; // 0x1C0
	::RPG::GameCore::FixPoint Field_1_34; // 0x208
	::RPG::GameCore::FixPoint Field_1_35; // 0x210
	::RPG::GameCore::FixPoint Field_1_36; // 0x218
	::RPG::GameCore::AttackDamageType Field_1_37; // 0x220
	::System::Boolean Field_1_38; // 0x224
	::System::Boolean Field_1_39; // 0x225
	::System::Boolean Field_1_40; // 0x226
	::System::Boolean Field_1_41; // 0x227
	::RPG::GameCore::FixPoint Field_1_42; // 0x228
	::RPG::GameCore::FixPoint Field_1_43; // 0x230
	::System::Boolean Field_1_44; // 0x238
	::System::Boolean Field_1_45; // 0x239
	::System::Boolean Field_1_46; // 0x23A
	::System::Boolean Field_1_47; // 0x23B
	::System::Boolean Field_1_48; // 0x23C
	::System::Boolean Field_1_49; // 0x23D
	::System::Boolean Field_1_50; // 0x23E
	::System::Boolean Field_1_51; // 0x23F
	::RPG::GameCore::FixPoint Field_1_52; // 0x240
	::RPG::GameCore::FixPoint Field_1_53; // 0x248
	::RPG::GameCore::FixPoint Field_1_54; // 0x250
	::RPG::GameCore::FixPoint Field_1_55; // 0x258
	::RPG::GameCore::FixPoint Field_1_56; // 0x260
	::RPG::GameCore::FixPoint Field_1_57; // 0x268
	::RPG::GameCore::FixPoint Field_1_58; // 0x270
	::RPG::GameCore::FixPoint Field_1_59; // 0x278
	::RPG::GameCore::FixPoint Field_1_60; // 0x280
	::RPG::GameCore::FixPoint Field_1_61; // 0x288
	::RPG::GameCore::FixPoint Field_1_62; // 0x290
	::RPG::GameCore::FixPoint Field_1_63; // 0x298
	::RPG::GameCore::FixPoint Field_1_64; // 0x2A0
	::RPG::GameCore::FixPoint Field_1_65; // 0x2A8
	::RPG::GameCore::FixPoint Field_1_66; // 0x2B0
	::RPG::GameCore::FixPoint Field_1_67; // 0x2B8
	::RPG::GameCore::FixPoint Field_1_68; // 0x2C0
	::RPG::GameCore::FixPoint Field_1_69; // 0x2C8
	::RPG::GameCore::FixPoint Field_1_70; // 0x2D0
	::RPG::GameCore::FixPoint Field_1_71; // 0x2D8
	::Struct_2_B57FD4EDC70CAC4C Field_1_72; // 0x2E0
	::RPG::GameCore::FixPoint Field_1_73; // 0x360
	::RPG::GameCore::FixPoint Field_1_74; // 0x368
	::RPG::GameCore::FixPoint Field_1_75; // 0x370
	::RPG::GameCore::FixPoint Field_1_76; // 0x378
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_77; // 0x380
	::RPG::GameCore::FixPoint Field_1_78; // 0x3D0
	::RPG::GameCore::FixPoint Field_1_79; // 0x3D8
	::RPG::GameCore::FixPoint Field_1_80; // 0x3E0
	::RPG::GameCore::FixPoint Field_1_81; // 0x3E8
	::RPG::GameCore::FixPoint Field_1_82; // 0x3F0
	::RPG::GameCore::FixPoint Field_1_83; // 0x3F8
	::RPG::GameCore::FixPoint Field_1_84; // 0x400
	::RPG::GameCore::FixPoint Field_1_85; // 0x408
	::RPG::GameCore::FixPoint Field_1_86; // 0x410
	::RPG::GameCore::FixPoint Field_1_87; // 0x418
	::RPG::GameCore::FixPoint Field_1_88; // 0x420
	::RPG::GameCore::AbilityLinearProperty Field_1_89; // 0x428
	::RPG::GameCore::FixPoint Field_1_90; // 0x470
	::RPG::GameCore::FixPoint Field_1_91; // 0x478
	::RPG::GameCore::FixPoint Field_1_92; // 0x480
	::RPG::GameCore::FixPoint Field_1_93; // 0x488
	::RPG::GameCore::FixPoint Field_1_94; // 0x490
	::RPG::GameCore::FixPoint Field_1_95; // 0x498
	::RPG::GameCore::FixPoint Field_1_96; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_97; // 0x4A8
	::RPG::GameCore::FixPoint Field_1_98; // 0x4B0
	::RPG::GameCore::FixPoint Field_1_99; // 0x4B8
	::RPG::GameCore::FixPoint Field_1_100; // 0x4C0
	::RPG::GameCore::FixPoint Field_1_101; // 0x4C8
	::RPG::GameCore::FixPoint Field_1_102; // 0x4D0
	::RPG::GameCore::FixPoint Field_1_103; // 0x4D8
	::RPG::GameCore::FixPoint Field_1_104; // 0x4E0
	::RPG::GameCore::FinalDamageFormulaType Field_1_105; // 0x4E8
	::RPG::GameCore::SkillEffect Field_1_106; // 0x4EC
	::RPG::GameCore::FixPoint Field_1_107; // 0x4F0
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_108; // 0x4F8
	::RPG::GameCore::AbilityLinearProperty Field_1_109; // 0x548
	::RPG::GameCore::FixPoint Field_1_110; // 0x590
	::RPG::GameCore::AttackType Field_1_111; // 0x598
	::RPG::GameCore::FixPoint Field_1_112; // 0x5A0
	::RPG::GameCore::FixPoint Field_1_113; // 0x5A8
	::RPG::GameCore::FixPoint Field_1_114; // 0x5B0
	::RPG::GameCore::DamageBlockType Field_1_115; // 0x5B8
	::System::Boolean Field_1_116; // 0x5BC
	::System::Boolean Field_1_117; // 0x5BD
	::System::Boolean Field_1_118; // 0x5BE
	::System::Boolean Field_1_119; // 0x5BF
	::RPG::GameCore::FixPoint Field_1_120; // 0x5C0
	::RPG::GameCore::FixPoint Field_1_121; // 0x5C8
	::RPG::GameCore::FixPoint Field_1_122; // 0x5D0
	::RPG::GameCore::FixPoint Field_1_123; // 0x5D8
	::RPG::GameCore::AbilityLinearProperty Field_1_124; // 0x5E0
	::RPG::GameCore::FixPoint Field_1_125; // 0x628
	::System::UInt32 Field_1_126; // 0x630
	::System::Boolean Field_1_127; // 0x634
	::System::Boolean Field_1_128; // 0x635
	::System::Boolean Field_1_129; // 0x636
	::System::Boolean Field_1_130; // 0x637
	::RPG::GameCore::FixPoint Field_1_131; // 0x638
	::RPG::GameCore::FixPoint Field_1_132; // 0x640
	::RPG::GameCore::FixPoint Field_1_133; // 0x648
	::RPG::GameCore::FixPoint Field_1_134; // 0x650
	::RPG::GameCore::FixPoint Field_1_135; // 0x658
	::RPG::GameCore::FixPoint Field_1_136; // 0x660
	::RPG::GameCore::FixPoint Field_1_137; // 0x668
	::RPG::GameCore::FixPoint Field_1_138; // 0x670
	::RPG::GameCore::FixPoint Field_1_139; // 0x678
	::RPG::GameCore::FixPoint Field_1_140; // 0x680
	::RPG::GameCore::FixPoint Field_1_141; // 0x688
	::RPG::GameCore::FixPoint Field_1_142; // 0x690
	::RPG::GameCore::AttackFormulaType Field_1_143; // 0x698
	::System::UInt32 Field_1_144; // 0x69C
	::RPG::GameCore::FixPoint Field_1_145; // 0x6A0
	::RPG::GameCore::FixPoint Field_1_146; // 0x6A8
	::RPG::GameCore::FixPoint Field_1_147; // 0x6B0
	::RPG::GameCore::FixPoint Field_1_148; // 0x6B8
	::RPG::GameCore::FixPoint Field_1_149; // 0x6C0
	::RPG::GameCore::FixPoint Field_1_150; // 0x6C8
	::RPG::GameCore::FixPoint Field_1_151; // 0x6D0
	::RPG::GameCore::FixPoint Field_1_152; // 0x6D8
	::RPG::GameCore::FixPoint Field_1_153; // 0x6E0
	::RPG::GameCore::FixPoint Field_1_154; // 0x6E8
	::RPG::GameCore::FixPoint Field_1_155; // 0x6F0
	::RPG::GameCore::FixPoint Field_1_156; // 0x6F8
	::RPG::GameCore::FixPoint Field_1_157; // 0x700
	::RPG::GameCore::FixPoint Field_1_158; // 0x708
	::RPG::GameCore::FixPoint Field_1_159; // 0x710
	::RPG::GameCore::FixPoint Field_1_160; // 0x718
	::RPG::GameCore::FixPoint Field_1_161; // 0x720

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

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
