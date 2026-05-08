#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUIMAINCITY_VICECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC17C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_ViceCharacterConfig_TypeDefinitionIndex = 46894;

	class ConfigUIMainCity_ViceCharacterConfig : public ::System::Object
	{
	public:
		::System::Single AnimatorPlayRatio; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_VICECHARACTERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
