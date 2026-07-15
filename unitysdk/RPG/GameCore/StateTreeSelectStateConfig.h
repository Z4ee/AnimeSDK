#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ST_SelectStateBehaviorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STATETREESELECTSTATECONFIG_METHOD_2_07D210A084BDAD88_OFFSET UNITYSDK_OFFSET(0x1B0BFDA0)
#define RPG_GAMECORE_STATETREESELECTSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BFED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeSelectStateConfig_TypeDefinitionIndex = 14889;

	class StateTreeSelectStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ST_SelectStateBehaviorType Behavior; // 0x10
		::System::UInt32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESELECTSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_07D210A084BDAD88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeSelectStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeSelectStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESELECTSTATECONFIG_METHOD_2_07D210A084BDAD88_OFFSET))(a1, a2);
		}
	};
}
