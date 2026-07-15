#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraModuleType_TypeDefinitionIndex = 66564;

	enum class CameraModuleType : ::System::Int32
	{
		Unknow = 0,
		Initialize = 1,
		Fight = 2,
		OffsetByAimY = 3,
		CloseupShot = 4,
		ShotAnim = 5,
		Result = 6,
		SmoothResult = 7,
		Shake = 8,
		Freelook = 9,
		Freelook3rd = 10,
		LookAt = 11,
		Roaming = 12,
		Zoom = 13,
		Protect = 14,
		AimOffsetByDistance = 15,
		HideEntity = 16,
		DitherClose = 17,
		CameraModuleMazeBattleTransition = 18,
		DOFFocus = 19,
		TopView = 20,
		ProjectionBlend = 21,
		VCamControl = 22,
		MonoDelegate = 23,
		LittleGame = 24,
		Count = 25,
	};
}
