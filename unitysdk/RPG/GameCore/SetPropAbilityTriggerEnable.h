#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_METHOD_3_AF8CE5AA5ACC7133_OFFSET UNITYSDK_OFFSET(0x176DB8F0)
#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_METHOD_3_B2E918AF9042BFE3_OFFSET UNITYSDK_OFFSET(0x176DB980)
#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176DB950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropAbilityTriggerEnable_TypeDefinitionIndex = 18645;

	class SetPropAbilityTriggerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF8CE5AA5ACC7133(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropAbilityTriggerEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropAbilityTriggerEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_METHOD_3_AF8CE5AA5ACC7133_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2E918AF9042BFE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropAbilityTriggerEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropAbilityTriggerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_METHOD_3_B2E918AF9042BFE3_OFFSET))(a1, a2);
		}
	};
}
