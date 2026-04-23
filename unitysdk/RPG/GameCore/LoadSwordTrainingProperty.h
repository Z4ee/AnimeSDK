#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADSWORDTRAININGPROPERTY_METHOD_3_1791C2BAFD862ECD_OFFSET UNITYSDK_OFFSET(0x18A72120)
#define RPG_GAMECORE_LOADSWORDTRAININGPROPERTY_METHOD_3_4EF9FD69FAD563C1_OFFSET UNITYSDK_OFFSET(0x18A72230)
#define RPG_GAMECORE_LOADSWORDTRAININGPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18A72200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadSwordTrainingProperty_TypeDefinitionIndex = 21481;

	class LoadSwordTrainingProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSWORDTRAININGPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1791C2BAFD862ECD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadSwordTrainingProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadSwordTrainingProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSWORDTRAININGPROPERTY_METHOD_3_1791C2BAFD862ECD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4EF9FD69FAD563C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadSwordTrainingProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadSwordTrainingProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSWORDTRAININGPROPERTY_METHOD_3_4EF9FD69FAD563C1_OFFSET))(a1, a2);
		}
	};
}
