#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1CEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipe___c__DisplayClass4_0_TypeDefinitionIndex = 60300;

	class GridFightEquipCraftRecipe___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}
	};
}
