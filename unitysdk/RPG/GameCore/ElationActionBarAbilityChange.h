#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_METHOD_3_902BA481967CB9E7_OFFSET UNITYSDK_OFFSET(0x196D61B0)
#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_METHOD_3_D5434E9DC65D2F9E_OFFSET UNITYSDK_OFFSET(0x196D6230)
#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x196D6200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationActionBarAbilityChange_TypeDefinitionIndex = 21587;

	class ElationActionBarAbilityChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean IsAdd; // 0x20
		::System::Boolean AddToFirst; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_902BA481967CB9E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationActionBarAbilityChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationActionBarAbilityChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_METHOD_3_902BA481967CB9E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5434E9DC65D2F9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationActionBarAbilityChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_METHOD_3_D5434E9DC65D2F9E_OFFSET))(a1, a2);
		}
	};
}
