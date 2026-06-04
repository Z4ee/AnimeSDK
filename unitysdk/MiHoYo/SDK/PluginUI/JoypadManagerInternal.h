#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1EA2C0)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_ISTOP_OFFSET UNITYSDK_OFFSET(0xA1EAB40)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_POPUI_OFFSET UNITYSDK_OFFSET(0xA1EA7A0)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_PUSHUI_OFFSET UNITYSDK_OFFSET(0xA1EA360)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F4160)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int JoypadManagerInternal_TypeDefinitionIndex = 44135;

	class JoypadManagerInternal : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::JoypadManagerInternal** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::JoypadManagerInternal**)Il2CppClass::FromTypeDefinitionIndex(JoypadManagerInternal_TypeDefinitionIndex)->GetStaticField(0x12B20);
		}
		::System::Collections::Generic::List_1<::System::String*>* m_lstUIStack; // 0x10
		::System::String* m_strTopUI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::JoypadManagerInternal* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::JoypadManagerInternal*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_INSTANCE_OFFSET))();
		}

		::System::Void PushUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_PUSHUI_OFFSET))(this, a1);
		}

		::System::Void PopUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_POPUI_OFFSET))(this, a1);
		}

		::System::Boolean IsTop(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_ISTOP_OFFSET))(this, a1);
		}
	};
}
