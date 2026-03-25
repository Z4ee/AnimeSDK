#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9837030)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS18_0__GETFILTERTRAITCOUNTBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x9838520)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter___c__DisplayClass18_0_TypeDefinitionIndex = 52573;

	class GridFightGameRefFilter___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFilterTraitCountByType_b__0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS18_0__GETFILTERTRAITCOUNTBYTYPE_B__0_OFFSET))(this, id);
		}
	};
}
