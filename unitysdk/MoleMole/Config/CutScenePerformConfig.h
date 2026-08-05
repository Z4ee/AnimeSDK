#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1B7FB8C0)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1B7FB870)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1B7FB910)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET UNITYSDK_OFFSET(0x1B7FB960)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FBA60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutScenePerformConfig_TypeDefinitionIndex = 63500;

	class CutScenePerformConfig : public ::System::Object
	{
	public:
		::System::String* CameraShotKey; // 0x10
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x18
		::System::Boolean IsGroupShotData; // 0x19
		::System::Single InputMuteDelayTime; // 0x1C
		::System::Single ShowUIDelayTime; // 0x20
		::System::Single FlowCanvasDelayTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_inputMuteDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_flowCanvasDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_showUIDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET))(this);
		}

		::System::Void MoleMole_Config_IScenePerformConfig_Setup(::Class_0_16E4307DCC419505_416* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_416*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET))(this, node);
		}
	};
}
