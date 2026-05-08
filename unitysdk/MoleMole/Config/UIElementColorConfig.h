#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_UIELEMENTCOLORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B48230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIElementColorConfig_TypeDefinitionIndex = 52131;

	class UIElementColorConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* MainKey; // 0x18
		::System::String* UIKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIELEMENTCOLORCONFIG__CTOR_OFFSET))(this);
		}
	};
}
