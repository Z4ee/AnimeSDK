#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WEBVIEWMODEL_GET_RENDERMETHOD_OFFSET UNITYSDK_OFFSET(0x1CD1C830)
#define MIHOYO_SDK_WEBVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1C970)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewModel_TypeDefinitionIndex = 20040;

	class WebViewModel : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::String* get_RenderMethod()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWMODEL_GET_RENDERMETHOD_OFFSET))(this);
		}
	};
}
