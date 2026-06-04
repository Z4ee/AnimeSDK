#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionCheckerHandle; }
namespace System { class Action; }

#define RPG_CLIENT_CONDITIONCHECKERUTIL___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB708EC0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL___C__DISPLAYCLASS11_0__WAITCONDITIONSNOTMET_B__0_OFFSET UNITYSDK_OFFSET(0xB708F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckerUtil___c__DisplayClass11_0_TypeDefinitionIndex = 56003;

	class ConditionCheckerUtil___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action* callBack; // 0x10
		::RPG::Client::ConditionCheckerHandle* handle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _WaitConditionsNotMet_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL___C__DISPLAYCLASS11_0__WAITCONDITIONSNOTMET_B__0_OFFSET))(this, a1);
		}
	};
}
