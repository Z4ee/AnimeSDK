#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_13.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_14.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase; }
namespace RPG::Client { class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4EE710)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4EE750)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A4EE760)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__2_1_OFFSET UNITYSDK_OFFSET(0x1A4EE7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoPlugin___c_TypeDefinitionIndex = 70971;

	class StageHarmonyTrafficLightMonoPlugin___c : public ::System::Object
	{
	public:
		static ::RPG::Client::StageHarmonyTrafficLightMonoPlugin___c** StaticGet___9()
		{
			return (::RPG::Client::StageHarmonyTrafficLightMonoPlugin___c**)Il2CppClass::FromTypeDefinitionIndex(StageHarmonyTrafficLightMonoPlugin___c_TypeDefinitionIndex)->GetStaticField(0x30AD0);
		}
		static ::System::Func_2<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair*, ::Struct_2_CC45B4503679E14E_14>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair*, ::Struct_2_CC45B4503679E14E_14>**)Il2CppClass::FromTypeDefinitionIndex(StageHarmonyTrafficLightMonoPlugin___c_TypeDefinitionIndex)->GetStaticField(0x30AD8);
		}
		static ::System::Func_2<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase*, ::Struct_2_CC45B4503679E14E_13>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase*, ::Struct_2_CC45B4503679E14E_13>**)Il2CppClass::FromTypeDefinitionIndex(StageHarmonyTrafficLightMonoPlugin___c_TypeDefinitionIndex)->GetStaticField(0x30AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__CTOR_OFFSET))(this);
		}

		::Struct_2_CC45B4503679E14E_13 _Dump_b__2_0(::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase* a1)
		{
			return ((::Struct_2_CC45B4503679E14E_13(*)(::PVOID, ::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__2_0_OFFSET))(this, a1);
		}

		::Struct_2_CC45B4503679E14E_14 _Dump_b__2_1(::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair* a1)
		{
			return ((::Struct_2_CC45B4503679E14E_14(*)(::PVOID, ::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__2_1_OFFSET))(this, a1);
		}
	};
}
