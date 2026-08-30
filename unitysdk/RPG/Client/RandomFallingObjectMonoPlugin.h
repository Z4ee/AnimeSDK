#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class FallingObjectTemplate; }
namespace RPG::Client { class GeneralAudioItem; }
namespace RPG::Client { class RandomFallingObjectBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_RANDOMFALLINGOBJECTMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1B644A20)
#define RPG_CLIENT_RANDOMFALLINGOBJECTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B644A70)

namespace RPG::Client
{
	inline static constexpr unsigned int RandomFallingObjectMonoPlugin_TypeDefinitionIndex = 70906;

	class RandomFallingObjectMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::RandomFallingObjectBehavior*>
	{
	public:
		::System::Single EmissionInterval; // 0x30
		::System::Single TimeScale; // 0x34
		::System::Single PreWarm; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::FallingObjectTemplate*>* FallingObjectTemplates; // 0x40
		::System::Single SplashPlayTime; // 0x48
		::UnityEngine::GameObject* SplashEffect; // 0x50
		::System::Boolean IfPlayAudio; // 0x58
		::Il2CppArray<::RPG::Client::GeneralAudioItem*>* PlayEventNames; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
