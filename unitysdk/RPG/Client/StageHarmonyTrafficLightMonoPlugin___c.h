#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase; }
namespace RPG::Client { class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair; }
namespace RPG::GameCore { class IntersectionPhaseSerialization; }
namespace RPG::GameCore { class PhaseValueActionPairSerialization; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1BE570)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1BE5B0)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__1_0_OFFSET UNITYSDK_OFFSET(0xB1BE5C0)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__1_1_OFFSET UNITYSDK_OFFSET(0xB1BE710)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoPlugin___c_TypeDefinitionIndex = 65451;

	class StageHarmonyTrafficLightMonoPlugin___c : public ::System::Object
	{
	public:
		static ::RPG::Client::StageHarmonyTrafficLightMonoPlugin___c** StaticGet___9()
		{
			return (::RPG::Client::StageHarmonyTrafficLightMonoPlugin___c**)Il2CppClass::FromTypeDefinitionIndex(StageHarmonyTrafficLightMonoPlugin___c_TypeDefinitionIndex)->GetStaticField(0x25D80);
		}
		static ::System::Func_2<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair*, ::RPG::GameCore::PhaseValueActionPairSerialization*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair*, ::RPG::GameCore::PhaseValueActionPairSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(StageHarmonyTrafficLightMonoPlugin___c_TypeDefinitionIndex)->GetStaticField(0x25D88);
		}
		static ::System::Func_2<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase*, ::RPG::GameCore::IntersectionPhaseSerialization*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase*, ::RPG::GameCore::IntersectionPhaseSerialization*>**)Il2CppClass::FromTypeDefinitionIndex(StageHarmonyTrafficLightMonoPlugin___c_TypeDefinitionIndex)->GetStaticField(0x25D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::IntersectionPhaseSerialization* _Dump_b__1_0(::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase* phase)
		{
			return ((::RPG::GameCore::IntersectionPhaseSerialization*(*)(::PVOID, ::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__1_0_OFFSET))(this, phase);
		}

		::RPG::GameCore::PhaseValueActionPairSerialization* _Dump_b__1_1(::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair* pair)
		{
			return ((::RPG::GameCore::PhaseValueActionPairSerialization*(*)(::PVOID, ::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__1_1_OFFSET))(this, pair);
		}
	};
}
