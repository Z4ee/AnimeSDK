#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWENTITYBEHAVIORSELECTIONDRILLINGLEVEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x129AA670)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWENTITYBEHAVIORSELECTIONDRILLINGLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x129AA820)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowEntityBehaviorSelectionDrillingLevel_TypeDefinitionIndex = 41512;

	class ConfigHollowEntityBehaviorSelectionDrillingLevel : public ::System::Object
	{
	public:
		::System::Int32 TargetLevel; // 0x10
		::MoleMole::Config::ValueCompareType CompareType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWENTITYBEHAVIORSELECTIONDRILLINGLEVEL__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::MoleMole::HollowChessboard::HollowEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWENTITYBEHAVIORSELECTIONDRILLINGLEVEL_EVALUATE_OFFSET))(this, entity);
		}
	};
}
