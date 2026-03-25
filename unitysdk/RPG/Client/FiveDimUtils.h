#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/Struct_2_F01DF3CDCF3FD7AC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_98;
class Class_1_4393199F378B6118;
class Class_1_99D526797741C2F2;
class Class_1_EBB880A8D2C9B0D4;
class Class_2_9DD8A46984F1AFFD;
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

#define RPG_CLIENT_FIVEDIMUTILS_EVALUATEID_OFFSET UNITYSDK_OFFSET(0x96F7700)
#define RPG_CLIENT_FIVEDIMUTILS_GETBAKEDLEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x96F76A0)
#define RPG_CLIENT_FIVEDIMUTILS_GETBAKEDPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0x96DEA10)
#define RPG_CLIENT_FIVEDIMUTILS_GETENTITYNAVNODEINFO_OFFSET UNITYSDK_OFFSET(0x96F8260)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYBYENTITYID_OFFSET UNITYSDK_OFFSET(0x96F7BB0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCHEATSHEET_1_OFFSET UNITYSDK_OFFSET(0x96F8090)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCHEATSHEET_OFFSET UNITYSDK_OFFSET(0x96F7F10)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCONFIGWORLDPOSITIONBYENTITYID_OFFSET UNITYSDK_OFFSET(0x96F7FD0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYWORLDPOSITIONBYENTITYID_OFFSET UNITYSDK_OFFSET(0x96F7D20)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTRANCELIST_OFFSET UNITYSDK_OFFSET(0x96F9610)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCHEATSHEET_1_OFFSET UNITYSDK_OFFSET(0x96F8A70)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCHEATSHEET_OFFSET UNITYSDK_OFFSET(0x96F89D0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x96F74D0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELUINTLENGTH_OFFSET UNITYSDK_OFFSET(0x96F8B00)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMMANAGER_OFFSET UNITYSDK_OFFSET(0x96F6FA0)
#define RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMPLAYERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x96F8540)
#define RPG_CLIENT_FIVEDIMUTILS_GETGRAVITYWALKBOARDBASICINFO_OFFSET UNITYSDK_OFFSET(0x96FA3C0)
#define RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x96E6E50)
#define RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x96F71A0)
#define RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x96F7040)
#define RPG_CLIENT_FIVEDIMUTILS_GETLITTLEGAMELEVELINFO_OFFSET UNITYSDK_OFFSET(0x96F7300)
#define RPG_CLIENT_FIVEDIMUTILS_GETLOCALPLAYERNAVNODEINFO_OFFSET UNITYSDK_OFFSET(0x96F8630)
#define RPG_CLIENT_FIVEDIMUTILS_GETPLAYER3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x96E99A0)
#define RPG_CLIENT_FIVEDIMUTILS_GETPLAYERWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x96F8450)
#define RPG_CLIENT_FIVEDIMUTILS_GETPROPMOVECONFIG_OFFSET UNITYSDK_OFFSET(0x96FA160)
#define RPG_CLIENT_FIVEDIMUTILS_HASGAMEPLAYMODE_OFFSET UNITYSDK_OFFSET(0x96F7910)
#define RPG_CLIENT_FIVEDIMUTILS_HIDEALLHOYOGROUPBYFIVEDIM_OFFSET UNITYSDK_OFFSET(0x96E2020)
#define RPG_CLIENT_FIVEDIMUTILS_ISEXCLUSIVEGAME_OFFSET UNITYSDK_OFFSET(0x96E1FB0)
#define RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_1_OFFSET UNITYSDK_OFFSET(0x96F9530)
#define RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_2_OFFSET UNITYSDK_OFFSET(0x96F94B0)
#define RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_OFFSET UNITYSDK_OFFSET(0x96F9300)
#define RPG_CLIENT_FIVEDIMUTILS_ISLOCALPLAYERFIVEDIMNOWAYPOINT_OFFSET UNITYSDK_OFFSET(0x96F8EA0)
#define RPG_CLIENT_FIVEDIMUTILS_ISPLAYERINFOVALID_OFFSET UNITYSDK_OFFSET(0x96E7010)
#define RPG_CLIENT_FIVEDIMUTILS_OBBINTERSECTSNOALLOC_OFFSET UNITYSDK_OFFSET(0x96FA5B0)
#define RPG_CLIENT_FIVEDIMUTILS_PREPAREFIVEDIMMISSIONDATA_1_OFFSET UNITYSDK_OFFSET(0x96F8D60)
#define RPG_CLIENT_FIVEDIMUTILS_PREPAREFIVEDIMMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x96F8C20)
#define RPG_CLIENT_FIVEDIMUTILS_RECOVERSHOWALLHOYOGROUPBYFIVEDIM_OFFSET UNITYSDK_OFFSET(0x96E2340)
#define RPG_CLIENT_FIVEDIMUTILS_SETFIVEDIMTELEPORTLOCK_OFFSET UNITYSDK_OFFSET(0x96F7AF0)
#define RPG_CLIENT_FIVEDIMUTILS_SHOULDSAVEGAMESTATEONSERVER_OFFSET UNITYSDK_OFFSET(0x96DB1F0)
#define RPG_CLIENT_FIVEDIMUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET UNITYSDK_OFFSET(0x96F77D0)
#define RPG_CLIENT_FIVEDIMUTILS_SHOWGAMEMAINPAGE_1_OFFSET UNITYSDK_OFFSET(0x96E35C0)
#define RPG_CLIENT_FIVEDIMUTILS_SHOWGAMEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x96F45E0)
#define RPG_CLIENT_FIVEDIMUTILS_TOHORIZONTALFOV_OFFSET UNITYSDK_OFFSET(0x96F7860)
#define RPG_CLIENT_FIVEDIMUTILS_TOLITTLEGAMERUNTIMEBUTTON_OFFSET UNITYSDK_OFFSET(0x96F8130)
#define RPG_CLIENT_FIVEDIMUTILS_TRYGETINSTANCE_OFFSET UNITYSDK_OFFSET(0x96F70E0)
#define RPG_CLIENT_FIVEDIMUTILS_TRYPARSECONTAINERIDANDFDENTITYID_OFFSET UNITYSDK_OFFSET(0x96F9FE0)
#define RPG_CLIENT_FIVEDIMUTILS_TRYPARSETASKCONTAINERTARGET_OFFSET UNITYSDK_OFFSET(0x96F9E60)
#define RPG_CLIENT_FIVEDIMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x96FB390)
#define RPG_CLIENT_FIVEDIMUTILS__ISFIVEDIMNOWAYPOINT_OFFSET UNITYSDK_OFFSET(0x96F9050)
#define RPG_CLIENT_FIVEDIMUTILS__ISPLAYERINFOVALIDBYDATA_OFFSET UNITYSDK_OFFSET(0x96F99E0)
#define RPG_CLIENT_FIVEDIMUTILS__ISPLAYERINFOVALIDBYRUNTIME_OFFSET UNITYSDK_OFFSET(0x96F9D70)
#define RPG_CLIENT_FIVEDIMUTILS__SHOWGAMEUI_OFFSET UNITYSDK_OFFSET(0x96F7960)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimUtils_TypeDefinitionIndex = 48906;

	class FiveDimUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimPropMoveConfig*>** StaticGet__PropMoveConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimPropMoveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimUtils_TypeDefinitionIndex)->GetStaticField(0x7D70);
		}
		static ::RPG::GameCore::FiveDimBakedPresetConfig** StaticGet__BakedPresetConfig()
		{
			return (::RPG::GameCore::FiveDimBakedPresetConfig**)Il2CppClass::FromTypeDefinitionIndex(FiveDimUtils_TypeDefinitionIndex)->GetStaticField(0x7D78);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimGameplayMode, ::System::String*>** StaticGet__GamePageMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimGameplayMode, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimUtils_TypeDefinitionIndex)->GetStaticField(0x7D80);
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

		static ::System::Boolean GetInstance(::RPG::GameCore::TaskContext* taskContext, ::RPG::Client::FiveDimGameInstance*& outInstance, ::System::Boolean ignoreError)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::Client::FiveDimGameInstance*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_OFFSET))(taskContext, outInstance, ignoreError);
		}

		static ::System::Boolean GetInstance_1(::RPG::Client::FiveDimGameInstance*& outInstance, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::Boolean outputError)
		{
			return ((::System::Boolean(*)(::RPG::Client::FiveDimGameInstance*&, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_1_OFFSET))(outInstance, groupID, instanceID, outputError);
		}

		static ::RPG::Client::FiveDimGameInstance* GetInstance_2(::Class_0_16E4307DCC419505_98* entity)
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::Class_0_16E4307DCC419505_98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETINSTANCE_2_OFFSET))(entity);
		}

		static ::System::Boolean TryGetInstance(::RPG::GameCore::TaskContext* taskContext, ::RPG::Client::FiveDimGameInstance*& outInstance)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::Client::FiveDimGameInstance*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TRYGETINSTANCE_OFFSET))(taskContext, outInstance);
		}

		static ::System::Boolean GetLittleGameLevelInfo(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::GameCore::LevelLittleGameInfo*& gameInfo, ::RPG::GameCore::LittleGameLevelConfig*& levelConfig)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*&, ::RPG::GameCore::LittleGameLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETLITTLEGAMELEVELINFO_OFFSET))(groupID, instanceID, gameInfo, levelConfig);
		}

		static ::System::Boolean GetFiveDimLevelConfig(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::GameCore::LittleGameLevelConfig*& levelConfig, ::RPG::GameCore::FiveDimBakedLevelConfig*& bakedLevelConfig)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameLevelConfig*&, ::RPG::GameCore::FiveDimBakedLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCONFIG_OFFSET))(groupID, instanceID, levelConfig, bakedLevelConfig);
		}

		static ::System::String* GetBakedLevelConfigPath(::System::String* levelConfigPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETBAKEDLEVELCONFIGPATH_OFFSET))(levelConfigPath);
		}

		static ::System::UInt32 EvaluateID(::RPG::GameCore::TaskContext* context, ::RPG::GameCore::DynamicString* idString)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_EVALUATEID_OFFSET))(context, idString);
		}

		static ::System::Boolean ShouldStopMovementSync()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET))();
		}

		static ::System::Boolean ShouldSaveGameStateOnServer(::RPG::GameCore::LittleGameLevelConfig* levelConfig)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SHOULDSAVEGAMESTATEONSERVER_OFFSET))(levelConfig);
		}

		static ::System::Boolean IsExclusiveGame(::RPG::GameCore::LevelLittleGameInfo* gameInfo, ::System::Boolean& showSameGroupEntities)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelLittleGameInfo*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISEXCLUSIVEGAME_OFFSET))(gameInfo, showSameGroupEntities);
		}

		static ::System::Void HideAllHoyoGroupByFiveDim(::RPG::Client::FiveDimGameInstance* instance, ::System::Boolean ignoreSelfGroup)
		{
			return ((::System::Void(*)(::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_HIDEALLHOYOGROUPBYFIVEDIM_OFFSET))(instance, ignoreSelfGroup);
		}

		static ::System::Void RecoverShowAllHoyoGroupByFiveDim()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_RECOVERSHOWALLHOYOGROUPBYFIVEDIM_OFFSET))();
		}

		static ::System::Boolean GetPlayer3DTransform(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETPLAYER3DTRANSFORM_OFFSET))(position, rotation);
		}

		static ::System::Single ToHorizontalFOV(::System::Single vFOV)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TOHORIZONTALFOV_OFFSET))(vFOV);
		}

		static ::RPG::GameCore::FiveDimBakedPresetConfig* GetBakedPresetConfig()
		{
			return ((::RPG::GameCore::FiveDimBakedPresetConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETBAKEDPRESETCONFIG_OFFSET))();
		}

		static ::System::Void ShowGameMainPage(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SHOWGAMEMAINPAGE_OFFSET))(groupID, instanceID);
		}

		static ::System::Void ShowGameMainPage_1(::RPG::GameCore::FiveDimGameplayMode gameMode)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SHOWGAMEMAINPAGE_1_OFFSET))(gameMode);
		}

		static ::System::Void SetFiveDimTeleportLock(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_SETFIVEDIMTELEPORTLOCK_OFFSET))(isLock);
		}

		static ::System::Void _ShowGameUI(::System::String* pageName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__SHOWGAMEUI_OFFSET))(pageName);
		}

		static ::System::Boolean HasGameplayMode(::RPG::GameCore::FiveDimGameplayMode mode, ::RPG::GameCore::FiveDimGameplayMode modeToQuery)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FiveDimGameplayMode, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_HASGAMEPLAYMODE_OFFSET))(mode, modeToQuery);
		}

		static ::Class_2_9DD8A46984F1AFFD* GetFiveDimEntityByEntityID(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID, ::System::Boolean outputError)
		{
			return ((::Class_2_9DD8A46984F1AFFD*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYBYENTITYID_OFFSET))(groupID, instanceID, entityID, outputError);
		}

		static ::System::Boolean GetFiveDimEntityWorldPositionByEntityID(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID, ::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYWORLDPOSITIONBYENTITYID_OFFSET))(groupID, instanceID, entityID, position);
		}

		static ::System::Boolean GetFiveDimEntityConfigWorldPositionByEntityID(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID, ::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCONFIGWORLDPOSITIONBYENTITYID_OFFSET))(mapData, groupID, instanceID, entityID, position);
		}

		static ::RPG::Client::LittleGame::LittleGameRuntimeButton* ToLittleGameRuntimeButton(::RPG::GameCore::PropButtonConfig* buttonConfig)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::RPG::GameCore::PropButtonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TOLITTLEGAMERUNTIMEBUTTON_OFFSET))(buttonConfig);
		}

		static ::Class_1_4393199F378B6118* GetEntityNavNodeInfo(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID)
		{
			return ((::Class_1_4393199F378B6118*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETENTITYNAVNODEINFO_OFFSET))(mapData, groupID, instanceID, entityID);
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

		static ::Class_1_EBB880A8D2C9B0D4* GetFiveDimLevelCheatSheet(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::Class_1_EBB880A8D2C9B0D4*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCHEATSHEET_OFFSET))(groupID, instanceID);
		}

		static ::Class_1_EBB880A8D2C9B0D4* GetFiveDimLevelCheatSheet_1(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::Class_1_EBB880A8D2C9B0D4*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELCHEATSHEET_1_OFFSET))(mapData, groupID, instanceID);
		}

		static ::Class_1_99D526797741C2F2* GetFiveDimEntityCheatSheet(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID)
		{
			return ((::Class_1_99D526797741C2F2*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCHEATSHEET_OFFSET))(groupID, instanceID, entityID);
		}

		static ::Class_1_99D526797741C2F2* GetFiveDimEntityCheatSheet_1(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID)
		{
			return ((::Class_1_99D526797741C2F2*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTITYCHEATSHEET_1_OFFSET))(mapData, groupID, instanceID, entityID);
		}

		static ::System::Single GetFiveDimLevelUintLength(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMLEVELUINTLENGTH_OFFSET))(groupID, instanceID);
		}

		static ::RPG::Client::Promises::IPromise* PrepareFiveDimMissionData(::RPG::Client::MapDef* mapDef)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_PREPAREFIVEDIMMISSIONDATA_OFFSET))(mapDef);
		}

		static ::RPG::Client::Promises::IPromise* PrepareFiveDimMissionData_1(::RPG::Client::NavMap::IMapDataSource* mapDataSource)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_PREPAREFIVEDIMMISSIONDATA_1_OFFSET))(mapDataSource);
		}

		static ::System::Boolean IsLocalPlayerFiveDimNoWayPoint()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISLOCALPLAYERFIVEDIMNOWAYPOINT_OFFSET))();
		}

		static ::System::Boolean IsFiveDimLevelNoWayPoint(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_OFFSET))(mapData, groupID, instanceID);
		}

		static ::System::Boolean IsFiveDimLevelNoWayPoint_1(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_1_OFFSET))(groupID, instanceID);
		}

		static ::System::Boolean IsFiveDimLevelNoWayPoint_2(::Class_1_EBB880A8D2C9B0D4* levelCheatSheet)
		{
			return ((::System::Boolean(*)(::Class_1_EBB880A8D2C9B0D4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISFIVEDIMLEVELNOWAYPOINT_2_OFFSET))(levelCheatSheet);
		}

		static ::System::Boolean _IsFiveDimNoWayPoint(::RPG::GameCore::FiveDimGameplayMode gameplayMode, ::RPG::GameCore::HoyoTagContainer* levelTags)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FiveDimGameplayMode, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__ISFIVEDIMNOWAYPOINT_OFFSET))(gameplayMode, levelTags);
		}

		static ::System::Boolean GetFiveDimEntranceList(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*& entranceList)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETFIVEDIMENTRANCELIST_OFFSET))(mapData, groupID, instanceID, entranceList);
		}

		static ::System::Boolean IsPlayerInfoValid(::Struct_2_F01DF3CDCF3FD7AC playerInfo, ::System::String*& invalidMessage)
		{
			return ((::System::Boolean(*)(::Struct_2_F01DF3CDCF3FD7AC, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_ISPLAYERINFOVALID_OFFSET))(playerInfo, invalidMessage);
		}

		static ::System::Boolean TryParseTaskContainerTarget(::System::UInt32& groupID, ::System::UInt32& containerID, ::System::String* targetStr)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TRYPARSETASKCONTAINERTARGET_OFFSET))(groupID, containerID, targetStr);
		}

		static ::System::Boolean TryParseContainerIDAndFDEntityID(::System::UInt32& containerID, ::System::UInt32& entryEntityID, ::System::String* targetStr)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_TRYPARSECONTAINERIDANDFDENTITYID_OFFSET))(containerID, entryEntityID, targetStr);
		}

		static ::RPG::GameCore::FiveDimPropMoveConfig* GetPropMoveConfig(::System::UInt32 id)
		{
			return ((::RPG::GameCore::FiveDimPropMoveConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETPROPMOVECONFIG_OFFSET))(id);
		}

		static ::System::Boolean _IsPlayerInfoValidByRuntime(::Struct_2_F01DF3CDCF3FD7AC playerInfo, ::RPG::Client::FiveDimGameInstance* instance, ::System::String*& invalidMessage)
		{
			return ((::System::Boolean(*)(::Struct_2_F01DF3CDCF3FD7AC, ::RPG::Client::FiveDimGameInstance*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__ISPLAYERINFOVALIDBYRUNTIME_OFFSET))(playerInfo, instance, invalidMessage);
		}

		static ::System::Boolean _IsPlayerInfoValidByData(::Struct_2_F01DF3CDCF3FD7AC playerInfo, ::System::String*& invalidMessage)
		{
			return ((::System::Boolean(*)(::Struct_2_F01DF3CDCF3FD7AC, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS__ISPLAYERINFOVALIDBYDATA_OFFSET))(playerInfo, invalidMessage);
		}

		static ::System::Void GetGravityWalkBoardBasicInfo(::RPG::GameCore::FiveDimGravityWalkBoardConfig* config, ::UnityEngine::Vector3& directionStart, ::UnityEngine::Vector3& directionEnd, ::System::Single& angle)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimGravityWalkBoardConfig*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_GETGRAVITYWALKBOARDBASICINFO_OFFSET))(config, directionStart, directionEnd, angle);
		}

		static ::System::Boolean OBBIntersectsNoAlloc(::UnityEngine::Bounds aBounds, ::UnityEngine::Vector3 aPos, ::UnityEngine::Quaternion aRot, ::UnityEngine::Bounds bBounds, ::UnityEngine::Vector3 bPos, ::UnityEngine::Quaternion bRot, ::Il2CppArray<::UnityEngine::Vector3>* axes)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMUTILS_OBBINTERSECTSNOALLOC_OFFSET))(aBounds, aPos, aRot, bBounds, bPos, bRot, axes);
		}
	};
}
