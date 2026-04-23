#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class AirShipSubwaySchedule;
namespace RPG::Client { class StageHarmonySignalDynamicDialogBehavior; }
namespace RPG::GameCore { class StageSceneItemSerializationData; }
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xB1BBAD0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB1BBC60)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xB1BBA30)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB1BBCB0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB1BBCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDynamicDialogMonoPlugin_TypeDefinitionIndex = 65444;

	class StageHarmonySignalDynamicDialogMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonySignalDynamicDialogBehavior*>
	{
	public:
		::System::Int32 SerialID; // 0x30
		::System::String* Channle; // 0x38
		::AirShipSubwaySchedule* SubwaySchedule; // 0x40
		::System::Boolean UseSameContext; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Load(::RPG::GameCore::StageSceneItemSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::RPG::GameCore::StageSceneItemSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
