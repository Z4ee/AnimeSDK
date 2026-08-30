#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3B520)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils___c__DisplayClass8_0_TypeDefinitionIndex = 65411;

	class GridFightEquipTrackUtils___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Boolean includeVariant; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}
	};
}
