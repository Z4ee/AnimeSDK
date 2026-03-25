#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_B190FD30111E5B01_OFFSET UNITYSDK_OFFSET(0x17033BA0)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_CFD227DB0A8F2C77_OFFSET UNITYSDK_OFFSET(0x17033AD0)
#define RPG_GAMECORE_BYISTARGETABLETOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17033B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetAbleToAction_TypeDefinitionIndex = 21243;

	class ByIsTargetAbleToAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CFD227DB0A8F2C77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetAbleToAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetAbleToAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_CFD227DB0A8F2C77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B190FD30111E5B01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_B190FD30111E5B01_OFFSET))(a1, a2);
		}
	};
}
