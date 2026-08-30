#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C974260)
#define RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT___C__DISPLAYCLASS42_0__GETROLESBYTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0x1C974300)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEmptyDataContext___c__DisplayClass42_0_TypeDefinitionIndex = 64591;

	class GridFightEmptyDataContext___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEMPTYDATACONTEXT___C__DISPLAYCLASS42_0__GETROLESBYTRAIT_B__0_OFFSET))(this, a1);
		}
	};
}
