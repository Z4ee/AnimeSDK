#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_METHOD_3_AF0092D266DCC1AB_OFFSET UNITYSDK_OFFSET(0x1D6BBD40)
#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_METHOD_3_BD89B62EE2DA7C2E_OFFSET UNITYSDK_OFFSET(0x1D6BBC70)
#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BBD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotTriggerLoad_TypeDefinitionIndex = 20953;

	class AdvLogisticsRobotTriggerLoad : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BD89B62EE2DA7C2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_METHOD_3_BD89B62EE2DA7C2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF0092D266DCC1AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_METHOD_3_AF0092D266DCC1AB_OFFSET))(a1, a2);
		}
	};
}
