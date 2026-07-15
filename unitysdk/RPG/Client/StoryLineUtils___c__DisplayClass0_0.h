#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_STORYLINEUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C45240)
#define RPG_CLIENT_STORYLINEUTILS___C__DISPLAYCLASS0_0__SHOWSWITCHLINEDIALOGONDEMAND_B__0_OFFSET UNITYSDK_OFFSET(0x19C45250)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineUtils___c__DisplayClass0_0_TypeDefinitionIndex = 64986;

	class StoryLineUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSwitchLineDialogOnDemand_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEUTILS___C__DISPLAYCLASS0_0__SHOWSWITCHLINEDIALOGONDEMAND_B__0_OFFSET))(this, a1);
		}
	};
}
