#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_UIINTERKNOTPAGECONFIG_MAINCITYQUESTTYPEROWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x164F1790)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPageConfig_MainCityQuestTypeRowConfig_TypeDefinitionIndex = 88681;

	class UIInterKnotPageConfig_MainCityQuestTypeRowConfig : public ::System::Object
	{
	public:
		::UnityEngine::Color startColor; // 0x10
		::UnityEngine::Color endColor; // 0x20
		::System::Single alphaTiling; // 0x30
		::System::Single alphaOffset; // 0x34
		::System::Single changeTime; // 0x38
		::UnityEngine::Color nameColor; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPAGECONFIG_MAINCITYQUESTTYPEROWCONFIG__CTOR_OFFSET))(this);
		}
	};
}
