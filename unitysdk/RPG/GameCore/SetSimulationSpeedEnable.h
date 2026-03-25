#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_METHOD_3_6B6F573ACD2E80E7_OFFSET UNITYSDK_OFFSET(0x176DD9D0)
#define RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_METHOD_3_6F701C4E9C427836_OFFSET UNITYSDK_OFFSET(0x176DD950)
#define RPG_GAMECORE_SETSIMULATIONSPEEDENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176DD9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSimulationSpeedEnable_TypeDefinitionIndex = 22038;

	class SetSimulationSpeedEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIMULATIONSPEEDENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F701C4E9C427836(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSimulationSpeedEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSimulationSpeedEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_METHOD_3_6F701C4E9C427836_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B6F573ACD2E80E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSimulationSpeedEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSimulationSpeedEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_METHOD_3_6B6F573ACD2E80E7_OFFSET))(a1, a2);
		}
	};
}
