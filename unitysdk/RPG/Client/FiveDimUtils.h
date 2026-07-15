#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/Struct_2_F01DF3CDCF3FD7AC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_116;
class Class_1_4393199F378B6118;
class Class_1_A1EDFD8801F68886;
class Class_1_EBB880A8D2C9B0D4;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimManager; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client::LittleGame { class LittleGameRuntimeButton; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class FiveDimBakedPresetConfig; }
namespace RPG::GameCore { class FiveDimGravityWalkBoardConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FIVEDIMUTILS_EVALUATEID_OFFSET UNITYSDK_OFFSET(0x18430190)
#define RPG_CLIENT_FIVEDIMUTILS_GETBAKEDLEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x18430130)
#define RPG_CLIENT_FIVEDIMUTILS_GETBAKEDPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0x18416AA0)
#define RPG_CLIENT_FIVEDIMUTILS_GETENTITYNAVNODEINFO_OFFSET UNITYSDK_OFFSET(0x18430ED0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYBYENTITYID_OFFSET UNITYSDK_OFFSET(0x184306A0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCHEATSHEET_1_OFFSET UNITYSDK_OFFSET(0x18430CF0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCHEATSHEET_OFFSET UNITYSDK_OFFSET(0x18430AF0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCONFIGWORLDPOSITIONBYENTITYID_OFFSET UNITYSDK_OFFSET(0x18430C30)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYWORLDPOSITIONBYENTITYID_OFFSET UNITYSDK_OFFSET(0x184309E0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTRANCELIST_OFFSET UNITYSDK_OFFSET(0x18432640)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCHEATSHEET_1_OFFSET UNITYSDK_OFFSET(0x18431960)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCHEATSHEET_OFFSET UNITYSDK_OFFSET(0x18431850)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1842FEF0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELUINTLENGTH_OFFSET UNITYSDK_OFFSET(0x184319F0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMMANAGER_OFFSET UNITYSDK_OFFSET(0x1842FB40)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMPLAYERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18431240)
#define RPG_CLIENT_FIVEDIMUTILS_GETGRAVITYWALKBOARDBASICINFO_OFFSET UNITYSDK_OFFSET(0x18433540)
#define RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1841E950)
#define RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x1842FDB0)
#define RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1842FBE0)
#define RPG_CLIENT_FIVEDIMUTILS_GETLITTLEGAMELEVELINFO_OFFSET UNITYSDK_OFFSET(0x1841ECB0)
#define RPG_CLIENT_FIVEDIMUTILS_GETLOCALPLAYERNAVNODEINFO_OFFSET UNITYSDK_OFFSET(0x184313D0)
#define RPG_CLIENT_FIVEDIMUTILS_GETPLAYER3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18421A80)
#define RPG_CLIENT_FIVEDIMUTILS_GETPLAYERWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x18431120)
#define RPG_CLIENT_FIVEDIMUTILS_GETPROPMOVECONFIG_OFFSET UNITYSDK_OFFSET(0x18433320)
#define RPG_CLIENT_FIVEDIMUTILS_HASGAMEPLAYMODE_OFFSET UNITYSDK_OFFSET(0x18430400)
#define RPG_CLIENT_FIVEDIMUTILS_HIDEALLHOYOGROUPBYFIVEDIM_OFFSET UNITYSDK_OFFSET(0x184194E0)
#define RPG_CLIENT_FIVEDIMUTILS_ISEXCLUSIVEGAME_OFFSET UNITYSDK_OFFSET(0x18419470)
#define RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_1_OFFSET UNITYSDK_OFFSET(0x184325D0)
#define RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_2_OFFSET UNITYSDK_OFFSET(0x18432470)
#define RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_OFFSET UNITYSDK_OFFSET(0x18432330)
#define RPG_CLIENT_FIVEDIMUTILS_ISLOCALPLAYERFIVEDIMNOWAYPOINT_OFFSET UNITYSDK_OFFSET(0x18431DB0)
#define RPG_CLIENT_FIVEDIMUTILS_ISPLAYERINFOVALID_OFFSET UNITYSDK_OFFSET(0x1841EB10)
#define RPG_CLIENT_FIVEDIMUTILS_OBBFULLYCONTAINSOBB_OFFSET UNITYSDK_OFFSET(0x18433720)
#define RPG_CLIENT_FIVEDIMUTILS_OBBINTERSECTSNOALLOC_OFFSET UNITYSDK_OFFSET(0x18434050)
#define RPG_CLIENT_FIVEDIMUTILS_PREPAREFIVEDIMMISSIONDATA_1_OFFSET UNITYSDK_OFFSET(0x18431C70)
#define RPG_CLIENT_FIVEDIMUTILS_PREPAREFIVEDIMMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x18431B30)
#define RPG_CLIENT_FIVEDIMUTILS_RECOVERSHOWALLHOYOGROUPBYFIVEDIM_OFFSET UNITYSDK_OFFSET(0x18419820)
#define RPG_CLIENT_FIVEDIMUTILS_SETFIVEDIMTELEPORTLOCK_OFFSET UNITYSDK_OFFSET(0x184305E0)
#define RPG_CLIENT_FIVEDIMUTILS_SHOULDSAVEGAMESTATEONSERVER_OFFSET UNITYSDK_OFFSET(0x18412F70)
#define RPG_CLIENT_FIVEDIMUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET UNITYSDK_OFFSET(0x18430260)
#define RPG_CLIENT_FIVEDIMUTILS_SHOWGAMEMAINPAGE_1_OFFSET UNITYSDK_OFFSET(0x1841B180)
#define RPG_CLIENT_FIVEDIMUTILS_SHOWGAMEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1842CDA0)
#define RPG_CLIENT_FIVEDIMUTILS_TOHORIZONTALFOV_OFFSET UNITYSDK_OFFSET(0x18430350)
#define RPG_CLIENT_FIVEDIMUTILS_TOLITTLEGAMERUNTIMEBUTTON_OFFSET UNITYSDK_OFFSET(0x18430D90)
#define RPG_CLIENT_FIVEDIMUTILS_TRYGETENTITYCONFIGIDBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18430810)
#define RPG_CLIENT_FIVEDIMUTILS_TRYGETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1842FC80)
#define RPG_CLIENT_FIVEDIMUTILS_TRYPARSECONTAINERIDANDFDENTITYID_OFFSET UNITYSDK_OFFSET(0x184331C0)
#define RPG_CLIENT_FIVEDIMUTILS_TRYPARSETASKCONTAINERTARGET_OFFSET UNITYSDK_OFFSET(0x18433060)
#define RPG_CLIENT_FIVEDIMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18434D50)
#define RPG_CLIENT_FIVEDIMUTILS__ISFIVEDIMNOWAYPOINT_OFFSET UNITYSDK_OFFSET(0x18432080)
#define RPG_CLIENT_FIVEDIMUTILS__ISPLAYERINFOVALIDBYDATA_OFFSET UNITYSDK_OFFSET(0x18432A50)
#define RPG_CLIENT_FIVEDIMUTILS__ISPLAYERINFOVALIDBYRUNTIME_OFFSET UNITYSDK_OFFSET(0x18432EC0)
#define RPG_CLIENT_FIVEDIMUTILS__SHOWGAMEUI_OFFSET UNITYSDK_OFFSET(0x18430450)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimUtils_TypeDefinitionIndex = 57691;

	class FiveDimUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FiveDimBakedPresetConfig** StaticGet__BakedPresetConfig()
		{
			return (::RPG::GameCore::FiveDimBakedPresetConfig**)Il2CppClass::FromTypeDefinitionIndex(FiveDimUtils_TypeDefinitionIndex)->GetStaticField(0x18190);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimPropMoveConfig*>** StaticGet__PropMoveConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimPropMoveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimUtils_TypeDefinitionIndex)->GetStaticField(0x18198);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimGameplayMode, ::System::String*>** StaticGet__GamePageMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimGameplayMode, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimUtils_TypeDefinitionIndex)->GetStaticField(0x181A0);
		}
		// static const ::System::String* LEVEL_ROOT_DIR; // 0x0
		// static const ::System::String* LEVEL_BAKED_DIR; // 0x0
		// static const ::System::String* PROP_MOVE_CONFIG_DIR; // 0x0
		// static const ::RPG::GameCore::FiveDimGameplayMode _CLIENT_GAME_PLAY_MODE; // 0x0
		// static const ::System::String* NoWayPointTag; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::Client::FiveDimManager* GetFiveDimManager()
		{
			return ((::RPG::Client::FiveDimManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMMANAGER_OFFSET))();
		}

		static ::System::Boolean GetInstance(::RPG::GameCore::TaskContext* a1, ::RPG::Client::FiveDimGameInstance*& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::Client::FiveDimGameInstance*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetInstance_1(::RPG::Client::FiveDimGameInstance*& a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::FiveDimGameInstance*&, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::FiveDimGameInstance* GetInstance_2(::Class_0_16E4307DCC419505_116* a1)
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::Class_0_16E4307DCC419505_116*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_2_OFFSET))(a1);
		}

		static ::System::Boolean TryGetInstance(::RPG::GameCore::TaskContext* a1, ::RPG::Client::FiveDimGameInstance*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::Client::FiveDimGameInstance*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TRYGETINSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetLittleGameLevelInfo(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo*& a3, ::RPG::GameCore::LittleGameLevelConfig*& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*&, ::RPG::GameCore::LittleGameLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETLITTLEGAMELEVELINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetFiveDimLevelConfig(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameLevelConfig*& a3, ::RPG::GameCore::FiveDimBakedLevelConfig*& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameLevelConfig*&, ::RPG::GameCore::FiveDimBakedLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCONFIG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetBakedLevelConfigPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETBAKEDLEVELCONFIGPATH_OFFSET))(a1);
		}

		static ::System::UInt32 EvaluateID(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicString* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_EVALUATEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean ShouldStopMovementSync()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET))();
		}

		static ::System::Boolean ShouldSaveGameStateOnServer(::RPG::GameCore::LittleGameLevelConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SHOULDSAVEGAMESTATEONSERVER_OFFSET))(a1);
		}

		static ::System::Boolean IsExclusiveGame(::RPG::GameCore::LevelLittleGameInfo* a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelLittleGameInfo*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISEXCLUSIVEGAME_OFFSET))(a1, a2);
		}

		static ::System::Void HideAllHoyoGroupByFiveDim(::RPG::Client::FiveDimGameInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_HIDEALLHOYOGROUPBYFIVEDIM_OFFSET))(a1, a2);
		}

		static ::System::Void RecoverShowAllHoyoGroupByFiveDim()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_RECOVERSHOWALLHOYOGROUPBYFIVEDIM_OFFSET))();
		}

		static ::System::Boolean GetPlayer3DTransform(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETPLAYER3DTRANSFORM_OFFSET))(a1, a2);
		}

		static ::System::Single ToHorizontalFOV(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TOHORIZONTALFOV_OFFSET))(a1);
		}

		static ::RPG::GameCore::FiveDimBakedPresetConfig* GetBakedPresetConfig()
		{
			return ((::RPG::GameCore::FiveDimBakedPresetConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETBAKEDPRESETCONFIG_OFFSET))();
		}

		static ::System::Void ShowGameMainPage(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SHOWGAMEMAINPAGE_OFFSET))(a1, a2);
		}

		static ::System::Void ShowGameMainPage_1(::RPG::GameCore::FiveDimGameplayMode a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SHOWGAMEMAINPAGE_1_OFFSET))(a1);
		}

		static ::System::Void SetFiveDimTeleportLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SETFIVEDIMTELEPORTLOCK_OFFSET))(a1);
		}

		static ::System::Void _ShowGameUI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__SHOWGAMEUI_OFFSET))(a1);
		}

		static ::System::Boolean HasGameplayMode(::RPG::GameCore::FiveDimGameplayMode a1, ::RPG::GameCore::FiveDimGameplayMode a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FiveDimGameplayMode, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_HASGAMEPLAYMODE_OFFSET))(a1, a2);
		}

		static ::Class_2_B9E8C2EEAA5C96EC* GetFiveDimEntityByEntityID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYBYENTITYID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryGetEntityConfigIDByRuntimeID(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TRYGETENTITYCONFIGIDBYRUNTIMEID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetFiveDimEntityWorldPositionByEntityID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYWORLDPOSITIONBYENTITYID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetFiveDimEntityConfigWorldPositionByEntityID(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::UnityEngine::Vector3& a5)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCONFIGWORLDPOSITIONBYENTITYID_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::LittleGame::LittleGameRuntimeButton* ToLittleGameRuntimeButton(::RPG::GameCore::PropButtonConfig* a1)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::RPG::GameCore::PropButtonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TOLITTLEGAMERUNTIMEBUTTON_OFFSET))(a1);
		}

		static ::Class_1_4393199F378B6118* GetEntityNavNodeInfo(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::Class_1_4393199F378B6118*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETENTITYNAVNODEINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 GetPlayerWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETPLAYERWORLDPOSITION_OFFSET))();
		}

		static ::UnityEngine::GameObject* GetFiveDimPlayerGameObject()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMPLAYERGAMEOBJECT_OFFSET))();
		}

		static ::Class_1_4393199F378B6118* GetLocalPlayerNavNodeInfo()
		{
			return ((::Class_1_4393199F378B6118*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETLOCALPLAYERNAVNODEINFO_OFFSET))();
		}

		static ::Class_1_EBB880A8D2C9B0D4* GetFiveDimLevelCheatSheet(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_EBB880A8D2C9B0D4*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCHEATSHEET_OFFSET))(a1, a2);
		}

		static ::Class_1_EBB880A8D2C9B0D4* GetFiveDimLevelCheatSheet_1(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::Class_1_EBB880A8D2C9B0D4*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCHEATSHEET_1_OFFSET))(a1, a2, a3);
		}

		static ::Class_1_A1EDFD8801F68886* GetFiveDimEntityCheatSheet(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::Class_1_A1EDFD8801F68886*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCHEATSHEET_OFFSET))(a1, a2, a3);
		}

		static ::Class_1_A1EDFD8801F68886* GetFiveDimEntityCheatSheet_1(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::Class_1_A1EDFD8801F68886*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCHEATSHEET_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetFiveDimLevelUintLength(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELUINTLENGTH_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::IPromise* PrepareFiveDimMissionData(::RPG::Client::MapDef* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_PREPAREFIVEDIMMISSIONDATA_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* PrepareFiveDimMissionData_1(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_PREPAREFIVEDIMMISSIONDATA_1_OFFSET))(a1);
		}

		static ::System::Boolean IsLocalPlayerFiveDimNoWayPoint()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISLOCALPLAYERFIVEDIMNOWAYPOINT_OFFSET))();
		}

		static ::System::Boolean IsFiveDimLevelNoWayPoint(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsFiveDimLevelNoWayPoint_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsFiveDimLevelNoWayPoint_2(::Class_1_EBB880A8D2C9B0D4* a1)
		{
			return ((::System::Boolean(*)(::Class_1_EBB880A8D2C9B0D4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_2_OFFSET))(a1);
		}

		static ::System::Boolean _IsFiveDimNoWayPoint(::RPG::GameCore::FiveDimGameplayMode a1, ::RPG::GameCore::HoyoTagContainer* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FiveDimGameplayMode, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__ISFIVEDIMNOWAYPOINT_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetFiveDimEntranceList(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*& a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTRANCELIST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsPlayerInfoValid(::Struct_2_F01DF3CDCF3FD7AC a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::Struct_2_F01DF3CDCF3FD7AC, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISPLAYERINFOVALID_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseTaskContainerTarget(::System::UInt32& a1, ::System::UInt32& a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TRYPARSETASKCONTAINERTARGET_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseContainerIDAndFDEntityID(::System::UInt32& a1, ::System::UInt32& a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TRYPARSECONTAINERIDANDFDENTITYID_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FiveDimPropMoveConfig* GetPropMoveConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FiveDimPropMoveConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETPROPMOVECONFIG_OFFSET))(a1);
		}

		static ::System::Boolean _IsPlayerInfoValidByRuntime(::Struct_2_F01DF3CDCF3FD7AC a1, ::RPG::Client::FiveDimGameInstance* a2, ::System::String*& a3)
		{
			return ((::System::Boolean(*)(::Struct_2_F01DF3CDCF3FD7AC, ::RPG::Client::FiveDimGameInstance*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__ISPLAYERINFOVALIDBYRUNTIME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _IsPlayerInfoValidByData(::Struct_2_F01DF3CDCF3FD7AC a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::Struct_2_F01DF3CDCF3FD7AC, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__ISPLAYERINFOVALIDBYDATA_OFFSET))(a1, a2);
		}

		static ::System::Void GetGravityWalkBoardBasicInfo(::RPG::GameCore::FiveDimGravityWalkBoardConfig* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimGravityWalkBoardConfig*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETGRAVITYWALKBOARDBASICINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean OBBFullyContainsOBB(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_OBBFULLYCONTAINSOBB_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean OBBIntersectsNoAlloc(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::Il2CppArray<::UnityEngine::Vector3>* a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_OBBINTERSECTSNOALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
