#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOPASSSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C8BD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoPassScene_TypeDefinitionIndex = 19659;

	class HoYoPassScene : public ::System::Object
	{
	public:
		::System::String* hoyopass_scene_id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASSSCENE__CTOR_OFFSET))(this);
		}
	};
}
