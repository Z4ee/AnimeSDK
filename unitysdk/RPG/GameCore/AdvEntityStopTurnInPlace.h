#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_METHOD_3_604557905DFC1446_OFFSET UNITYSDK_OFFSET(0x19423D10)
#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_METHOD_3_802314FF18A5ACAF_OFFSET UNITYSDK_OFFSET(0x19423C70)
#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE__CTOR_OFFSET UNITYSDK_OFFSET(0x19423CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityStopTurnInPlace_TypeDefinitionIndex = 19405;

	class AdvEntityStopTurnInPlace : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::System::Boolean ForceToStandby; // 0x20
		::System::Single ForceToStandbyTransitionTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_802314FF18A5ACAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityStopTurnInPlace*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityStopTurnInPlace*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_METHOD_3_802314FF18A5ACAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_604557905DFC1446(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityStopTurnInPlace* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityStopTurnInPlace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_METHOD_3_604557905DFC1446_OFFSET))(a1, a2);
		}
	};
}
