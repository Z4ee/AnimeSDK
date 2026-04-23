#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189AA2F0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189AA470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipTagConfigRow_TypeDefinitionIndex = 12739;

	class GridFightEquipTagConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EquipTagDesc; // 0x10
		::System::UInt32 TagID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightEquipTagConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEquipTagConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
