#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97D5C80)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS24_0__GETMEMBERSBYTRAITID_B__0_OFFSET UNITYSDK_OFFSET(0x97D8830)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass24_0_TypeDefinitionIndex = 52302;

	class GridFightBattleGameContext___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMembersByTraitID_b__0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS24_0__GETMEMBERSBYTRAITID_B__0_OFFSET))(this, x);
		}
	};
}
