#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/PluginUIBridgeElement.h"

namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeListItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19E82B00)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIBridgeList_TypeDefinitionIndex = 9107;

	class PluginUIBridgeList : public ::MiHoYo::SDK::PluginUI::PluginUIBridgeElement
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::PluginUIBridgeListItem*>* items; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGELIST__CTOR_OFFSET))(this);
		}
	};
}
