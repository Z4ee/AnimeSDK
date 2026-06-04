#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IGridFightTraitEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAIT___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC1E9D0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__DISPLAYCLASS9_0__GETEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBC21BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___c__DisplayClass9_0_TypeDefinitionIndex = 61170;

	class GridFightTrait___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEffect_b__0(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__DISPLAYCLASS9_0__GETEFFECT_B__0_OFFSET))(this, a1);
		}
	};
}
