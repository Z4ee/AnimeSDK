#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyDeskTalkRow; }

#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS117_0__CTOR_OFFSET UNITYSDK_OFFSET(0x90A4B80)
#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS117_0__TRIGGERRANDOMTALK_B__0_OFFSET UNITYSDK_OFFSET(0x90B8F50)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule___c__DisplayClass117_0_TypeDefinitionIndex = 50556;

	class AlleyModule___c__DisplayClass117_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS117_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TriggerRandomTalk_b__0(::RPG::GameCore::AlleyDeskTalkRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AlleyDeskTalkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS117_0__TRIGGERRANDOMTALK_B__0_OFFSET))(this, row);
		}
	};
}
