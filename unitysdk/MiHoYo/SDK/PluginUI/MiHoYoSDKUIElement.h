#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F61C0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIElement_TypeDefinitionIndex = 44236;

	class MiHoYoSDKUIElement : public ::System::Object
	{
	public:
		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* invocation; // 0x10
		::System::String* hintText; // 0x18
		::System::Action_1<::System::String*>* updateTextAction; // 0x20
		::System::String* text; // 0x28
		::System::String* id; // 0x30
		::System::Boolean isChecked; // 0x38
		::System::Boolean visible; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIELEMENT__CTOR_OFFSET))(this);
		}
	};
}
