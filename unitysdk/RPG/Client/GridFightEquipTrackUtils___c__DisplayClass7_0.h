#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9811700)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils___c__DisplayClass7_0_TypeDefinitionIndex = 53075;

	class GridFightEquipTrackUtils___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Boolean includeVariant; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}
	};
}
