#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELEVENTTRIGGERSELECTORCONFIG_METHOD_3_415AD604FADA8A23_OFFSET UNITYSDK_OFFSET(0x1CFC5C00)
#define RPG_GAMECORE_CHIMERADUELEVENTTRIGGERSELECTORCONFIG_METHOD_3_8627B742FDD722A2_OFFSET UNITYSDK_OFFSET(0x1CFC5CA0)
#define RPG_GAMECORE_CHIMERADUELEVENTTRIGGERSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC5C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEventTriggerSelectorConfig_TypeDefinitionIndex = 15763;

	class ChimeraDuelEventTriggerSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTTRIGGERSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_415AD604FADA8A23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEventTriggerSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEventTriggerSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTTRIGGERSELECTORCONFIG_METHOD_3_415AD604FADA8A23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8627B742FDD722A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEventTriggerSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEventTriggerSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTTRIGGERSELECTORCONFIG_METHOD_3_8627B742FDD722A2_OFFSET))(a1, a2);
		}
	};
}
