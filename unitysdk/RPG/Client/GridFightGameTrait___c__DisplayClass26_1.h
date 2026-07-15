#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS26_1__CTOR_OFFSET UNITYSDK_OFFSET(0x194F69F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS26_1__GETROLESBYTRAIT_B__1_OFFSET UNITYSDK_OFFSET(0x194F7790)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass26_1_TypeDefinitionIndex = 62492;

	class GridFightGameTrait___c__DisplayClass26_1 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS26_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS26_1__GETROLESBYTRAIT_B__1_OFFSET))(this, a1);
		}
	};
}
