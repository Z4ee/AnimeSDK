#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A89B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS45_0__ISREFERENCED_B__0_OFFSET UNITYSDK_OFFSET(0xD1AA6D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS45_0__ISREFERENCED_B__1_OFFSET UNITYSDK_OFFSET(0xD1AA770)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS45_0__ISREFERENCED_B__2_OFFSET UNITYSDK_OFFSET(0xD1AA810)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation___c__DisplayClass45_0_TypeDefinitionIndex = 64742;

	class GridFightGameFormation___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsReferenced_b__0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS45_0__ISREFERENCED_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _IsReferenced_b__1(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS45_0__ISREFERENCED_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _IsReferenced_b__2(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS45_0__ISREFERENCED_B__2_OFFSET))(this, a1);
		}
	};
}
