#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_COMBODEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7498E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ComboDefine_TypeDefinitionIndex = 7519;

	class ComboDefine : public ::System::Object
	{
	public:
		// static const ::System::String* APP_ID; // 0x0
		// static const ::System::String* APP_KEY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMBODEFINE__CTOR_OFFSET))(this);
		}
	};
}
