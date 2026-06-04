#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_METHOD_3_C93145C385367C07_OFFSET UNITYSDK_OFFSET(0x19E18910)
#define RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_METHOD_3_D988AEED1409A973_OFFSET UNITYSDK_OFFSET(0x19E18800)
#define RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E188E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerModifierPhase1Perform_TypeDefinitionIndex = 22168;

	class TriggerModifierPhase1Perform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D988AEED1409A973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModifierPhase1Perform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModifierPhase1Perform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_METHOD_3_D988AEED1409A973_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C93145C385367C07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModifierPhase1Perform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModifierPhase1Perform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_METHOD_3_C93145C385367C07_OFFSET))(a1, a2);
		}
	};
}
