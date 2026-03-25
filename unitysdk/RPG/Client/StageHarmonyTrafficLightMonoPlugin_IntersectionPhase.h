#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_METHOD_1_4E6F72124EC1C84B_OFFSET UNITYSDK_OFFSET(0xA4CC810)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CD310)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_TypeDefinitionIndex = 58162;

	class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase : public ::System::Object
	{
	public:
		::System::Int32 PhaseID; // 0x10
		::Il2CppArray<::System::Int32>* _PhaseIDs; // 0x18
		::System::Int32 DecodeSignalValue; // 0x20
		::System::String* Description; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair*>* PhaseValueActionPairs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_4E6F72124EC1C84B(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_METHOD_1_4E6F72124EC1C84B_OFFSET))(this, a1);
		}
	};
}
