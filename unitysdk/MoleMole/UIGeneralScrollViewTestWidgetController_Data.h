#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18409420)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralScrollViewTestWidgetController_Data_TypeDefinitionIndex = 51434;

	class UIGeneralScrollViewTestWidgetController_Data : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10

		::System::Void _ctor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this, color);
		}
	};
}
