#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BILLBOARDVISIBLEPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA892910)
#define RPG_GAMECORE_BILLBOARDVISIBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA892900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardVisibleParam_TypeDefinitionIndex = 46025;

	class BillboardVisibleParam : public ::System::Object
	{
	public:
		::System::Single DelayedVisibleTime; // 0x10
		::System::Boolean IsVisible; // 0x14

		::System::Void _ctor(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDVISIBLEPARAM__CTOR_OFFSET))(this, isVisible);
		}

		::System::Void _ctor_1(::System::Single delayVisibleTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDVISIBLEPARAM__CTOR_1_OFFSET))(this, delayVisibleTime);
		}
	};
}
