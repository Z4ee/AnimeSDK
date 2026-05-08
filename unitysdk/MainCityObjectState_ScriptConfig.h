#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MainCityObjectActiveState.h"
#include "unitysdk/SceneObjectType.h"
#include "unitysdk/System/Object.h"

class ComputerGroup;
class LightGroup;
class ModifyMaterialProperty;
class SceneObjectAreaCheckDoEnable;
class SceneObjectAreaCheckPlayAni;
class SceneObjectLightProxySetting;
class SceneObjectPlatModelConfig;
class SceneObjectTrafficLightConfig;
class ScreenPlayData;
class SequencePlay;
class SingleScreen;
class TV_Wall;

#define MAINCITYOBJECTSTATE_SCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDB833C0)

inline static constexpr unsigned int MainCityObjectState_ScriptConfig_TypeDefinitionIndex = 48867;

class MainCityObjectState_ScriptConfig : public ::System::Object
{
public:
	::SceneObjectType sceneObjectType; // 0x10
	::TV_Wall* tvWallConfig; // 0x18
	::ComputerGroup* computerGroup; // 0x20
	::SingleScreen* singleScreen; // 0x28
	::LightGroup* lightGroup; // 0x30
	::MainCityObjectActiveState showMainCityObject; // 0x38
	::SequencePlay* sequencePlay; // 0x40
	::ModifyMaterialProperty* ModifyMaterialProperty; // 0x48
	::SceneObjectLightProxySetting* LightProxySetting; // 0x50
	::SceneObjectTrafficLightConfig* trafficControll; // 0x58
	::SceneObjectPlatModelConfig* PlatModelConfig; // 0x60
	::SceneObjectAreaCheckPlayAni* AreaCheckPlayAni; // 0x68
	::SceneObjectAreaCheckDoEnable* AreaCheckEnableGameObject; // 0x70
	::ScreenPlayData* transitionData; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINCITYOBJECTSTATE_SCRIPTCONFIG__CTOR_OFFSET))(this);
	}
};
