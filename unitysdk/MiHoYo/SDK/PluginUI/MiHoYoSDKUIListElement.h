#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIElement.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIListItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUILISTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26DF70)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIListElement_TypeDefinitionIndex = 37252;

	class MiHoYoSDKUIListElement : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement
	{
	public:
		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* itemsInvocation; // 0x40
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*>* lstItem; // 0x48
		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* itemsDeleteInvocation; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUILISTELEMENT__CTOR_OFFSET))(this);
		}
	};
}
