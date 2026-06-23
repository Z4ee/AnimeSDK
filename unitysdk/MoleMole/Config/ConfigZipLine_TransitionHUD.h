#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_TRANSITIONHUD__CTOR_OFFSET UNITYSDK_OFFSET(0x12723520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionHUD_TypeDefinitionIndex = 51237;

	class ConfigZipLine_TransitionHUD : public ::System::Object
	{
	public:
		::System::Single lerpRatio; // 0x10
		::UnityEngine::Vector2 HintPointAxisLength; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_TRANSITIONHUD__CTOR_OFFSET))(this);
		}
	};
}
