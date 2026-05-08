#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int SceneObjectType_TypeDefinitionIndex = 51033;

enum class SceneObjectType : ::System::Int32
{
	AreaCheckEnableGameObject = 11,
	None = 12,
	SequencePlay = 5,
	MainCityObject = 4,
	TV_Wall = 1,
	Single_Screen = 2,
	TrafficLight = 8,
	LightGroup = 3,
	PlatModel = 9,
	ModifyMaterialProperty = 6,
	SceneObjectProxySetting = 7,
	AreaCheckPlayAni = 10,
	ComputerGroup = 0,
};
