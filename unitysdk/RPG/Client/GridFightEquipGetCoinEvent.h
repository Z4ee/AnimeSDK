#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightEquipEffectType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPGETCOINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1ED30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipGetCoinEvent_TypeDefinitionIndex = 60845;

	class GridFightEquipGetCoinEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipEffectType EffectType; // 0x10
		::System::Int32 AddCoin; // 0x14
		::System::UInt32 EquipUID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPGETCOINEVENT__CTOR_OFFSET))(this);
		}
	};
}
