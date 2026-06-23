#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUIMAINSTORY_PERSONALLINEENDPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4050)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainStory_PersonalLineEndPerformConfig_TypeDefinitionIndex = 86011;

	class ConfigUIMainStory_PersonalLineEndPerformConfig : public ::System::Object
	{
	public:
		::System::Single SpecialFadeInDelay; // 0x10
		::System::Single FairyDelay; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINSTORY_PERSONALLINEENDPERFORMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
