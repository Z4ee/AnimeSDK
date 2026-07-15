#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirGameState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_103;
class Class_1_5F1329F544AC1AFF;
class Class_1_6E6FEE1E26FFD7A8;
class Class_2_68CB91321C3E76A7;
namespace RPG::Client::LittleGame::PixAir { class PixAirGameInstance; }
namespace RPG::Client::LittleGame::PixAir { class PixAirLevelController; }
namespace RPG::Client::PixAir { class IPixAirBattleAction; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirGhostManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEBURN_1_OFFSET UNITYSDK_OFFSET(0x19AB6050)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEBURN_OFFSET UNITYSDK_OFFSET(0x19AB5B40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEDAMAGE_1_OFFSET UNITYSDK_OFFSET(0x19AB4FF0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEDAMAGE_OFFSET UNITYSDK_OFFSET(0x19AB4AE0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTESHIELD_1_OFFSET UNITYSDK_OFFSET(0x19AB5820)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTESHIELD_OFFSET UNITYSDK_OFFSET(0x19AB51E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYEQUIPMENTSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x19AB3F80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYPLANESNAPSHOT_1_OFFSET UNITYSDK_OFFSET(0x19AB3AA0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYPLANESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x19AB3A00)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEEQUIPMENTSNAPSHOTFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x19AB3960)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEEQUIPMENTSNAPSHOTFROMINSTANCE_OFFSET UNITYSDK_OFFSET(0x19AB3630)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETBATTLESTARTHEALTH_OFFSET UNITYSDK_OFFSET(0x19AB3C00)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETBATTLETIME_OFFSET UNITYSDK_OFFSET(0x19AB3200)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETEFFECTIVESKILLLIST_1_OFFSET UNITYSDK_OFFSET(0x19AB42C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETEFFECTIVESKILLLIST_OFFSET UNITYSDK_OFFSET(0x19AB48E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETENEMYPLANEVIEWRESPATH_OFFSET UNITYSDK_OFFSET(0x19AB3ED0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19AB2F70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETGAMESTATE_OFFSET UNITYSDK_OFFSET(0x19AB30E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETLEVELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19AB3050)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETPLAYERPLANEVIEWRESPATH_OFFSET UNITYSDK_OFFSET(0x19AB4990)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETRANDOMBROADCASTTEXT_OFFSET UNITYSDK_OFFSET(0x19AB4A40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x19AB34E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_NORMALIZEHEALTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x19AB41C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_SETPLANETRANSFORM_OFFSET UNITYSDK_OFFSET(0x19AB2E60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x19AB3390)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_STARTPIXAIRGAME_OFFSET UNITYSDK_OFFSET(0x19AB2990)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__BUILDSKILLSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x19AB4680)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AB6240)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__CREATEEQUIPMENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x19AB36E0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirBattleHelper_TypeDefinitionIndex = 73335;

	class PixAirBattleHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_s_EffectsNeedInitRenderCache()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirBattleHelper_TypeDefinitionIndex)->GetStaticField(0x3CD50);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_SHIELD_LIMIT()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(PixAirBattleHelper_TypeDefinitionIndex)->GetStaticField(0xA1B0);
		}
		// static const ::System::String* DEFAULT_PLANE_VIEW_RES_PATH; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::PixAir::PixAirGhostManager* StartPixAirGame(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1, ::RPG::Client::PixAir::IPixAirBattleAction* a2)
		{
			return ((::RPG::Client::PixAir::PixAirGhostManager*(*)(::RPG::Client::LittleGame::PixAir::PixAirLevelController*, ::RPG::Client::PixAir::IPixAirBattleAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_STARTPIXAIRGAME_OFFSET))(a1, a2);
		}

		static ::System::Void SetPlaneTransform(::Class_1_6E6FEE1E26FFD7A8* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::Class_1_6E6FEE1E26FFD7A8*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_SETPLANETRANSFORM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirGameInstance* GetGameInstance()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETGAMEINSTANCE_OFFSET))();
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirLevelController* GetLevelController()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirLevelController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETLEVELCONTROLLER_OFFSET))();
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirGameState GetGameState()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirGameState(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETGAMESTATE_OFFSET))();
		}

		static ::System::Single GetBattleTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETBATTLETIME_OFFSET))();
		}

		static ::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_SETTIMESCALE_OFFSET))(a1);
		}

		static ::System::Single GetTimeScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETTIMESCALE_OFFSET))();
		}

		static ::Class_1_43BD383C98B4C0C5_103* CreateEquipmentSnapshotFromInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1, ::System::Int32 a2)
		{
			return ((::Class_1_43BD383C98B4C0C5_103*(*)(::RPG::Client::PixAir::PixAirEquipInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEEQUIPMENTSNAPSHOTFROMINSTANCE_OFFSET))(a1, a2);
		}

		static ::Class_1_43BD383C98B4C0C5_103* CreateEquipmentSnapshotFromConfig(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::GameCore::PixAirEnchantmentType a4)
		{
			return ((::Class_1_43BD383C98B4C0C5_103*(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::RPG::GameCore::PixAirEnchantmentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEEQUIPMENTSNAPSHOTFROMCONFIG_OFFSET))(a1, a2, a3, a4);
		}

		static ::Class_1_6E6FEE1E26FFD7A8* CreateEnemyPlaneSnapshot(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::PixAir::PixAirLevelController* a3)
		{
			return ((::Class_1_6E6FEE1E26FFD7A8*(*)(::System::UInt32, ::System::Int32, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYPLANESNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::Class_1_6E6FEE1E26FFD7A8* CreateEnemyPlaneSnapshot_1(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::PixAir::PixAirLevelController* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::Class_1_6E6FEE1E26FFD7A8*(*)(::System::UInt32, ::System::Int32, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYPLANESNAPSHOT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint GetBattleStartHealth(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETBATTLESTARTHEALTH_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint NormalizeHealthPercentage(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_NORMALIZEHEALTHPERCENTAGE_OFFSET))(a1);
		}

		static ::Class_1_43BD383C98B4C0C5_103* _CreateEquipmentSnapshot(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PixAirEnchantmentType a3, ::System::Int32 a4)
		{
			return ((::Class_1_43BD383C98B4C0C5_103*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PixAirEnchantmentType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__CREATEEQUIPMENTSNAPSHOT_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::Class_1_5F1329F544AC1AFF*>* _BuildSkillSnapshots(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::Class_1_5F1329F544AC1AFF*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__BUILDSKILLSNAPSHOTS_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetEffectiveSkillList(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETEFFECTIVESKILLLIST_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetEffectiveSkillList_1(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PixAirEnchantmentType a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PixAirEnchantmentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETEFFECTIVESKILLLIST_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetEnemyPlaneViewResPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETENEMYPLANEVIEWRESPATH_OFFSET))(a1);
		}

		static ::System::String* GetPlayerPlaneViewResPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETPLAYERPLANEVIEWRESPATH_OFFSET))(a1);
		}

		static ::Il2CppArray<::Class_1_43BD383C98B4C0C5_103*>* CreateEnemyEquipmentSnapshots(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::Class_1_43BD383C98B4C0C5_103*>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYEQUIPMENTSNAPSHOTS_OFFSET))(a1, a2);
		}

		static ::System::String* GetRandomBroadcastText()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETRANDOMBROADCASTTEXT_OFFSET))();
		}

		static ::System::Int32 ComputeDamage(::Class_2_68CB91321C3E76A7* a1)
		{
			return ((::System::Int32(*)(::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEDAMAGE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeDamage_1(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEDAMAGE_1_OFFSET))(a1);
		}

		static ::System::Int32 ComputeShield(::Class_2_68CB91321C3E76A7* a1)
		{
			return ((::System::Int32(*)(::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTESHIELD_OFFSET))(a1);
		}

		static ::System::Int32 ComputeShield_1(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTESHIELD_1_OFFSET))(a1);
		}

		static ::System::Int32 ComputeBurn(::Class_2_68CB91321C3E76A7* a1)
		{
			return ((::System::Int32(*)(::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEBURN_OFFSET))(a1);
		}

		static ::System::Int32 ComputeBurn_1(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEBURN_1_OFFSET))(a1);
		}
	};
}
