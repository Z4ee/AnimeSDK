#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_GAMEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FC8F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GameParameters_TypeDefinitionIndex = 18446;

	class GameParameters : public ::System::Object
	{
	public:
		// static const ::System::String* GAME_BIZ; // 0x0
		// static const ::System::String* GAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
