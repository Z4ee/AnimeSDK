#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_MINMAX__CTOR_OFFSET UNITYSDK_OFFSET(0x17056F10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigSpeedModifier_MinMax_TypeDefinitionIndex = 51249;

	class ConfigZipLine_ConfigSpeedModifier_MinMax : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 speedRange; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGSPEEDMODIFIER_MINMAX__CTOR_OFFSET))(this);
		}
	};
}
