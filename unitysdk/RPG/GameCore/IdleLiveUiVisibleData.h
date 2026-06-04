#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IdleLiveUIType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_IDLELIVEUIVISIBLEDATA_CONTAINSFLAG_OFFSET UNITYSDK_OFFSET(0xCE2DE70)
#define RPG_GAMECORE_IDLELIVEUIVISIBLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE2DEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveUiVisibleData_TypeDefinitionIndex = 54365;

	class IdleLiveUiVisibleData : public ::System::Object
	{
	public:
		::RPG::Client::IdleLiveUIType UiTypesToSet; // 0x10
		::System::Boolean IsVisible; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEUIVISIBLEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean ContainsFlag(::RPG::Client::IdleLiveUIType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IdleLiveUIType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEUIVISIBLEDATA_CONTAINSFLAG_OFFSET))(this, a1);
		}
	};
}
