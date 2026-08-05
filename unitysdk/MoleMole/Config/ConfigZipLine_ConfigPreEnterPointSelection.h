#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGPREENTERPOINTSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B562800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigPreEnterPointSelection_TypeDefinitionIndex = 53007;

	class ConfigZipLine_ConfigPreEnterPointSelection : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::UnityEngine::Vector2 viewportMin; // 0x14
		::UnityEngine::Vector2 viewportMax; // 0x1C
		::System::Single depth_1; // 0x24
		::System::Single depth_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGPREENTERPOINTSELECTION__CTOR_OFFSET))(this);
		}
	};
}
