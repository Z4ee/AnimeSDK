#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E0B808936AD386AC;

#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC83FDA0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__DISPLAYCLASS29_0___RESOLVEFARMDEMAND_B__0_OFFSET UNITYSDK_OFFSET(0xC83FF30)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarQuickGrowCalculator___c__DisplayClass29_0_TypeDefinitionIndex = 62556;

	class AvatarQuickGrowCalculator___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::Class_1_E0B808936AD386AC* promotionCosts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void __ResolveFarmDemand_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__DISPLAYCLASS29_0___RESOLVEFARMDEMAND_B__0_OFFSET))(this, a1, a2);
		}
	};
}
