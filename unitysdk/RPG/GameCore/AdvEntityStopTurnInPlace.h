#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_METHOD_3_2D7A6E933C58D4C7_OFFSET UNITYSDK_OFFSET(0x1BE1C350)
#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_METHOD_3_604557905DFC1446_OFFSET UNITYSDK_OFFSET(0x1BE1C3A0)
#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1C390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityStopTurnInPlace_TypeDefinitionIndex = 19763;

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

		static ::System::Void Method_3_2D7A6E933C58D4C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityStopTurnInPlace*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityStopTurnInPlace*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_METHOD_3_2D7A6E933C58D4C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_604557905DFC1446(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityStopTurnInPlace* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityStopTurnInPlace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_METHOD_3_604557905DFC1446_OFFSET))(a1, a2);
		}
	};
}
