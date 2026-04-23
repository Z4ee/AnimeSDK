#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D13F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xA4D18C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0xA4D19E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefExpiredSummary___c__DisplayClass27_0_TypeDefinitionIndex = 59602;

	class GridFightGameRefExpiredSummary___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameFormation* formation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__1(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0___CTOR_B__1_OFFSET))(this, x);
		}

		::System::Boolean __ctor_b__2(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0___CTOR_B__2_OFFSET))(this, x);
		}
	};
}
