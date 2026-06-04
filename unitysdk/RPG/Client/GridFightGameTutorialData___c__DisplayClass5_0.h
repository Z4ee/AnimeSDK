#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8E300)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA___C__DISPLAYCLASS5_0__ISTUTORIALFORBIDROLESELL_B__0_OFFSET UNITYSDK_OFFSET(0xBB8E7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTutorialData___c__DisplayClass5_0_TypeDefinitionIndex = 61234;

	class GridFightGameTutorialData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::System::UInt32 maxStar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsTutorialForbidRoleSell_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA___C__DISPLAYCLASS5_0__ISTUTORIALFORBIDROLESELL_B__0_OFFSET))(this, a1);
		}
	};
}
