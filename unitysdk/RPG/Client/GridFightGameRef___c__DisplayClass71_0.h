#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE5610)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS71_0__REQFORMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1ABEAAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass71_0_TypeDefinitionIndex = 61789;

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
