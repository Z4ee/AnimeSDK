#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTYPEDEFAULTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35D5F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectTypeDefaultConfig_TypeDefinitionIndex = 58665;

	class EtherEyesObjectTypeDefaultConfig : public ::System::Object
	{
	public:
		::System::Boolean UseButtonHighlight; // 0x10
		::System::Boolean UseHighLightEffect; // 0x11
		::System::Boolean UseSpecialMaterial; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTYPEDEFAULTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
