#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPGETITEMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0D460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEquipGetItemEvent_TypeDefinitionIndex = 65019;

	class GridFightTraitEquipGetItemEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* Config; // 0x10
		::System::UInt32 UID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPGETITEMEVENT__CTOR_OFFSET))(this);
		}
	};
}
