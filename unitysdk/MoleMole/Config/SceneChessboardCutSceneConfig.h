#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/MoleMole/Config/SceneChessboardCutSceneConfig_BodySize.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePeformAnimatorParam; }

#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB77C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneChessboardCutSceneConfig_TypeDefinitionIndex = 47583;

	class SceneChessboardCutSceneConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>* AnimParams; // 0x10
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x18
		::System::Single ShowUIDelayTime; // 0x1C
		::MoleMole::Config::SceneChessboardCutSceneConfig_BodySize bodySize; // 0x20
		::System::Single FlowCanvasDelayTime; // 0x24
		::System::Single cutSceneAjustZ; // 0x28
		::System::Single cutSceneAjustX; // 0x2C
		::System::Single cutSceneAjustHeight; // 0x30
		::System::Single InputMuteDelayTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG__CTOR_OFFSET))(this);
		}
	};
}
