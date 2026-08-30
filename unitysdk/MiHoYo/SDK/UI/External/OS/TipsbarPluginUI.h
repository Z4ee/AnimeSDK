#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_GET_ONHIDECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B9D3B50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_SET_ONHIDECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B9D3B60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x1B9D3B70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D42D0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int TipsbarPluginUI_TypeDefinitionIndex = 8371;

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

		::System::Void set_OnHideCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_SET_ONHIDECOMPLETED_OFFSET))(this, a1);
		}

		::System::Void Show(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TIPSBARPLUGINUI_SHOW_OFFSET))(this, a1, a2);
		}
	};
}
