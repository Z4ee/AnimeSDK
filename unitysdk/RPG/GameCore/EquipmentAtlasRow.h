#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EQUIPMENTATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D06D2A0)
#define RPG_GAMECORE_EQUIPMENTATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06D3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentAtlasRow_TypeDefinitionIndex = 13140;

	class EquipmentAtlasRow : public ::System::Object
	{
	public:
		::System::UInt32 EquipmentID; // 0x10
		::System::Boolean DefaultUnlock; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EquipmentAtlasRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EquipmentAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
