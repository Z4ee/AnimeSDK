#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace SRDebugger { class Settings; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class CanvasScaler; }

#define SRDEBUGGER_UI_OTHER_CONFIGURECANVASFROMSETTINGS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E69A410)
#define SRDEBUGGER_UI_OTHER_CONFIGURECANVASFROMSETTINGS_SETTINGSONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E69A4E0)
#define SRDEBUGGER_UI_OTHER_CONFIGURECANVASFROMSETTINGS_START_OFFSET UNITYSDK_OFFSET(0x1E69A180)
#define SRDEBUGGER_UI_OTHER_CONFIGURECANVASFROMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69A540)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int ConfigureCanvasFromSettings_TypeDefinitionIndex = 37307;

	class ConfigureCanvasFromSettings : public ::SRF::SRMonoBehaviour
	{
	public:
		::UnityEngine::Canvas* _canvas; // 0x48
		::UnityEngine::UI::CanvasScaler* _canvasScaler; // 0x50
		::System::Single _originalScale; // 0x58
		::System::Single _lastSetScale; // 0x5C
		::SRDebugger::Settings* _settings; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONFIGURECANVASFROMSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONFIGURECANVASFROMSETTINGS_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONFIGURECANVASFROMSETTINGS_ONDESTROY_OFFSET))(this);
		}

		::System::Void SettingsOnPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONFIGURECANVASFROMSETTINGS_SETTINGSONPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}
	};
}
