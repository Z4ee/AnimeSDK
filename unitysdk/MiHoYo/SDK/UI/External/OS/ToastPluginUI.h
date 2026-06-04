#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_GET_ONTOASTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18445F10)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_SET_ONTOASTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18445F00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x18445F20)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18446380)
#define MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x18446390)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int ToastPluginUI_TypeDefinitionIndex = 8340;

	class ToastPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnToastCompleted_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Void set_OnToastCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_SET_ONTOASTCOMPLETED_OFFSET))(this, a1);
		}

		::System::Action* get_OnToastCompleted()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_GET_ONTOASTCOMPLETED_OFFSET))(this);
		}

		::System::Void Show(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI_SHOW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Show_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_TOASTPLUGINUI__SHOW_B__4_0_OFFSET))(this);
		}
	};
}
