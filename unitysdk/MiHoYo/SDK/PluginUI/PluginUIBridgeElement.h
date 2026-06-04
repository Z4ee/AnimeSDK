#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x183D66D0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIBridgeElement_TypeDefinitionIndex = 8818;

	class PluginUIBridgeElement : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::System::Int32 action_index; // 0x18
		::System::String* text; // 0x20
		::System::String* hint_text; // 0x28
		::System::Boolean visible; // 0x30
		::System::Boolean is_checked; // 0x31
		::System::Int16 type; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGEELEMENT__CTOR_OFFSET))(this);
		}
	};
}
