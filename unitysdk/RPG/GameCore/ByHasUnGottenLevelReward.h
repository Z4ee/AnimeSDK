#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_9A9CE92F639DC63D_OFFSET UNITYSDK_OFFSET(0x1874A8F0)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_FF18523880DA9577_OFFSET UNITYSDK_OFFSET(0x1874A820)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1874A8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasUnGottenLevelReward_TypeDefinitionIndex = 20212;

	class ByHasUnGottenLevelReward : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FF18523880DA9577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasUnGottenLevelReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasUnGottenLevelReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_FF18523880DA9577_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A9CE92F639DC63D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_9A9CE92F639DC63D_OFFSET))(a1, a2);
		}
	};
}
