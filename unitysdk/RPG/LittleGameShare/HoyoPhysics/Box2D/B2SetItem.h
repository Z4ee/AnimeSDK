#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SETITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x82F250)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SetItem_TypeDefinitionIndex = 36072;

	struct alignas(8) B2SetItem
	{
		::System::UInt64 key; // 0x10
		::System::UInt32 hash; // 0x18

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SETITEM_CLEAR_OFFSET))(this);
		}
	};
}
