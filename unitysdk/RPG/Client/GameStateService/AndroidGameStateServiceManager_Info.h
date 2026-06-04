#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager_Info_TypeDefinitionIndex = 70496;

	enum class AndroidGameStateServiceManager_Info : ::System::Int32
	{
		T_CriticalThread = 1001,
		T_CriticalThreadPriority = 1002,
		T_GcMarkBegin = 1003,
		T_GcMarkEnd = 1004,
		T_GcReclaimBegin = 1003,
		T_GcReclaimEnd = 1004,
		E_PlayerEnterLoading = 2001,
		E_PlayerEnterBattle = 2002,
		E_PlayerEnterAdventure = 2003,
		E_PlayerVideo = 2004,
		E_PlayerTalk = 2005,
		E_PlayerUlt = 2006,
		E_SceneCameraDisable = 2007,
		E_PlayerSceneInfo = 2008,
		E_PlayerCharacterInfo = 2100,
		E_PlayerCharacterMaxLevelAchieved = 2101,
		E_UnlockAchievement = 2102,
		E_PhoneMessageNotification = 2103,
		E_PlayerMorphed = 2104,
		E_PlayerAmbushed = 2105,
		E_PlayerUltraDetail = 2106,
		G_TargetFrame = 3001,
		G_RenderResolution = 3002,
		G_AntiAliasing = 3003,
		G_VSync = 3004,
		G_GraphicsAPI = 3005,
		G_BloomQuality = 3006,
		G_ReflectionQuality = 3007,
		G_EnvDetailQuality = 3008,
		G_CharacterQuality = 3009,
		G_LightQuality = 3010,
		G_ShadowQuality = 3011,
		G_VFXQuality = 3012,
		G_BattleVFXResolutionQuality = 3013,
		G_NumericalResolution = 3014,
		A_Pause = 4001,
	};
}
