#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CALCULATESERVERGROUPPROPERTY_METHOD_3_15EA4319688542D0_OFFSET UNITYSDK_OFFSET(0x1CF7B490)
#define RPG_GAMECORE_CALCULATESERVERGROUPPROPERTY_METHOD_3_F99DF8A1B53A8CD4_OFFSET UNITYSDK_OFFSET(0x1CF7B440)
#define RPG_GAMECORE_CALCULATESERVERGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7B480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalculateServerGroupProperty_TypeDefinitionIndex = 20490;

	class CalculateServerGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATESERVERGROUPPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F99DF8A1B53A8CD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalculateServerGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalculateServerGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATESERVERGROUPPROPERTY_METHOD_3_F99DF8A1B53A8CD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_15EA4319688542D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalculateServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalculateServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATESERVERGROUPPROPERTY_METHOD_3_15EA4319688542D0_OFFSET))(a1, a2);
		}
	};
}
