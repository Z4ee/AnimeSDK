#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_METHOD_3_AF0092D266DCC1AB_OFFSET UNITYSDK_OFFSET(0x19428CF0)
#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_METHOD_3_BDD537DECE9CD737_OFFSET UNITYSDK_OFFSET(0x19428BE0)
#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x19428CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotTriggerLoad_TypeDefinitionIndex = 20029;

	class AdvLogisticsRobotTriggerLoad : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDD537DECE9CD737(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_METHOD_3_BDD537DECE9CD737_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF0092D266DCC1AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_METHOD_3_AF0092D266DCC1AB_OFFSET))(a1, a2);
		}
	};
}
