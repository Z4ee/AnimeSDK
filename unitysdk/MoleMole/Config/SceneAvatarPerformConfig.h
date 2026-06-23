#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig_Item.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_463;
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x157D18C0)
#define MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET UNITYSDK_OFFSET(0x157D1AC0)
#define MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x157D1A70)
#define MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET UNITYSDK_OFFSET(0x157D1B10)
#define MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET UNITYSDK_OFFSET(0x157D1B60)
#define MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157D1C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneAvatarPerformConfig_TypeDefinitionIndex = 82691;

	class SceneAvatarPerformConfig : public ::System::Object
	{
	public:
		::System::String* CameraShotKey; // 0x10
		::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* AnimParams; // 0x18
		::System::Boolean EntityVisible; // 0x20
		::System::Boolean IsGroupShotData; // 0x21
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x22
		::System::Single ShowUIDelayTime; // 0x24
		::System::Single InputMuteDelayTime; // 0x28
		::System::Single FlowCanvasDelayTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::Config::SceneEntityCutSceneConfig* config, ::MoleMole::Level::OverrideScenePerformDelayConfig_Item overrideCfg)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*, ::MoleMole::Level::OverrideScenePerformDelayConfig_Item))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_INIT_OFFSET))(this, config, overrideCfg);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_inputMuteDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_flowCanvasDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_showUIDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET))(this);
		}

		::System::Void MoleMole_Config_IScenePerformConfig_Setup(::Class_0_16E4307DCC419505_463* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_463*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET))(this, node);
		}
	};
}
