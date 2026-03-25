#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_STORYLINEUTILS_SHOWSWITCHLINEDIALOGONDEMAND_OFFSET UNITYSDK_OFFSET(0xA4EED60)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineUtils_TypeDefinitionIndex = 55491;

	class StoryLineUtils : public ::System::Object
	{
	public:
		static ::System::Void ShowSwitchLineDialogOnDemand(::System::Action* callback, ::System::UInt32 storyLineID)
		{
			return ((::System::Void(*)(::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEUTILS_SHOWSWITCHLINEDIALOGONDEMAND_OFFSET))(callback, storyLineID);
		}
	};
}
