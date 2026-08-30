#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BILLBOARDVISIBLEPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE53EA40)
#define RPG_GAMECORE_BILLBOARDVISIBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE53EA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardVisibleParam_TypeDefinitionIndex = 57323;

	class BillboardVisibleParam : public ::System::Object
	{
	public:
		::System::Boolean IsVisible; // 0x10
		::System::Single DelayedVisibleTime; // 0x14

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDVISIBLEPARAM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDVISIBLEPARAM__CTOR_1_OFFSET))(this, a1);
		}
	};
}
