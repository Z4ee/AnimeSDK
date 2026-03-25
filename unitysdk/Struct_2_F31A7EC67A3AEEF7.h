#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerBeatBackReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerRebornReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DisablePlayerMoveReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/LandingLevel.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PauseRecordResetPositionReason.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_241BF863AE3123B3.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_2.h"
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

#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_0A0296D150EB9DA4_OFFSET UNITYSDK_OFFSET(0x20E4440)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x20E4E80)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x20E4330)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x20E4830)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0x20E4A10)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_3_OFFSET UNITYSDK_OFFSET(0x20E4BF0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_4_OFFSET UNITYSDK_OFFSET(0x20E4DD0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x20E4650)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0x20E4480)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x20E4460)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_B22F293B7893A372_OFFSET UNITYSDK_OFFSET(0x20E4E10)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_1_OFFSET UNITYSDK_OFFSET(0x20E4290)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_2_OFFSET UNITYSDK_OFFSET(0x20E42E0)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x20E4240)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x20E4390)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x20E4F00)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x20E4E00)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x20E4680)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_2_OFFSET UNITYSDK_OFFSET(0x20E4860)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_3_OFFSET UNITYSDK_OFFSET(0x20E4A40)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_4_OFFSET UNITYSDK_OFFSET(0x20E4C20)
#define STRUCT_2_F31A7EC67A3AEEF7_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x20E44A0)

inline static constexpr unsigned int Struct_2_F31A7EC67A3AEEF7_TypeDefinitionIndex = 33468;

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
	::UnityEngine::Vector3 Field_2_32; // 0x2C0
	::UnityEngine::Vector3 Field_2_33; // 0x2CC
	::UnityEngine::Vector3 Field_2_34; // 0x2D8
	::UnityEngine::Vector3 Field_2_35; // 0x2E4
	::UnityEngine::Vector3 Field_2_36; // 0x2F0
	::System::Boolean Field_2_37; // 0x2FC
	::System::Boolean Field_2_38; // 0x2FD
	::System::Boolean Field_2_39; // 0x2FE
	::System::Boolean Field_2_40; // 0x2FF
	::System::Boolean Field_2_41; // 0x300
	::System::Boolean Field_2_42; // 0x301
	::System::Boolean Field_2_43; // 0x302
	::System::Boolean Field_2_44; // 0x303
	::System::Int32 Field_2_45; // 0x304
	::System::Single Field_2_46; // 0x308
	::System::Boolean Field_2_47; // 0x30C
	::System::Single Field_2_48; // 0x310
	::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason Field_2_49; // 0x314
	::Struct_2_FEFADCB82FEB841E Field_2_50; // 0x318
	::RPG::Client::LittleGame::Move::MoveState Field_2_51; // 0x324
	::RPG::Client::LittleGame::Move::MoveState Field_2_52; // 0x328
	::RPG::Client::LittleGame::Move::MoveState Field_2_53; // 0x32C
	::RPG::Client::LittleGame::Move::MoveState Field_2_54; // 0x330
	::UnityEngine::Vector3 Field_2_55; // 0x334
	::UnityEngine::Vector3 Field_2_56; // 0x340
	::UnityEngine::Vector3 Field_2_57; // 0x34C
	::System::Boolean Field_2_58; // 0x358
	::System::Single Field_2_59; // 0x35C
	::UnityEngine::Vector3 Field_2_60; // 0x360
	::UnityEngine::Vector3 Field_2_61; // 0x36C
	::System::Boolean Field_2_62; // 0x378
	::UnityEngine::RaycastHit Field_2_63; // 0x37C
	::RPG::PoolList_1<::UnityEngine::RaycastHit>* Field_2_64; // 0x3B0
	::System::Int32 Field_2_65; // 0x3B8
	::UnityEngine::Transform* Field_2_66; // 0x3C0
	::RPG::PoolList_1<::System::Int32>* Field_2_67; // 0x3C8
	::RPG::PoolList_1<::System::Int32>* Field_2_68; // 0x3D0
	::Struct_2_C326D3DFDE2D8D31 Field_2_69; // 0x3D8
	::System::Boolean Field_2_70; // 0x478
	::System::Boolean Field_2_71; // 0x479
	::System::Boolean Field_2_72; // 0x47A
	::System::Boolean Field_2_73; // 0x47B
	::System::Boolean Field_2_74; // 0x47C
	::Struct_2_241BF863AE3123B3 Field_2_75; // 0x480
	::Struct_2_241BF863AE3123B3 Field_2_76; // 0x4D0
	::System::Boolean Field_2_77; // 0x520
	::RPG::GameCore::FloatCurve* Field_2_78; // 0x528
	::System::Single Field_2_79; // 0x530
	::System::Single Field_2_80; // 0x534
	::System::Single Field_2_81; // 0x538
	::System::Boolean Field_2_82; // 0x53C
	::System::Boolean Field_2_83; // 0x53D
	::System::Boolean Field_2_84; // 0x53E
	::System::Boolean Field_2_85; // 0x53F
	::System::Boolean Field_2_86; // 0x540
	::System::Single Field_2_87; // 0x544
	::System::Boolean Field_2_88; // 0x548
	::System::Single Field_2_89; // 0x54C
	::System::Boolean Field_2_90; // 0x550
	::System::Single Field_2_91; // 0x554
	::System::Boolean Field_2_92; // 0x558
	::System::Single Field_2_93; // 0x55C
	::System::Boolean Field_2_94; // 0x560
	::System::Int32 Field_2_95; // 0x564
	::System::Int32 Field_2_96; // 0x568
	::UnityEngine::Vector3 Field_2_97; // 0x56C
	::System::Boolean Field_2_98; // 0x578
	::System::Int32 Field_2_99; // 0x57C
	::System::Boolean Field_2_100; // 0x580
	::UnityEngine::Vector2 Field_2_101; // 0x584
	::System::Single Field_2_102; // 0x58C
	::System::Boolean Field_2_103; // 0x590
	::System::Boolean Field_2_104; // 0x591
	::System::Boolean Field_2_105; // 0x592
	::RPG::PoolList_1<::System::Int32>* Field_2_106; // 0x598
	::System::Int32 Field_2_107; // 0x5A0
	::System::Int32 Field_2_108; // 0x5A4
	::Struct_2_EAC1BB0F093534A5 Field_2_109; // 0x5A8
	::UnityEngine::Transform* Field_2_110; // 0x610
	::System::Boolean Field_2_111; // 0x618
	::System::UInt32 Field_2_112; // 0x61C
	::Struct_2_EAC1BB0F093534A5 Field_2_113; // 0x620
	::Struct_2_EAC1BB0F093534A5 Field_2_114; // 0x688
	::System::UInt32 Field_2_115; // 0x6F0
	::System::Int32 Field_2_116; // 0x6F4
	::RPG::PoolList_1<::System::Int32>* Field_2_117; // 0x6F8
	::System::Boolean Field_2_118; // 0x700
	::System::Int32 Field_2_119; // 0x704
	::System::Single Field_2_120; // 0x708
	::System::Boolean Field_2_121; // 0x70C
	::UnityEngine::Vector3 Field_2_122; // 0x710
	::UnityEngine::Vector3 Field_2_123; // 0x71C
	::System::Boolean Field_2_124; // 0x728
	::System::Boolean Field_2_125; // 0x729
	::UnityEngine::Vector3 Field_2_126; // 0x72C
	::UnityEngine::Vector3 Field_2_127; // 0x738
	::System::Int32 Field_2_128; // 0x744
	::RPG::PoolList_1<::System::Int32>* Field_2_129; // 0x748
	::Struct_2_B4E2525399EA69B7 Field_2_130; // 0x750
	::System::Single Field_2_131; // 0x790
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason Field_2_132; // 0x794
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason Field_2_133; // 0x798
	::System::Boolean Field_2_134; // 0x79C
	::System::Single Field_2_135; // 0x7A0
	::System::Single Field_2_136; // 0x7A4
	::Struct_2_52A902145F5BE51F_1 Field_2_137; // 0x7A8
	::System::Single Field_2_138; // 0x7CC
	::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason Field_2_139; // 0x7D0
	::System::Single Field_2_140; // 0x7D4
	::System::Single Field_2_141; // 0x7D8
	::System::Boolean Field_2_142; // 0x7DC
	::System::Single Field_2_143; // 0x7E0
	::System::Boolean Field_2_144; // 0x7E4
	::System::Single Field_2_145; // 0x7E8
	::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* Field_2_146; // 0x7F0
	::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* Field_2_147; // 0x7F8
	::System::Boolean Field_2_148; // 0x800
	::System::Boolean Field_2_149; // 0x801
	::System::Single Field_2_150; // 0x804
	::System::Single Field_2_151; // 0x808
	::System::Boolean Field_2_152; // 0x80C
	::RPG::Client::LittleGame::FiveDim::PauseRecordResetPositionReason Field_2_153; // 0x810
	::System::Boolean Field_2_154; // 0x814
	::System::Single Field_2_155; // 0x818
	::System::Boolean Field_2_156; // 0x81C
	::System::Single Field_2_157; // 0x820
	::System::Boolean Field_2_158; // 0x824
	::System::Boolean Field_2_159; // 0x825
	::System::Boolean Field_2_160; // 0x826
	::System::Boolean Field_2_161; // 0x827
	::UnityEngine::Vector2 Field_2_162; // 0x828
	::System::Single Field_2_163; // 0x830
	::System::Single Field_2_164; // 0x834
	::System::Boolean Field_2_165; // 0x838
	::System::Single Field_2_166; // 0x83C
	::System::Boolean Field_2_167; // 0x840

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
