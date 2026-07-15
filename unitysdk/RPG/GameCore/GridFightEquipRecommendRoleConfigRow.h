#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTEQUIPRECOMMENDROLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5C9BD0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPRECOMMENDROLECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C9D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipRecommendRoleConfigRow_TypeDefinitionIndex = 12967;

	class GridFightEquipRecommendRoleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendRoleIDList; // 0x10
		::System::UInt32 EquipID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPRECOMMENDROLECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPRECOMMENDROLECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
