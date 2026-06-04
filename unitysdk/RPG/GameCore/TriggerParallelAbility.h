#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ParallelAbility; }

#define RPG_GAMECORE_TRIGGERPARALLELABILITY_METHOD_3_16C5F9343292749F_OFFSET UNITYSDK_OFFSET(0x19E19850)
#define RPG_GAMECORE_TRIGGERPARALLELABILITY_METHOD_3_94317235762B4C2C_OFFSET UNITYSDK_OFFSET(0x19E198D0)
#define RPG_GAMECORE_TRIGGERPARALLELABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E198A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerParallelAbility_TypeDefinitionIndex = 21451;

	class TriggerParallelAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ParallelAbility*>* ParallelAbilityList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_16C5F9343292749F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerParallelAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerParallelAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY_METHOD_3_16C5F9343292749F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_94317235762B4C2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerParallelAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerParallelAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY_METHOD_3_94317235762B4C2C_OFFSET))(a1, a2);
		}
	};
}
