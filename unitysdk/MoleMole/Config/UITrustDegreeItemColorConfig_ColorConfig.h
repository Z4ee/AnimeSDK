#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_CONFIG_UITRUSTDEGREEITEMCOLORCONFIG_COLORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD787D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UITrustDegreeItemColorConfig_ColorConfig_TypeDefinitionIndex = 61260;

	class UITrustDegreeItemColorConfig_ColorConfig : public ::System::Object
	{
	public:
		::UnityEngine::Color lightBg; // 0x10
		::UnityEngine::Color bg; // 0x20
		::UnityEngine::Color bgOl; // 0x30
		::UnityEngine::Color textEF02; // 0x40
		::UnityEngine::Color textEF01; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITRUSTDEGREEITEMCOLORCONFIG_COLORCONFIG__CTOR_OFFSET))(this);
		}
	};
}
