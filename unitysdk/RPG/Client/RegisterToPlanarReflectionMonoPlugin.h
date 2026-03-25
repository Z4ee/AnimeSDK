#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class RegisterToPlanarReflectionBehavior; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA299870)

namespace RPG::Client
{
	inline static constexpr unsigned int RegisterToPlanarReflectionMonoPlugin_TypeDefinitionIndex = 57911;

	class RegisterToPlanarReflectionMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::RegisterToPlanarReflectionBehavior*>
	{
	public:
		::System::Boolean IfNeedRegisterLate; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* SpecifiedRenderers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
