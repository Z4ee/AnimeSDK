#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_463;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET UNITYSDK_OFFSET(0x19FF3530)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x19FF34E0)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET UNITYSDK_OFFSET(0x19FF3580)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET UNITYSDK_OFFSET(0x19FF35D0)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF36D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutScenePerformConfig_TypeDefinitionIndex = 57849;

	class CutScenePerformConfig : public ::System::Object
	{
	public:
		::System::String* CameraShotKey; // 0x10
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x18
		::System::Boolean IsGroupShotData; // 0x19
		::System::Single FlowCanvasDelayTime; // 0x1C
		::System::Single InputMuteDelayTime; // 0x20
		::System::Single ShowUIDelayTime; // 0x24

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

		::System::Void MoleMole_Config_IScenePerformConfig_Setup(::Class_0_16E4307DCC419505_463* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_463*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET))(this, node);
		}
	};
}
