#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_10.h"

namespace RPG::Client { class StageHarmonyTrafficLightBehavior; }
namespace RPG::Client { class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xC9163B0)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xC915C50)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xC9168E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoPlugin_TypeDefinitionIndex = 66375;

	class StageHarmonyTrafficLightMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonyTrafficLightBehavior*>
	{
	public:
		::System::Int32 ComponentID; // 0x30
		::System::String* Channle; // 0x38
		::System::Single Signal; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase*>* IntersectionPhases; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Load(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}
	};
}
