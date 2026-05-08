#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUIMAINCITY_ONGOINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x181F0D00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_OngoingConfig_TypeDefinitionIndex = 46898;

	class ConfigUIMainCity_OngoingConfig : public ::System::Object
	{
	public:
		::System::Single WaitFadeIn02; // 0x10
		::System::Single TweenTime; // 0x14
		::System::Single WaitFadeIn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_ONGOINGCONFIG__CTOR_OFFSET))(this);
		}
	};
}
