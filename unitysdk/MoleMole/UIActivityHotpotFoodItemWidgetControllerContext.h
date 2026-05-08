#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_EA973170E0B2CCF6;
namespace MoleMole { class UIActivityHotpotFoodItemWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1588AEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotFoodItemWidgetControllerContext_TypeDefinitionIndex = 39917;

	class UIActivityHotpotFoodItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayFadeout; // 0x28
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayFadein; // 0x30
		::Class_2_EA973170E0B2CCF6* FoodCfg; // 0x38
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayLink; // 0x40
		::System::Single CollisionIntensityThreshold; // 0x48
		::UnityEngine::Color ErosionColor; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
