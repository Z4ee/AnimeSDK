#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SimulateAvatarLineupConfig; }

#define RPG_GAMECORE_SIMULATELINEUPCONFIG_METHOD_2_FF24423F7227C39E_OFFSET UNITYSDK_OFFSET(0x18E6DD30)
#define RPG_GAMECORE_SIMULATELINEUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6DE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimulateLineupConfig_TypeDefinitionIndex = 17243;

	class SimulateLineupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SimulateAvatarLineupConfig*>* avatarList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMULATELINEUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FF24423F7227C39E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimulateLineupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimulateLineupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMULATELINEUPCONFIG_METHOD_2_FF24423F7227C39E_OFFSET))(a1, a2);
		}
	};
}
