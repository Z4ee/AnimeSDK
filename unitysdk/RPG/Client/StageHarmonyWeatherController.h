#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class PairValueEntry; }
namespace RPG::Client { class StageHarmonyWeatherControllerBehavior; }
namespace RPG::Client { class StateValueEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLER_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1A4EF290)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A4EF270)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A4EF280)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4EF2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyWeatherController_TypeDefinitionIndex = 70975;

	class StageHarmonyWeatherController : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonyWeatherControllerBehavior*>
	{
	public:
		static ::RPG::Client::StageHarmonyWeatherController** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::StageHarmonyWeatherController**)Il2CppClass::FromTypeDefinitionIndex(StageHarmonyWeatherController_TypeDefinitionIndex)->GetStaticField(0x30CB0);
		}
		// static const ::System::Int32 MaxStateCount = 0x8; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* StateNames; // 0x30
		::System::String* FromState; // 0x38
		::System::String* ToState; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* StateRectOrder; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::StateValueEntry*>* StateValues; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::PairValueEntry*>* PairValues; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::StageHarmonyWeatherController* get_Instance()
		{
			return ((::RPG::Client::StageHarmonyWeatherController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::StageHarmonyWeatherController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::StageHarmonyWeatherController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLER_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
