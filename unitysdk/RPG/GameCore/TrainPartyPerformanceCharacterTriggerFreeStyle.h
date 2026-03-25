#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_METHOD_3_2E2157B1CEA273BC_OFFSET UNITYSDK_OFFSET(0x178AEAA0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_METHOD_3_4481823E8C5804EB_OFFSET UNITYSDK_OFFSET(0x178AEA20)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x178AEA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceCharacterTriggerFreeStyle_TypeDefinitionIndex = 20550;

	class TrainPartyPerformanceCharacterTriggerFreeStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ActionName; // 0x20
		::System::Single NormalizedTimeWait; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4481823E8C5804EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_METHOD_3_4481823E8C5804EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E2157B1CEA273BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_METHOD_3_2E2157B1CEA273BC_OFFSET))(a1, a2);
		}
	};
}
