#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB5CF90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS15_0__GETFILTERTRAITCOUNTBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xBB5DF00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter___c__DisplayClass15_0_TypeDefinitionIndex = 60477;

	class GridFightGameFormationFilter___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFilterTraitCountByType_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS15_0__GETFILTERTRAITCOUNTBYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
