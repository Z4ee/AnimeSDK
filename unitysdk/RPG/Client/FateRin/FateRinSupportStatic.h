#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_FATERINSUPPORTSTATIC_ISGUIDEVIDEOAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD009AC0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinSupportStatic_TypeDefinitionIndex = 79309;

	class FateRinSupportStatic : public ::System::Object
	{
	public:
		static ::System::Boolean IsGuideVideoAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTSTATIC_ISGUIDEVIDEOAVAILABLE_OFFSET))(a1);
		}
	};
}
