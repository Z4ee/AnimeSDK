#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_85BE16C337B2BFD0;
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__COMPAREWITHCURTEAM_B__2_OFFSET UNITYSDK_OFFSET(0xA4E1D50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E02E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass40_0_TypeDefinitionIndex = 59714;

	class GridFightGameSession___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::Class_2_85BE16C337B2BFD0* modifier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CompareWithCurTeam_b__2(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__COMPAREWITHCURTEAM_B__2_OFFSET))(this, x);
		}
	};
}
