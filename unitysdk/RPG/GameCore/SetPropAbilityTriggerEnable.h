#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_METHOD_3_8DA76E87AFD5DFDF_OFFSET UNITYSDK_OFFSET(0x1D50B080)
#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_METHOD_3_B2E918AF9042BFE3_OFFSET UNITYSDK_OFFSET(0x1D50B0D0)
#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D50B0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropAbilityTriggerEnable_TypeDefinitionIndex = 20118;

	class SetPropAbilityTriggerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8DA76E87AFD5DFDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropAbilityTriggerEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropAbilityTriggerEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_METHOD_3_8DA76E87AFD5DFDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2E918AF9042BFE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropAbilityTriggerEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropAbilityTriggerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_METHOD_3_B2E918AF9042BFE3_OFFSET))(a1, a2);
		}
	};
}
