#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_METHOD_3_35D5CDD35B031039_OFFSET UNITYSDK_OFFSET(0x1995BFE0)
#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_METHOD_3_D18BD6CC7EEA9BAE_OFFSET UNITYSDK_OFFSET(0x1995BF60)
#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1995BFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckSwitchMap_TypeDefinitionIndex = 19784;

	class MonopolyCheckSwitchMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerNotSwitch; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitchToSpeWorld; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitchFromSpeWorld; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitch; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D18BD6CC7EEA9BAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckSwitchMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckSwitchMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_METHOD_3_D18BD6CC7EEA9BAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35D5CDD35B031039(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckSwitchMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckSwitchMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_METHOD_3_35D5CDD35B031039_OFFSET))(a1, a2);
		}
	};
}
