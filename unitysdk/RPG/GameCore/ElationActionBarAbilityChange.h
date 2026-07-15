#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_METHOD_3_6030A8BD0415313F_OFFSET UNITYSDK_OFFSET(0x1BB329B0)
#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_METHOD_3_D5434E9DC65D2F9E_OFFSET UNITYSDK_OFFSET(0x1BB32A00)
#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB329F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationActionBarAbilityChange_TypeDefinitionIndex = 22009;

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

		static ::System::Void Method_3_6030A8BD0415313F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationActionBarAbilityChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationActionBarAbilityChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_METHOD_3_6030A8BD0415313F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5434E9DC65D2F9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationActionBarAbilityChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_METHOD_3_D5434E9DC65D2F9E_OFFSET))(a1, a2);
		}
	};
}
