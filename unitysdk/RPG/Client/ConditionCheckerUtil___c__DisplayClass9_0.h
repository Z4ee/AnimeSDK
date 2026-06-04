#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionCheckerHandle; }
namespace System { class Action; }

#define RPG_CLIENT_CONDITIONCHECKERUTIL___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB708D50)
#define RPG_CLIENT_CONDITIONCHECKERUTIL___C__DISPLAYCLASS9_0__WAITCONDITIONSHASMET_B__0_OFFSET UNITYSDK_OFFSET(0xB708F90)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckerUtil___c__DisplayClass9_0_TypeDefinitionIndex = 56004;

	class ConditionCheckerUtil___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* callBack; // 0x10
		::RPG::Client::ConditionCheckerHandle* handle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _WaitConditionsHasMet_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL___C__DISPLAYCLASS9_0__WAITCONDITIONSHASMET_B__0_OFFSET))(this, a1);
		}
	};
}
