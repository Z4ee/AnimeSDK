#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_STORYLINEUTILS_SHOWSWITCHLINEDIALOGONDEMAND_OFFSET UNITYSDK_OFFSET(0xE105490)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineUtils_TypeDefinitionIndex = 67992;

	class StoryLineUtils : public ::System::Object
	{
	public:
		static ::System::Void ShowSwitchLineDialogOnDemand(::System::Action* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEUTILS_SHOWSWITCHLINEDIALOGONDEMAND_OFFSET))(a1, a2);
		}
	};
}
