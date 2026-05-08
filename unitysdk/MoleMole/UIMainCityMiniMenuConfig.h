#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIMAINCITYMINIMENUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x150F4630)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuConfig_TypeDefinitionIndex = 75662;

	class UIMainCityMiniMenuConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::InputLogicEventType>* ConsoleInputKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUCONFIG__CTOR_OFFSET))(this);
		}
	};
}
