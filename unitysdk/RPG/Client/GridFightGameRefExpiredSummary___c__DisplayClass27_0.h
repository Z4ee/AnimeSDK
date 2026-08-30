#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D26B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xD1D2A40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0xD1D2AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefExpiredSummary___c__DisplayClass27_0_TypeDefinitionIndex = 64813;

	class GridFightGameRefExpiredSummary___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameFormation* formation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__1(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0___CTOR_B__1_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__2(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS27_0___CTOR_B__2_OFFSET))(this, a1);
		}
	};
}
