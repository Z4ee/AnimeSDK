#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ParallelAbility; }

#define RPG_GAMECORE_TRIGGERPARALLELABILITY_METHOD_3_341605BAD5FC5F84_OFFSET UNITYSDK_OFFSET(0x190CA3A0)
#define RPG_GAMECORE_TRIGGERPARALLELABILITY_METHOD_3_947D33E561EE13F5_OFFSET UNITYSDK_OFFSET(0x190CA420)
#define RPG_GAMECORE_TRIGGERPARALLELABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x190CA3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerParallelAbility_TypeDefinitionIndex = 21587;

	class TriggerParallelAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ParallelAbility*>* ParallelAbilityList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_341605BAD5FC5F84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerParallelAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerParallelAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY_METHOD_3_341605BAD5FC5F84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_947D33E561EE13F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerParallelAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerParallelAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY_METHOD_3_947D33E561EE13F5_OFFSET))(a1, a2);
		}
	};
}
