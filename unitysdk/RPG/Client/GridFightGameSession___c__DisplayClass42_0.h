#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB872F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS42_0___ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_B__0_OFFSET UNITYSDK_OFFSET(0xBB880C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass42_0_TypeDefinitionIndex = 60650;

	class GridFightGameSession___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddRoleIDChangedRoleToBattleChangeEvent_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS42_0___ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_B__0_OFFSET))(this, a1);
		}
	};
}
