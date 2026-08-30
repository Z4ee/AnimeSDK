#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class IrregularFakeWindowControllerBehavior; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xD421230)

namespace RPG::Client
{
	inline static constexpr unsigned int IrregularFakeWindowControllerMonoPlugin_TypeDefinitionIndex = 70824;

	class IrregularFakeWindowControllerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::IrregularFakeWindowControllerBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::UnityEngine::Renderer* targetRenderer; // 0x38
		::System::Boolean applyOnEnable; // 0x40
		::System::Boolean verboseLog; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
