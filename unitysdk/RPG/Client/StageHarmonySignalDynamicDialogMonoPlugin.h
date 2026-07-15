#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_10.h"

class AirShipSubwaySchedule;
namespace RPG::Client { class StageHarmonySignalDynamicDialogBehavior; }
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0x17B50080)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x17B50240)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0x17B4FD80)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_UNLOAD_OFFSET UNITYSDK_OFFSET(0x17B50030)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B50290)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDynamicDialogMonoPlugin_TypeDefinitionIndex = 67796;

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

		::System::Void Load(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
