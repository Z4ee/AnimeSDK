#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SceneChessboardCutSceneConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }

#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE980590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneAvatarCutSceneConfig_TypeDefinitionIndex = 83006;

	class SceneAvatarCutSceneConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::SceneEntityCutSceneConfig* NoramlCutSceneConfig; // 0x10
		::MoleMole::Config::SceneChessboardCutSceneConfig* ChessBoardBattleCutSceneConfig; // 0x18
		::MoleMole::Config::SceneChessboardCutSceneConfig* SimplifyCutSceneConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG__CTOR_OFFSET))(this);
		}
	};
}
