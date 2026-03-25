#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EQUIPMENTATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171A3D70)
#define RPG_GAMECORE_EQUIPMENTATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171A3E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentAtlasRow_TypeDefinitionIndex = 12091;

	class EquipmentAtlasRow : public ::System::Object
	{
	public:
		::System::Boolean DefaultUnlock; // 0x10
		::System::UInt32 EquipmentID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EquipmentAtlasRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EquipmentAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTATLASROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
