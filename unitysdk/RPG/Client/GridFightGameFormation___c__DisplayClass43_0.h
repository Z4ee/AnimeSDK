#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4EC80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS43_0__ISREFERENCED_B__0_OFFSET UNITYSDK_OFFSET(0xBB50880)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS43_0__ISREFERENCED_B__1_OFFSET UNITYSDK_OFFSET(0xBB50B20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS43_0__ISREFERENCED_B__2_OFFSET UNITYSDK_OFFSET(0xBB50B90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation___c__DisplayClass43_0_TypeDefinitionIndex = 60467;

	class GridFightGameFormation___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsReferenced_b__0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS43_0__ISREFERENCED_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _IsReferenced_b__1(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS43_0__ISREFERENCED_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _IsReferenced_b__2(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS43_0__ISREFERENCED_B__2_OFFSET))(this, a1);
		}
	};
}
