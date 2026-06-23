#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_GET_ONHIDECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C580DA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_SET_ONHIDECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C580DB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x1C580DC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5814A0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int TipsbarPluginUI_TypeDefinitionIndex = 20176;

	class TipsbarPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnHideCompleted_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnHideCompleted()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_GET_ONHIDECOMPLETED_OFFSET))(this);
		}

		::System::Void set_OnHideCompleted(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_SET_ONHIDECOMPLETED_OFFSET))(this, value);
		}

		::System::Void Show(::System::String* message, ::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_SHOW_OFFSET))(this, message, imagePath);
		}
	};
}
