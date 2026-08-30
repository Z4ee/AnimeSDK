#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipInteractionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPINTERACTIONNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1DBC80)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirEquipInteractionNotifyData_TypeDefinitionIndex = 76816;

	class PixAirEquipInteractionNotifyData : public ::System::Object
	{
	public:
		::System::Int32 FromEquipID; // 0x10
		::System::Int32 ToEquipRuntimeUniqueID; // 0x14
		::System::Int32 ToEquipID; // 0x18
		::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType InteractionType; // 0x1C
		::System::Int32 FromEquipRuntimeUniqueID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPINTERACTIONNOTIFYDATA__CTOR_OFFSET))(this);
		}
	};
}
