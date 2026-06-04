#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerBeatBackReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerRebornReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DisablePlayerMoveReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EnterDashReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/LandingLevel.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_241BF863AE3123B3.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_2.h"
#include "unitysdk/Struct_2_984AA94FB23486F9.h"
#include "unitysdk/Struct_2_B4E2525399EA69B7.h"
#include "unitysdk/Struct_2_C326D3DFDE2D8D31.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FloatCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_0A0296D150EB9DA4_OFFSET UNITYSDK_OFFSET(0x3847970)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x38483B0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x3847860)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x3847D60)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0x3847F40)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_3_OFFSET UNITYSDK_OFFSET(0x3848120)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_4_OFFSET UNITYSDK_OFFSET(0x3848300)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x3847B80)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0x38479B0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x3847990)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_B22F293B7893A372_OFFSET UNITYSDK_OFFSET(0x3848340)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_1_OFFSET UNITYSDK_OFFSET(0x38477C0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_2_OFFSET UNITYSDK_OFFSET(0x3847810)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x3847770)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x38478C0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x3848430)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3848330)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x3847BB0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_2_OFFSET UNITYSDK_OFFSET(0x3847D90)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_3_OFFSET UNITYSDK_OFFSET(0x3847F70)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_4_OFFSET UNITYSDK_OFFSET(0x3848150)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x38479D0)

inline static constexpr unsigned int Struct_2_F31A7EC67A3AEEF7_TypeDefinitionIndex = 40031;

struct alignas(8) Struct_2_F31A7EC67A3AEEF7
{
	::UnityEngine::Vector2 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x24
	::System::Boolean Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x29
	::System::Boolean Field_2_6; // 0x2A
	::System::Boolean Field_2_7; // 0x2B
	::System::Boolean Field_2_8; // 0x2C
	::System::Single Field_2_9; // 0x30
	::System::Boolean Field_2_10; // 0x34
	::System::Single Field_2_11; // 0x38
	::System::Boolean Field_2_12; // 0x3C
	::System::Boolean Field_2_13; // 0x3D
	::System::Single Field_2_14; // 0x40
	::System::Int32 Field_2_15; // 0x44
	::System::Boolean Field_2_16; // 0x48
	::System::Boolean Field_2_17; // 0x49
	::System::Single Field_2_18; // 0x4C
	::System::Single Field_2_19; // 0x50
	::RPG::Client::LittleGame::FiveDim::LandingLevel Field_2_20; // 0x54
	::System::Single Field_2_21; // 0x58
	::System::Boolean Field_2_22; // 0x5C
	::UnityEngine::Vector3 Field_2_23; // 0x60
	::UnityEngine::Vector3 Field_2_24; // 0x6C
	::System::UInt32 Field_2_25; // 0x78
	::System::UInt32 Field_2_26; // 0x7C
	::Struct_2_52A902145F5BE51F_2 Field_2_27; // 0x80
	::System::UInt32 Field_2_28; // 0x2B0
	::System::Int32 Field_2_29; // 0x2B4
	::System::Int32 Field_2_30; // 0x2B8
	::System::Single Field_2_31; // 0x2BC
	::System::Boolean Field_2_32; // 0x2C0
	::UnityEngine::Vector3 Field_2_33; // 0x2C4
	::UnityEngine::Vector3 Field_2_34; // 0x2D0
	::UnityEngine::Vector3 Field_2_35; // 0x2DC
	::UnityEngine::Vector3 Field_2_36; // 0x2E8
	::UnityEngine::Vector3 Field_2_37; // 0x2F4
	::System::Boolean Field_2_38; // 0x300
	::System::Boolean Field_2_39; // 0x301
	::System::Boolean Field_2_40; // 0x302
	::System::Boolean Field_2_41; // 0x303
	::System::Boolean Field_2_42; // 0x304
	::System::Boolean Field_2_43; // 0x305
	::System::Boolean Field_2_44; // 0x306
	::System::Boolean Field_2_45; // 0x307
	::System::Boolean Field_2_46; // 0x308
	::System::Int32 Field_2_47; // 0x30C
	::System::Single Field_2_48; // 0x310
	::System::Boolean Field_2_49; // 0x314
	::Struct_2_EAC1BB0F093534A5 Field_2_50; // 0x318
	::System::Single Field_2_51; // 0x380
	::System::Boolean Field_2_52; // 0x384
	::System::Boolean Field_2_53; // 0x385
	::System::Single Field_2_54; // 0x388
	::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason Field_2_55; // 0x38C
	::Struct_2_FEFADCB82FEB841E Field_2_56; // 0x390
	::RPG::Client::LittleGame::Move::MoveState Field_2_57; // 0x39C
	::RPG::Client::LittleGame::Move::MoveState Field_2_58; // 0x3A0
	::RPG::Client::LittleGame::Move::MoveState Field_2_59; // 0x3A4
	::RPG::Client::LittleGame::Move::MoveState Field_2_60; // 0x3A8
	::UnityEngine::Vector3 Field_2_61; // 0x3AC
	::UnityEngine::Vector3 Field_2_62; // 0x3B8
	::UnityEngine::Vector3 Field_2_63; // 0x3C4
	::System::Boolean Field_2_64; // 0x3D0
	::System::Single Field_2_65; // 0x3D4
	::UnityEngine::Vector3 Field_2_66; // 0x3D8
	::UnityEngine::Vector3 Field_2_67; // 0x3E4
	::System::Boolean Field_2_68; // 0x3F0
	::UnityEngine::RaycastHit Field_2_69; // 0x3F4
	::RPG::PoolList_1<::UnityEngine::RaycastHit>* Field_2_70; // 0x428
	::System::Int32 Field_2_71; // 0x430
	::UnityEngine::Transform* Field_2_72; // 0x438
	::RPG::PoolList_1<::System::Int32>* Field_2_73; // 0x440
	::RPG::PoolList_1<::System::Int32>* Field_2_74; // 0x448
	::Struct_2_C326D3DFDE2D8D31 Field_2_75; // 0x450
	::RPG::PoolList_1<::Struct_2_C326D3DFDE2D8D31>* Field_2_76; // 0x558
	::System::Single Field_2_77; // 0x560
	::System::Boolean Field_2_78; // 0x564
	::System::Boolean Field_2_79; // 0x565
	::System::Boolean Field_2_80; // 0x566
	::System::Boolean Field_2_81; // 0x567
	::System::Boolean Field_2_82; // 0x568
	::Struct_2_241BF863AE3123B3 Field_2_83; // 0x570
	::Struct_2_241BF863AE3123B3 Field_2_84; // 0x5C0
	::System::Boolean Field_2_85; // 0x610
	::RPG::GameCore::FloatCurve* Field_2_86; // 0x618
	::System::Single Field_2_87; // 0x620
	::System::Single Field_2_88; // 0x624
	::System::Single Field_2_89; // 0x628
	::System::Boolean Field_2_90; // 0x62C
	::System::Boolean Field_2_91; // 0x62D
	::System::Boolean Field_2_92; // 0x62E
	::System::Boolean Field_2_93; // 0x62F
	::System::Boolean Field_2_94; // 0x630
	::System::Single Field_2_95; // 0x634
	::System::Boolean Field_2_96; // 0x638
	::System::Single Field_2_97; // 0x63C
	::System::Boolean Field_2_98; // 0x640
	::System::Single Field_2_99; // 0x644
	::System::Boolean Field_2_100; // 0x648
	::System::Single Field_2_101; // 0x64C
	::System::Boolean Field_2_102; // 0x650
	::System::Int32 Field_2_103; // 0x654
	::System::Int32 Field_2_104; // 0x658
	::UnityEngine::Vector3 Field_2_105; // 0x65C
	::System::Boolean Field_2_106; // 0x668
	::System::Int32 Field_2_107; // 0x66C
	::RPG::Client::LittleGame::FiveDim::EnterDashReason Field_2_108; // 0x670
	::Struct_2_984AA94FB23486F9 Field_2_109; // 0x674
	::System::Boolean Field_2_110; // 0x68C
	::System::Boolean Field_2_111; // 0x68D
	::System::Single Field_2_112; // 0x690
	::System::Single Field_2_113; // 0x694
	::System::Int32 Field_2_114; // 0x698
	::UnityEngine::Vector3 Field_2_115; // 0x69C
	::UnityEngine::Vector2 Field_2_116; // 0x6A8
	::System::Single Field_2_117; // 0x6B0
	::System::Single Field_2_118; // 0x6B4
	::System::Boolean Field_2_119; // 0x6B8
	::System::Boolean Field_2_120; // 0x6B9
	::System::Boolean Field_2_121; // 0x6BA
	::RPG::PoolList_1<::System::Int32>* Field_2_122; // 0x6C0
	::System::Int32 Field_2_123; // 0x6C8
	::System::Boolean Field_2_124; // 0x6CC
	::System::Boolean Field_2_125; // 0x6CD
	::System::Int32 Field_2_126; // 0x6D0
	::Struct_2_EAC1BB0F093534A5 Field_2_127; // 0x6D4
	::UnityEngine::Transform* Field_2_128; // 0x740
	::System::Boolean Field_2_129; // 0x748
	::System::UInt32 Field_2_130; // 0x74C
	::Struct_2_EAC1BB0F093534A5 Field_2_131; // 0x750
	::Struct_2_EAC1BB0F093534A5 Field_2_132; // 0x7B8
	::System::UInt32 Field_2_133; // 0x820
	::System::Int32 Field_2_134; // 0x824
	::RPG::PoolList_1<::System::Int32>* Field_2_135; // 0x828
	::System::Boolean Field_2_136; // 0x830
	::System::Int32 Field_2_137; // 0x834
	::System::Single Field_2_138; // 0x838
	::System::Boolean Field_2_139; // 0x83C
	::UnityEngine::Vector3 Field_2_140; // 0x840
	::UnityEngine::Vector3 Field_2_141; // 0x84C
	::System::Boolean Field_2_142; // 0x858
	::System::Boolean Field_2_143; // 0x859
	::System::Boolean Field_2_144; // 0x85A
	::UnityEngine::Vector3 Field_2_145; // 0x85C
	::UnityEngine::Vector3 Field_2_146; // 0x868
	::System::Int32 Field_2_147; // 0x874
	::RPG::PoolList_1<::System::Int32>* Field_2_148; // 0x878
	::UnityEngine::Vector3 Field_2_149; // 0x880
	::System::Boolean Field_2_150; // 0x88C
	::System::Boolean Field_2_151; // 0x88D
	::Struct_2_B4E2525399EA69B7 Field_2_152; // 0x890
	::System::Single Field_2_153; // 0x8D0
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason Field_2_154; // 0x8D4
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason Field_2_155; // 0x8D8
	::System::Boolean Field_2_156; // 0x8DC
	::System::Single Field_2_157; // 0x8E0
	::System::Single Field_2_158; // 0x8E4
	::Struct_2_52A902145F5BE51F_1 Field_2_159; // 0x8E8
	::System::Single Field_2_160; // 0x90C
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason Field_2_161; // 0x910
	::System::Single Field_2_162; // 0x914
	::System::Single Field_2_163; // 0x918
	::System::Boolean Field_2_164; // 0x91C
	::System::Single Field_2_165; // 0x920
	::System::Boolean Field_2_166; // 0x924
	::System::Single Field_2_167; // 0x928
	::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* Field_2_168; // 0x930
	::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* Field_2_169; // 0x938
	::System::Boolean Field_2_170; // 0x940
	::System::Boolean Field_2_171; // 0x941
	::System::Single Field_2_172; // 0x944
	::System::Single Field_2_173; // 0x948
	::System::Boolean Field_2_174; // 0x94C
	::System::Boolean Field_2_175; // 0x94D
	::System::Single Field_2_176; // 0x950
	::System::Boolean Field_2_177; // 0x954
	::System::Single Field_2_178; // 0x958
	::System::Boolean Field_2_179; // 0x95C
	::System::Boolean Field_2_180; // 0x95D
	::System::Boolean Field_2_181; // 0x95E
	::System::Boolean Field_2_182; // 0x95F
	::System::Boolean Field_2_183; // 0x960
	::UnityEngine::Vector2 Field_2_184; // 0x964
	::System::Int32 Field_2_185; // 0x96C
	::System::Single Field_2_186; // 0x970
	::System::Single Field_2_187; // 0x974
	::System::Boolean Field_2_188; // 0x978
	::System::Single Field_2_189; // 0x97C
	::System::Boolean Field_2_190; // 0x980
	::System::UInt32 Field_2_191; // 0x984

	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_1_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0_2()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	/*
	::UnityEngine::Quaternion Method_2_C34AC80B04BCFF1B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C34AC80B04BCFF1B_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion Method_2_0A0296D150EB9DA4()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_0A0296D150EB9DA4_OFFSET))(this);
	}
	*/

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_2_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_3_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_4_OFFSET))(this);
	}

	::System::Void Method_2_4E8DF6F8A37B229A_4(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_B22F293B7893A372(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_B22F293B7893A372_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
