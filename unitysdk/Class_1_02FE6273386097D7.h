#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingCameraType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_67AC58C55B729E15;
class Class_1_CCB3A003D9DADECF;
class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace RPG::Client { class ChenLingBattleSnapshot; }
namespace RPG::Client { class ChenLingBattleTeamSnapshot; }
namespace RPG::Client { class ChenLingTableBattleScene; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingCameraTargetSmoother; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingSoldierView; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace RPG::GameCore { class ChenLingBattleGameConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_02FE6273386097D7_METHOD_1_036ACD12E2D9DF41_OFFSET UNITYSDK_OFFSET(0x13CC1560)
#define CLASS_1_02FE6273386097D7_METHOD_1_0A04DB7DF8124C22_OFFSET UNITYSDK_OFFSET(0x13CC58D0)
#define CLASS_1_02FE6273386097D7_METHOD_1_12F11AAE7153CDF2_OFFSET UNITYSDK_OFFSET(0x13CC7F80)
#define CLASS_1_02FE6273386097D7_METHOD_1_17B621A5BCE0F832_OFFSET UNITYSDK_OFFSET(0x13CC22E0)
#define CLASS_1_02FE6273386097D7_METHOD_1_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x13CC3DC0)
#define CLASS_1_02FE6273386097D7_METHOD_1_228BE7D6E20E68F7_OFFSET UNITYSDK_OFFSET(0x13CC55F0)
#define CLASS_1_02FE6273386097D7_METHOD_1_2776821F7A628F74_OFFSET UNITYSDK_OFFSET(0x13CC6670)
#define CLASS_1_02FE6273386097D7_METHOD_1_2CBA411F33DE2700_OFFSET UNITYSDK_OFFSET(0x13CC5820)
#define CLASS_1_02FE6273386097D7_METHOD_1_42E6725EFD1B6BA0_OFFSET UNITYSDK_OFFSET(0x13CC5D40)
#define CLASS_1_02FE6273386097D7_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x13CC3ED0)
#define CLASS_1_02FE6273386097D7_METHOD_1_49003EE8E92354E5_OFFSET UNITYSDK_OFFSET(0x13CC1FB0)
#define CLASS_1_02FE6273386097D7_METHOD_1_51190272D9924882_OFFSET UNITYSDK_OFFSET(0x13CC82F0)
#define CLASS_1_02FE6273386097D7_METHOD_1_563FF81B10335834_OFFSET UNITYSDK_OFFSET(0x13CC2120)
#define CLASS_1_02FE6273386097D7_METHOD_1_69B1FCE8909AE76E_OFFSET UNITYSDK_OFFSET(0x13CC3AF0)
#define CLASS_1_02FE6273386097D7_METHOD_1_701244180638F063_OFFSET UNITYSDK_OFFSET(0x13CC2AC0)
#define CLASS_1_02FE6273386097D7_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x13CC7BE0)
#define CLASS_1_02FE6273386097D7_METHOD_1_786B157F300D2364_OFFSET UNITYSDK_OFFSET(0x13CC0760)
#define CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_1_OFFSET UNITYSDK_OFFSET(0x13CC4860)
#define CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_2_OFFSET UNITYSDK_OFFSET(0x13CC4C10)
#define CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_OFFSET UNITYSDK_OFFSET(0x13CC4250)
#define CLASS_1_02FE6273386097D7_METHOD_1_8D7AC74FF7C03C77_OFFSET UNITYSDK_OFFSET(0x13CC0AF0)
#define CLASS_1_02FE6273386097D7_METHOD_1_8E5D4C985555EB16_OFFSET UNITYSDK_OFFSET(0x13CC40F0)
#define CLASS_1_02FE6273386097D7_METHOD_1_8EDCCD6D22B4E023_OFFSET UNITYSDK_OFFSET(0x13CC29E0)
#define CLASS_1_02FE6273386097D7_METHOD_1_91073F44A9B505E6_OFFSET UNITYSDK_OFFSET(0x13CC5700)
#define CLASS_1_02FE6273386097D7_METHOD_1_91BA77ABF3C8403A_OFFSET UNITYSDK_OFFSET(0x13CC3530)
#define CLASS_1_02FE6273386097D7_METHOD_1_9B563BFE008D17FA_OFFSET UNITYSDK_OFFSET(0x13CC1140)
#define CLASS_1_02FE6273386097D7_METHOD_1_A147AC970DEDCAE7_OFFSET UNITYSDK_OFFSET(0x13CC2090)
#define CLASS_1_02FE6273386097D7_METHOD_1_A273F99DC528E9DB_OFFSET UNITYSDK_OFFSET(0x13CC34C0)
#define CLASS_1_02FE6273386097D7_METHOD_1_A76F6484F982EFF5_OFFSET UNITYSDK_OFFSET(0x13CC8030)
#define CLASS_1_02FE6273386097D7_METHOD_1_AF03BC22EFCCE24F_OFFSET UNITYSDK_OFFSET(0x13CC1E90)
#define CLASS_1_02FE6273386097D7_METHOD_1_B03B6003F2894141_OFFSET UNITYSDK_OFFSET(0x13CC4FC0)
#define CLASS_1_02FE6273386097D7_METHOD_1_B1E5CE354EDCEDFA_OFFSET UNITYSDK_OFFSET(0x13CC1730)
#define CLASS_1_02FE6273386097D7_METHOD_1_B3E5F8F64C9FFB63_OFFSET UNITYSDK_OFFSET(0x13CC14C0)
#define CLASS_1_02FE6273386097D7_METHOD_1_B47772CAA0074CF7_OFFSET UNITYSDK_OFFSET(0x13CC6250)
#define CLASS_1_02FE6273386097D7_METHOD_1_B5E7E0BBC22840E6_OFFSET UNITYSDK_OFFSET(0x13CC45D0)
#define CLASS_1_02FE6273386097D7_METHOD_1_B6B60891A776E34D_OFFSET UNITYSDK_OFFSET(0x13CC83B0)
#define CLASS_1_02FE6273386097D7_METHOD_1_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x13CC3D20)
#define CLASS_1_02FE6273386097D7_METHOD_1_C201C91358959BF3_OFFSET UNITYSDK_OFFSET(0x13CC1440)
#define CLASS_1_02FE6273386097D7_METHOD_1_CD9FD8E185C08552_OFFSET UNITYSDK_OFFSET(0x13CC1BB0)
#define CLASS_1_02FE6273386097D7_METHOD_1_DA79403A9C2A7459_OFFSET UNITYSDK_OFFSET(0x13CC6A50)
#define CLASS_1_02FE6273386097D7_METHOD_1_E05C89B228C6A488_OFFSET UNITYSDK_OFFSET(0x13CC1AB0)
#define CLASS_1_02FE6273386097D7_METHOD_1_E22A81291C008E95_OFFSET UNITYSDK_OFFSET(0x13CC1F10)
#define CLASS_1_02FE6273386097D7_METHOD_1_E4087B7445A81294_OFFSET UNITYSDK_OFFSET(0x13CC28A0)
#define CLASS_1_02FE6273386097D7_METHOD_1_EA710B089D492199_OFFSET UNITYSDK_OFFSET(0x13CC53F0)
#define CLASS_1_02FE6273386097D7_METHOD_1_F01411FE44197CE1_OFFSET UNITYSDK_OFFSET(0x13CC1600)
#define CLASS_1_02FE6273386097D7_METHOD_1_F1FE8376C25F6759_OFFSET UNITYSDK_OFFSET(0x13CC2E70)
#define CLASS_1_02FE6273386097D7_METHOD_1_F371EFF05B4317BA_OFFSET UNITYSDK_OFFSET(0x13CC1CF0)
#define CLASS_1_02FE6273386097D7_METHOD_1_F6F8677413173B00_OFFSET UNITYSDK_OFFSET(0x13CC3890)
#define CLASS_1_02FE6273386097D7_METHOD_1_FBDEC88FDFFC5A81_OFFSET UNITYSDK_OFFSET(0x13CC6E50)
#define CLASS_1_02FE6273386097D7_METHOD_1_FC2DB89E377A9B57_OFFSET UNITYSDK_OFFSET(0x13CC30A0)
#define CLASS_1_02FE6273386097D7__CTOR_OFFSET UNITYSDK_OFFSET(0x13CC0700)

inline static constexpr unsigned int Class_1_02FE6273386097D7_TypeDefinitionIndex = 72327;

class Class_1_02FE6273386097D7 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleGameConfig* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::Client::LittleGame::ChenLing::ChenLingCameraTargetSmoother* Field_1_2; // 0x20
	::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* Field_1_3; // 0x28
	::RPG::Client::ChenLingTableBattleScene* Field_1_4; // 0x30
	::Class_3_543326C044264182* Field_1_5; // 0x38
	::Class_2_2090B77B5C7838F2* Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x4C

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2, ::RPG::Client::ChenLingTableBattleScene* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*, ::RPG::Client::ChenLingTableBattleScene*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* Method_1_786B157F300D2364(::Class_1_67AC58C55B729E15* a1, ::RPG::Client::ChenLingBattleTeamSnapshot* a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>*(*)(::PVOID, ::Class_1_67AC58C55B729E15*, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_786B157F300D2364_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_6B60059019300BAD* Method_1_8D7AC74FF7C03C77(::Class_1_67AC58C55B729E15* a1, ::Class_1_CCB3A003D9DADECF* a2, ::RPG::Client::ChenLingBattleTeamSnapshot* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_1_67AC58C55B729E15*, ::Class_1_CCB3A003D9DADECF*, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8D7AC74FF7C03C77_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::GameObject* Method_1_9B563BFE008D17FA(::Class_2_6B60059019300BAD* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_9B563BFE008D17FA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_91BA77ABF3C8403A(::UnityEngine::GameObject* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_91BA77ABF3C8403A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F01411FE44197CE1(::RPG::Client::ChenLingTableBattleScene* a1, ::Class_1_CCB3A003D9DADECF* a2, ::Class_2_6B60059019300BAD* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::Class_1_CCB3A003D9DADECF*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_F01411FE44197CE1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1E5CE354EDCEDFA(::RPG::Client::ChenLingTableBattleScene* a1, ::Class_1_CCB3A003D9DADECF* a2, ::Class_2_6B60059019300BAD* a3, ::UnityEngine::GameObject* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::Class_1_CCB3A003D9DADECF*, ::Class_2_6B60059019300BAD*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B1E5CE354EDCEDFA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_E05C89B228C6A488(::RPG::Client::ChenLingTableBattleScene* a1, ::Class_2_6B60059019300BAD* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::Class_2_6B60059019300BAD*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E05C89B228C6A488_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C201C91358959BF3(::Class_2_6B60059019300BAD* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_C201C91358959BF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B3E5F8F64C9FFB63(::Class_1_67AC58C55B729E15* a1, ::Class_1_CCB3A003D9DADECF* a2, ::Class_2_6B60059019300BAD* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_67AC58C55B729E15*, ::Class_1_CCB3A003D9DADECF*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B3E5F8F64C9FFB63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_036ACD12E2D9DF41(::Class_1_67AC58C55B729E15* a1, ::Class_2_6B60059019300BAD* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_67AC58C55B729E15*, ::Class_2_6B60059019300BAD*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_036ACD12E2D9DF41_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F371EFF05B4317BA(::Class_1_CCB3A003D9DADECF* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CCB3A003D9DADECF*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_F371EFF05B4317BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AF03BC22EFCCE24F(::Class_1_CCB3A003D9DADECF* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CCB3A003D9DADECF*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_AF03BC22EFCCE24F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E22A81291C008E95(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E22A81291C008E95_OFFSET))(this, a1);
	}

	::System::Void Method_1_49003EE8E92354E5(::Class_2_6B60059019300BAD* a1, ::Class_2_2090B77B5C7838F2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_49003EE8E92354E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A147AC970DEDCAE7(::RPG::Client::ChenLingBattleTeamSnapshot* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_A147AC970DEDCAE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_563FF81B10335834(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_563FF81B10335834_OFFSET))(this, a1);
	}

	::System::Void Method_1_17B621A5BCE0F832(::Class_1_67AC58C55B729E15* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_67AC58C55B729E15*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_17B621A5BCE0F832_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD9FD8E185C08552(::Class_1_CCB3A003D9DADECF* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CCB3A003D9DADECF*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_CD9FD8E185C08552_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E4087B7445A81294(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E4087B7445A81294_OFFSET))(this, a1);
	}

	::System::Void Method_1_8EDCCD6D22B4E023(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8EDCCD6D22B4E023_OFFSET))(this, a1);
	}

	::System::Void Method_1_69B1FCE8909AE76E(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_69B1FCE8909AE76E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_701244180638F063(::Class_2_6B60059019300BAD* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_701244180638F063_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F1FE8376C25F6759(::UnityEngine::Vector3 a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_F1FE8376C25F6759_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FC2DB89E377A9B57(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_FC2DB89E377A9B57_OFFSET))(this, a1);
	}

	::System::Void Method_1_A273F99DC528E9DB(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_A273F99DC528E9DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::Void Method_1_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::Class_2_6B60059019300BAD* Method_1_8E5D4C985555EB16(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::System::Single a5, ::System::String* a6)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8E5D4C985555EB16_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_6B60059019300BAD* Method_1_8AC2B028E1909CCF(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_6B60059019300BAD* Method_1_B5E7E0BBC22840E6(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B5E7E0BBC22840E6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_6B60059019300BAD* Method_1_8AC2B028E1909CCF_1(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_6B60059019300BAD* Method_1_8AC2B028E1909CCF_2(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_228BE7D6E20E68F7(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_228BE7D6E20E68F7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_91073F44A9B505E6(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_91073F44A9B505E6_OFFSET))(this, a1, a2);
	}

	::Class_2_6B60059019300BAD* Method_1_B03B6003F2894141(::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType a1, ::Class_2_6B60059019300BAD* a2, ::Class_2_6B60059019300BAD* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B03B6003F2894141_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EA710B089D492199(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::System::String*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_EA710B089D492199_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* Method_1_2CBA411F33DE2700(::RPG::GameCore::ChenLingBattleEffectTier* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffectTier*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_2CBA411F33DE2700_OFFSET))(this, a1);
	}

	::Class_2_6B60059019300BAD* Method_1_0A04DB7DF8124C22(::Class_2_6B60059019300BAD* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_0A04DB7DF8124C22_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_6B60059019300BAD* Method_1_42E6725EFD1B6BA0(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::System::Boolean a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_42E6725EFD1B6BA0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::Class_2_6B60059019300BAD* Method_1_B47772CAA0074CF7(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B47772CAA0074CF7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::Client::MonoEffect* Method_1_2776821F7A628F74(::Class_2_6B60059019300BAD* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_2776821F7A628F74_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_6B60059019300BAD* Method_1_DA79403A9C2A7459(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::RPG::MVector3 a8)
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_DA79403A9C2A7459_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_FBDEC88FDFFC5A81(::RPG::Client::ChenLingBattleSnapshot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleSnapshot*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_FBDEC88FDFFC5A81_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6F8677413173B00(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_F6F8677413173B00_OFFSET))(this, a1);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_12F11AAE7153CDF2(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_12F11AAE7153CDF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A76F6484F982EFF5(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_A76F6484F982EFF5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B6B60891A776E34D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B6B60891A776E34D_OFFSET))(this, a1);
	}

	::System::Void Method_1_51190272D9924882(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_51190272D9924882_OFFSET))(this, a1, a2, a3);
	}
};
