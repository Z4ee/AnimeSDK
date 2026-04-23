#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D0CC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS26_0___CTOR_B__5_OFFSET UNITYSDK_OFFSET(0xA4D16A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS26_0___CTOR_B__6_OFFSET UNITYSDK_OFFSET(0xA4D17B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefExpiredSummary___c__DisplayClass26_0_TypeDefinitionIndex = 59601;

	class GridFightGameRefExpiredSummary___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRefData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__5(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS26_0___CTOR_B__5_OFFSET))(this, x);
		}

		::System::Boolean __ctor_b__6(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY___C__DISPLAYCLASS26_0___CTOR_B__6_OFFSET))(this, x);
		}
	};
}
