#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x1C475C80)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1C475E50)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1C475E00)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1C475EA0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET UNITYSDK_OFFSET(0x1C475EF0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C476170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneBossPeformConfig_TypeDefinitionIndex = 63509;

	class SceneBossPeformConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* AnimParams; // 0x10
		::System::String* CameraShotKey; // 0x18
		::System::Single FlowCanvasDelayTime; // 0x20
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x24
		::System::Boolean IsGroupShotData; // 0x25
		::System::Boolean EntityVisible; // 0x26
		::System::Single ShowUIDelayTime; // 0x28
		::System::Single InputMuteDelayTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::Config::SceneEntityCutSceneConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_INIT_OFFSET))(this, config);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_inputMuteDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_flowCanvasDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_showUIDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET))(this);
		}

		::System::Void MoleMole_Config_IScenePerformConfig_Setup(::Class_0_16E4307DCC419505_416* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_416*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET))(this, node);
		}
	};
}
