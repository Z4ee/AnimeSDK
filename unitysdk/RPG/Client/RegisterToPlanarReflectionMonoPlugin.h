#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class RegisterToPlanarReflectionBehavior; }
namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1986B050)

namespace RPG::Client
{
	inline static constexpr unsigned int RegisterToPlanarReflectionMonoPlugin_TypeDefinitionIndex = 67550;

	class RegisterToPlanarReflectionMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::RegisterToPlanarReflectionBehavior*>
	{
	public:
		::System::String* NameKey; // 0x30
		::System::Boolean IfNeedRegisterLate; // 0x38
		::Il2CppArray<::UnityEngine::Renderer*>* SpecifiedRenderers; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
