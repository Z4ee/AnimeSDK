#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyDeskTalkRow; }

#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC7408D0)
#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS115_0__SETTALKROWPRIORITY_B__0_OFFSET UNITYSDK_OFFSET(0xC756460)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule___c__DisplayClass115_0_TypeDefinitionIndex = 62331;

	class AlleyModule___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::System::UInt32 talkID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetTalkRowPriority_b__0(::RPG::GameCore::AlleyDeskTalkRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AlleyDeskTalkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS115_0__SETTALKROWPRIORITY_B__0_OFFSET))(this, a1);
		}
	};
}
