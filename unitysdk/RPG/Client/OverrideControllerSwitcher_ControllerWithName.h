#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_CONTROLLERWITHNAME__CTOR_OFFSET UNITYSDK_OFFSET(0xAC103C0)

namespace RPG::Client
{
	inline static constexpr unsigned int OverrideControllerSwitcher_ControllerWithName_TypeDefinitionIndex = 63299;

	class OverrideControllerSwitcher_ControllerWithName : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::RuntimeAnimatorController* OverrideController; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_CONTROLLERWITHNAME__CTOR_OFFSET))(this);
		}
	};
}
