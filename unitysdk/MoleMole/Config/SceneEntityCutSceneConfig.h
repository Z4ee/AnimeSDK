#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE980A10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneEntityCutSceneConfig_TypeDefinitionIndex = 47899;

	class SceneEntityCutSceneConfig : public ::System::Object
	{
	public:
		::System::String* CameraShotKey; // 0x10
		::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>* AnimParams; // 0x18
		::System::Single InputMuteDelayTime; // 0x20
		::System::Single FlowCanvasDelayTime; // 0x24
		::System::Boolean EntityVisible; // 0x28
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x29
		::System::Boolean IsGroupShotData; // 0x2A
		::System::Single ShowUIDelayTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG__CTOR_OFFSET))(this);
		}
	};
}
