#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADSWORDTRAININGPROPERTY_METHOD_3_4EF9FD69FAD563C1_OFFSET UNITYSDK_OFFSET(0x1D209DE0)
#define RPG_GAMECORE_LOADSWORDTRAININGPROPERTY_METHOD_3_6DE60F42540D3C44_OFFSET UNITYSDK_OFFSET(0x1D209D10)
#define RPG_GAMECORE_LOADSWORDTRAININGPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D209DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadSwordTrainingProperty_TypeDefinitionIndex = 22344;

	class LoadSwordTrainingProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSWORDTRAININGPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6DE60F42540D3C44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadSwordTrainingProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadSwordTrainingProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSWORDTRAININGPROPERTY_METHOD_3_6DE60F42540D3C44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4EF9FD69FAD563C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadSwordTrainingProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadSwordTrainingProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSWORDTRAININGPROPERTY_METHOD_3_4EF9FD69FAD563C1_OFFSET))(a1, a2);
		}
	};
}
