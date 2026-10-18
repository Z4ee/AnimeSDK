#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightEquipEffectType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPGETCOINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD10AEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipGetCoinEvent_TypeDefinitionIndex = 65069;

	class GridFightEquipGetCoinEvent : public ::System::Object
	{
	public:
		::System::Int32 AddCoin; // 0x10
		::System::UInt32 EquipUID; // 0x14
		::RPG::Client::GridFightEquipEffectType EffectType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPGETCOINEVENT__CTOR_OFFSET))(this);
		}
	};
}
