#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEBATECOSTCHANGCE_METHOD_3_B212E94EB3E52C9C_OFFSET UNITYSDK_OFFSET(0x19692880)
#define RPG_GAMECORE_DEBATECOSTCHANGCE_METHOD_3_DAEC9597FB341A0C_OFFSET UNITYSDK_OFFSET(0x19692920)
#define RPG_GAMECORE_DEBATECOSTCHANGCE__CTOR_OFFSET UNITYSDK_OFFSET(0x196928E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateCostChangce_TypeDefinitionIndex = 20711;

	class DebateCostChangce : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 CostNum; // 0x18
		::System::Single WaitSecond; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATECOSTCHANGCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B212E94EB3E52C9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateCostChangce*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateCostChangce*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATECOSTCHANGCE_METHOD_3_B212E94EB3E52C9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAEC9597FB341A0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateCostChangce* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateCostChangce*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATECOSTCHANGCE_METHOD_3_DAEC9597FB341A0C_OFFSET))(a1, a2);
		}
	};
}
