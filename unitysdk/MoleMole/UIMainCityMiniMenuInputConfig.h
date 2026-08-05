#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIMAINCITYMINIMENUINPUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18328130)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuInputConfig_TypeDefinitionIndex = 47242;

	class UIMainCityMiniMenuInputConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::InputLogicEventType ConsoleInputKey; // 0x18
		::MoleMole::InputLogicEventType PcInputKey; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUINPUTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
