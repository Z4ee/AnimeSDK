#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class AirShipSubwaySchedule;
namespace RPG::Client { class StageHarmonySignalDynamicPatternBehavior; }
namespace RPG::GameCore { class StageSceneItemSerializationData; }
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xB1BC990)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB1BCB20)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xB1BC8F0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB1BCB70)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB1BCB80)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDynamicPatternMonoPlugin_TypeDefinitionIndex = 65446;

	class StageHarmonySignalDynamicPatternMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonySignalDynamicPatternBehavior*>
	{
	public:
		::System::Int32 SerialID; // 0x30
		::System::String* Channle; // 0x38
		::AirShipSubwaySchedule* SubwaySchedule; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Load(::RPG::GameCore::StageSceneItemSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::RPG::GameCore::StageSceneItemSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
