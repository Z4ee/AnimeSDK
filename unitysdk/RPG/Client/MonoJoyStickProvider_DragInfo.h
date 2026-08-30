#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_DRAGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x82E380)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_DragInfo_TypeDefinitionIndex = 61411;

	struct alignas(4) MonoJoyStickProvider_DragInfo
	{
		::System::Single UIAngle; // 0x10
		::System::Single WorldAngle; // 0x14
		::System::Single CenterToHitDistancePow; // 0x18
		::System::Single DragDeltaInInch; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_DRAGINFO__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
