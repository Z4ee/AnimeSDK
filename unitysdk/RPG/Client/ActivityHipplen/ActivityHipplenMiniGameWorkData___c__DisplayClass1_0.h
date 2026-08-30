#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_4B1D406725A7144B;

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B49D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___C__DISPLAYCLASS1_0___INITWORKEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B7B4A20)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameWorkData___c__DisplayClass1_0_TypeDefinitionIndex = 75312;

	class ActivityHipplenMiniGameWorkData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenGameGradeType gradeType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitWorkEffects_b__0(::Class_1_4B1D406725A7144B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_4B1D406725A7144B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___C__DISPLAYCLASS1_0___INITWORKEFFECTS_B__0_OFFSET))(this, a1);
		}
	};
}
