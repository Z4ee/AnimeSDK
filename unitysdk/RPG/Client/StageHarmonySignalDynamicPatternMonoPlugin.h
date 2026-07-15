#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_10.h"

class AirShipSubwaySchedule;
namespace RPG::Client { class StageHarmonySignalDynamicPatternBehavior; }
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0x17B50DA0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x17B51370)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0x17B50AA0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_UNLOAD_OFFSET UNITYSDK_OFFSET(0x17B50D50)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B513C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDynamicPatternMonoPlugin_TypeDefinitionIndex = 67798;

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

		::System::Void Load(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICPATTERNMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
