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
#include "unitysdk/System/Object.h"

class Class_1_09994FA7935E2E36;
class Class_1_56A1684BE394769D;
class Class_1_5E9C16BFAA602EE3;
class Class_2_291F7DA21A504FC4;
class Class_3_BB8B7764D3497776;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0x1923ECE0)
#define CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0x1923EAB0)
#define CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1923EF10)
#define CLASS_1_70CCABA9DB985F52__CTOR_OFFSET UNITYSDK_OFFSET(0x1923E980)

inline static constexpr unsigned int Class_1_70CCABA9DB985F52_TypeDefinitionIndex = 51379;

class Class_1_70CCABA9DB985F52 : public ::System::Object
{
public:
	::Class_2_291F7DA21A504FC4* Field_1_0; // 0x10
	::Struct_2_3A335394524C9E44 Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_2; // 0xD0
	::System::String* Field_1_3; // 0xD8
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_4; // 0xE0
	::Class_1_56A1684BE394769D* Field_1_5; // 0xE8
	::Class_3_BB8B7764D3497776* Field_1_6; // 0xF0
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_7; // 0xF8
	::Class_1_5E9C16BFAA602EE3* Field_1_8; // 0x100
	::Class_3_BB8B7764D3497776* Field_1_9; // 0x108
	::Class_3_BB8B7764D3497776* Field_1_10; // 0x110
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_11; // 0x118
	::RPG::GameCore::FixPoint Field_1_12; // 0x120
	::RPG::GameCore::AbilityLinearProperty Field_1_13; // 0x128
	::RPG::GameCore::FixPoint Field_1_14; // 0x170
	::RPG::GameCore::FixPoint Field_1_15; // 0x178
	::RPG::GameCore::FixPoint Field_1_16; // 0x180
	::RPG::GameCore::FixPoint Field_1_17; // 0x188
	::RPG::GameCore::FixPoint Field_1_18; // 0x190
	::RPG::GameCore::FixPoint Field_1_19; // 0x198
	::RPG::GameCore::FixPoint Field_1_20; // 0x1A0
	::RPG::GameCore::FixPoint Field_1_21; // 0x1A8
	::RPG::GameCore::FixPoint Field_1_22; // 0x1B0
	::RPG::GameCore::FixPoint Field_1_23; // 0x1B8
	::RPG::GameCore::FixPoint Field_1_24; // 0x1C0
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_25; // 0x1C8
	::RPG::GameCore::FixPoint Field_1_26; // 0x218
	::RPG::GameCore::FixPoint Field_1_27; // 0x220
	::RPG::GameCore::FixPoint Field_1_28; // 0x228
	::RPG::GameCore::FixPoint Field_1_29; // 0x230
	::RPG::GameCore::FixPoint Field_1_30; // 0x238
	::RPG::GameCore::FixPoint Field_1_31; // 0x240
	::RPG::GameCore::FixPoint Field_1_32; // 0x248
	::RPG::GameCore::FixPoint Field_1_33; // 0x250
	::Struct_2_B57FD4EDC70CAC4C Field_1_34; // 0x258
	::RPG::GameCore::FixPoint Field_1_35; // 0x2E0
	::RPG::GameCore::FixPoint Field_1_36; // 0x2E8
	::RPG::GameCore::FixPoint Field_1_37; // 0x2F0
	::RPG::GameCore::FixPoint Field_1_38; // 0x2F8
	::RPG::GameCore::FixPoint Field_1_39; // 0x300
	::RPG::GameCore::FixPoint Field_1_40; // 0x308
	::RPG::GameCore::AbilityLinearProperty Field_1_41; // 0x310
	::RPG::GameCore::FixPoint Field_1_42; // 0x358
	::RPG::GameCore::FixPoint Field_1_43; // 0x360
	::RPG::GameCore::FixPoint Field_1_44; // 0x368
	::RPG::GameCore::FixPoint Field_1_45; // 0x370
	::RPG::GameCore::FixPoint Field_1_46; // 0x378
	::RPG::GameCore::FixPoint Field_1_47; // 0x380
	::RPG::GameCore::FixPoint Field_1_48; // 0x388
	::RPG::GameCore::FixPoint Field_1_49; // 0x390
	::RPG::GameCore::FixPoint Field_1_50; // 0x398
	::RPG::GameCore::FixPoint Field_1_51; // 0x3A0
	::RPG::GameCore::FixPoint Field_1_52; // 0x3A8
	::RPG::GameCore::FixPoint Field_1_53; // 0x3B0
	::RPG::GameCore::FixPoint Field_1_54; // 0x3B8
	::RPG::GameCore::FixPoint Field_1_55; // 0x3C0
	::RPG::GameCore::FixPoint Field_1_56; // 0x3C8
	::RPG::GameCore::FixPoint Field_1_57; // 0x3D0
	::RPG::GameCore::FixPoint Field_1_58; // 0x3D8
	::RPG::GameCore::FixPoint Field_1_59; // 0x3E0
	::System::Boolean Field_1_60; // 0x3E8
	::System::Boolean Field_1_61; // 0x3E9
	::System::Boolean Field_1_62; // 0x3EA
	::System::Boolean Field_1_63; // 0x3EB
	::RPG::GameCore::SkillEffect Field_1_64; // 0x3EC
	::RPG::GameCore::FixPoint Field_1_65; // 0x3F0
	::RPG::GameCore::FixPoint Field_1_66; // 0x3F8
	::RPG::GameCore::FixPoint Field_1_67; // 0x400
	::RPG::GameCore::FixPoint Field_1_68; // 0x408
	::RPG::GameCore::FixPoint Field_1_69; // 0x410
	::RPG::GameCore::FixPoint Field_1_70; // 0x418
	::RPG::GameCore::FixPoint Field_1_71; // 0x420
	::RPG::GameCore::FixPoint Field_1_72; // 0x428
	::RPG::GameCore::FixPoint Field_1_73; // 0x430
	::RPG::GameCore::FixPoint Field_1_74; // 0x438
	::RPG::GameCore::FixPoint Field_1_75; // 0x440
	::RPG::GameCore::AttackType Field_1_76; // 0x448
	::RPG::GameCore::AttackFormulaType Field_1_77; // 0x44C
	::RPG::GameCore::FixPoint Field_1_78; // 0x450
	::RPG::GameCore::FixPoint Field_1_79; // 0x458
	::System::UInt32 Field_1_80; // 0x460
	::RPG::GameCore::AttackDamageType Field_1_81; // 0x464
	::RPG::GameCore::FixPoint Field_1_82; // 0x468
	::RPG::GameCore::FixPoint Field_1_83; // 0x470
	::RPG::GameCore::FixPoint Field_1_84; // 0x478
	::RPG::GameCore::FixPoint Field_1_85; // 0x480
	::RPG::GameCore::FixPoint Field_1_86; // 0x488
	::RPG::GameCore::FixPoint Field_1_87; // 0x490
	::RPG::GameCore::AttackFormulaType Field_1_88; // 0x498
	::System::UInt32 Field_1_89; // 0x49C
	::RPG::GameCore::FixPoint Field_1_90; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_91; // 0x4A8
	::RPG::GameCore::FixPoint Field_1_92; // 0x4B0
	::RPG::GameCore::FinalDamageFormulaType Field_1_93; // 0x4B8
	::RPG::GameCore::DamageBlockType Field_1_94; // 0x4BC
	::RPG::GameCore::FixPoint Field_1_95; // 0x4C0
	::RPG::GameCore::FixPoint Field_1_96; // 0x4C8
	::RPG::GameCore::FixPoint Field_1_97; // 0x4D0
	::RPG::GameCore::FixPoint Field_1_98; // 0x4D8
	::RPG::GameCore::FixPoint Field_1_99; // 0x4E0
	::RPG::GameCore::FixPoint Field_1_100; // 0x4E8
	::RPG::GameCore::FixPoint Field_1_101; // 0x4F0
	::RPG::GameCore::AbilityLinearProperty Field_1_102; // 0x4F8
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_103; // 0x540
	::RPG::GameCore::FixPoint Field_1_104; // 0x590
	::RPG::GameCore::AttackDamageType Field_1_105; // 0x598
	::System::Boolean Field_1_106; // 0x59C
	::System::Boolean Field_1_107; // 0x59D
	::System::Boolean Field_1_108; // 0x59E
	::System::Boolean Field_1_109; // 0x59F
	::RPG::GameCore::FixPoint Field_1_110; // 0x5A0
	::RPG::GameCore::FixPoint Field_1_111; // 0x5A8
	::RPG::GameCore::FixPoint Field_1_112; // 0x5B0
	::RPG::GameCore::AbilityLinearProperty Field_1_113; // 0x5B8
	::RPG::GameCore::FixPoint Field_1_114; // 0x600
	::RPG::GameCore::FixPoint Field_1_115; // 0x608
	::RPG::GameCore::FixPoint Field_1_116; // 0x610
	::RPG::GameCore::FixPoint Field_1_117; // 0x618
	::RPG::GameCore::FixPoint Field_1_118; // 0x620
	::RPG::GameCore::FixPoint Field_1_119; // 0x628
	::RPG::GameCore::FixPoint Field_1_120; // 0x630
	::RPG::GameCore::FixPoint Field_1_121; // 0x638
	::RPG::GameCore::FixPoint Field_1_122; // 0x640
	::System::Boolean Field_1_123; // 0x648
	::System::Boolean Field_1_124; // 0x649
	::System::Boolean Field_1_125; // 0x64A
	::System::Boolean Field_1_126; // 0x64B
	::System::Boolean Field_1_127; // 0x64C
	::System::Boolean Field_1_128; // 0x64D
	::System::Boolean Field_1_129; // 0x64E
	::System::Boolean Field_1_130; // 0x64F
	::RPG::GameCore::FixPoint Field_1_131; // 0x650
	::RPG::GameCore::FixPoint Field_1_132; // 0x658
	::RPG::GameCore::FixPoint Field_1_133; // 0x660
	::RPG::GameCore::FixPoint Field_1_134; // 0x668
	::RPG::GameCore::FixPoint Field_1_135; // 0x670
	::RPG::GameCore::FixPoint Field_1_136; // 0x678
	::RPG::GameCore::FixPoint Field_1_137; // 0x680
	::RPG::GameCore::FixPoint Field_1_138; // 0x688
	::RPG::GameCore::FixPoint Field_1_139; // 0x690
	::RPG::GameCore::FixPoint Field_1_140; // 0x698
	::RPG::GameCore::FixPoint Field_1_141; // 0x6A0
	::RPG::GameCore::FixPoint Field_1_142; // 0x6A8
	::RPG::GameCore::FixPoint Field_1_143; // 0x6B0
	::RPG::GameCore::FixPoint Field_1_144; // 0x6B8
	::RPG::GameCore::FixPoint Field_1_145; // 0x6C0
	::RPG::GameCore::FixPoint Field_1_146; // 0x6C8
	::RPG::GameCore::FixPoint Field_1_147; // 0x6D0
	::RPG::GameCore::FixPoint Field_1_148; // 0x6D8
	::RPG::GameCore::FixPoint Field_1_149; // 0x6E0
	::RPG::GameCore::FixPoint Field_1_150; // 0x6E8
	::RPG::GameCore::FixPoint Field_1_151; // 0x6F0
	::RPG::GameCore::FixPoint Field_1_152; // 0x6F8
	::RPG::GameCore::FixPoint Field_1_153; // 0x700

	::System::Void _ctor(::Class_3_BB8B7764D3497776* a1, ::Class_3_BB8B7764D3497776* a2, ::Class_3_BB8B7764D3497776* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET))(this);
	}
};
