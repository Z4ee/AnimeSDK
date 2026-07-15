#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__DISPLAYCLASS5_0__CANCASTER_B__1_OFFSET UNITYSDK_OFFSET(0x194FB4C0)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194FB330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridCyreneEffect___c__DisplayClass5_0_TypeDefinitionIndex = 61915;

	class GridFightGridCyreneEffect___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGridData* grid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanCaster_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__DISPLAYCLASS5_0__CANCASTER_B__1_OFFSET))(this, a1);
		}
	};
}
