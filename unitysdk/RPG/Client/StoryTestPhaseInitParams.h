#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_STORYTESTPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xE146410)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryTestPhaseInitParams_TypeDefinitionIndex = 61207;

	class StoryTestPhaseInitParams : public ::System::Object
	{
	public:
		::System::String* StoryConfigPath; // 0x10
		::System::String* SceneName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTESTPHASEINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
