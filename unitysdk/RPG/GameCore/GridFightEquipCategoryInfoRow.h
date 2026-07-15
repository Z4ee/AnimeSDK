#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTEQUIPCATEGORYINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5C9450)
#define RPG_GAMECORE_GRIDFIGHTEQUIPCATEGORYINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C9620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipCategoryInfoRow_TypeDefinitionIndex = 12955;

	class GridFightEquipCategoryInfoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID CategoryName; // 0x10
		::System::UInt32 EquipCount; // 0x20
		::RPG::GameCore::GridFightEquipCategory EquipCategory; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPCATEGORYINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightEquipCategoryInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEquipCategoryInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPCATEGORYINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
