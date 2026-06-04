#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB65420)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS71_0__REQFORMATION_B__0_OFFSET UNITYSDK_OFFSET(0xBB6A5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass71_0_TypeDefinitionIndex = 60498;

	class GridFightGameRef___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReqFormation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS71_0__REQFORMATION_B__0_OFFSET))(this);
		}
	};
}
