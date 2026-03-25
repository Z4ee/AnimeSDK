#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97D62A0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS34_0__GETONBOARDROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0x97D89A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass34_0_TypeDefinitionIndex = 52306;

	class GridFightBattleGameContext___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOnBoardRoleByID_b__0(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS34_0__GETONBOARDROLEBYID_B__0_OFFSET))(this, role);
		}
	};
}
