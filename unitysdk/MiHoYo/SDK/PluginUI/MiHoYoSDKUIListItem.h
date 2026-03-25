#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUILISTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x85707F0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIListItem_TypeDefinitionIndex = 37557;

	class MiHoYoSDKUIListItem : public ::System::Object
	{
	public:
		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* deleteInvocation; // 0x10
		::System::String* itemData; // 0x18
		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* invocation; // 0x20
		::System::Boolean isSelected; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUILISTITEM__CTOR_OFFSET))(this);
		}
	};
}
