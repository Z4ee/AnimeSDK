#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_683BE54A4D4D4711;
namespace RPG::GameCore { class DebateTestimonySetting; }

#define RPG_CLIENT_DEBATEMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9448490)
#define RPG_CLIENT_DEBATEMANAGER___C__DISPLAYCLASS20_0___SETTESTIMONYGROUPS_B__0_OFFSET UNITYSDK_OFFSET(0x9448750)

namespace RPG::Client
{
	inline static constexpr unsigned int DebateManager___c__DisplayClass20_0_TypeDefinitionIndex = 49171;

	class DebateManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::DebateTestimonySetting* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SetTestimonyGroups_b__0(::Class_1_683BE54A4D4D4711* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_683BE54A4D4D4711*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER___C__DISPLAYCLASS20_0___SETTESTIMONYGROUPS_B__0_OFFSET))(this, x);
		}
	};
}
