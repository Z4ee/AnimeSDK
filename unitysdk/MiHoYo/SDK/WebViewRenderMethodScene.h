#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WEBVIEWRENDERMETHODSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x16044010)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewRenderMethodScene_TypeDefinitionIndex = 6900;

	class WebViewRenderMethodScene : public ::System::Object
	{
	public:
		::System::String* render_method_experiment_id; // 0x10
		::System::String* render_method_scene_id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWRENDERMETHODSCENE__CTOR_OFFSET))(this);
		}
	};
}
