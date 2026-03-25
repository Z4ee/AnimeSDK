#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLERECOMMENDEQUIPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1727F720)
#define RPG_GAMECORE_GRIDFIGHTROLERECOMMENDEQUIPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1727F8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleRecommendEquipConfigRow_TypeDefinitionIndex = 12363;

	class GridFightRoleRecommendEquipConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FirstRecommendEquipList; // 0x10
		::Il2CppArray<::System::UInt32>* SecondRecommendEquipList; // 0x18
		::RPG::GameCore::GridFightPreset FrontBackType; // 0x20
		::System::UInt32 RoleID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLERECOMMENDEQUIPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLERECOMMENDEQUIPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
