#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9A1651C3C4D0B91C;
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__COMPAREWITHCURTEAM_B__2_OFFSET UNITYSDK_OFFSET(0xBB88090)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB86360)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass40_0_TypeDefinitionIndex = 60649;

	class GridFightGameSession___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::Class_2_9A1651C3C4D0B91C* modifier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CompareWithCurTeam_b__2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__COMPAREWITHCURTEAM_B__2_OFFSET))(this, a1);
		}
	};
}
