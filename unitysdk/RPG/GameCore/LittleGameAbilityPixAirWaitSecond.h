#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_METHOD_4_3017B0079BAA0086_OFFSET UNITYSDK_OFFSET(0x19895AF0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_METHOD_4_A6E110E574E95AC7_OFFSET UNITYSDK_OFFSET(0x19895B70)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND__CTOR_OFFSET UNITYSDK_OFFSET(0x19895B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirWaitSecond_TypeDefinitionIndex = 20229;

	class LittleGameAbilityPixAirWaitSecond : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint WaitTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3017B0079BAA0086(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_METHOD_4_3017B0079BAA0086_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A6E110E574E95AC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRWAITSECOND_METHOD_4_A6E110E574E95AC7_OFFSET))(a1, a2);
		}
	};
}
