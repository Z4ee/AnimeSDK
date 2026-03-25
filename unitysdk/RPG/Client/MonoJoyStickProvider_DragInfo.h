#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_DRAGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x24C40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_DragInfo_TypeDefinitionIndex = 49722;

	struct alignas(4) MonoJoyStickProvider_DragInfo
	{
		::System::Single UIAngle; // 0x10
		::System::Single WorldAngle; // 0x14
		::System::Single CenterToHitDistancePow; // 0x18
		::System::Single DragDeltaInInch; // 0x1C

		::System::Void _ctor(::System::Single uiAngle, ::System::Single worldAngle, ::System::Single centerToHitDistancePow, ::System::Single dragDeltaInInch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_DRAGINFO__CTOR_OFFSET))(this, uiAngle, worldAngle, centerToHitDistancePow, dragDeltaInInch);
		}
	};
}
