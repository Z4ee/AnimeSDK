#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class StageHarmonyBaseLinkSlot;
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_PHASEVALUEACTIONPAIR_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA4CC900)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_PHASEVALUEACTIONPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CD6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair_TypeDefinitionIndex = 58163;

	class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair : public ::System::Object
	{
	public:
		::System::Int32 PhaseValue; // 0x10
		::Il2CppArray<::System::Int32>* _PhaseValues; // 0x18
		::System::String* Description; // 0x20
		::StageHarmonyBaseLinkSlot* ExecuteBehavior; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_PHASEVALUEACTIONPAIR__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_PHASEVALUEACTIONPAIR_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}
	};
}
