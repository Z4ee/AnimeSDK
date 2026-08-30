#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D151E60)
#define RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D151FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipTagConfigRow_TypeDefinitionIndex = 13356;

	class GridFightEquipTagConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 TagID; // 0x10
		::RPG::Client::TextID EquipTagDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightEquipTagConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEquipTagConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
