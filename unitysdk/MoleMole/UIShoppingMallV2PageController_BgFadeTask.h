#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIShoppingMallV2PageController_BgAnimationState.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER_BGFADETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x2E85F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallV2PageController_BgFadeTask_TypeDefinitionIndex = 57213;

	struct alignas(4) UIShoppingMallV2PageController_BgFadeTask
	{
		::MoleMole::UIShoppingMallV2PageController_BgAnimationState AnimationState; // 0x10

		/*
		::System::Void _ctor(::MoleMole::UIShoppingMallV2PageController_BgAnimationState state, ::Struct_2_DEFBC4F1D068893B targetTabGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIShoppingMallV2PageController_BgAnimationState, ::Struct_2_DEFBC4F1D068893B))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER_BGFADETASK__CTOR_OFFSET))(this, state, targetTabGroupData);
		}
		*/
	};
}
