#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_10.h"

class AirShipSubwaySchedule;
namespace RPG::Client { class StageHarmonySignalDynamicDialogBehavior; }
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xC9130A0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xC913290)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xC912D90)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xC9132E0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xC9132F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDynamicDialogMonoPlugin_TypeDefinitionIndex = 66371;

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

		::System::Void Dump(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_DUMP_OFFSET))(this, a1);
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
