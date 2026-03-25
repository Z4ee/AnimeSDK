#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelSpatialIntVec2; }

#define RPG_GAMECORE_LEVELGROUPSPATIALBAKEDINFO_METHOD_2_A282188E82ADF1BC_OFFSET UNITYSDK_OFFSET(0x173381F0)
#define RPG_GAMECORE_LEVELGROUPSPATIALBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1733A3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSpatialBakedInfo_TypeDefinitionIndex = 15725;

	class LevelGroupSpatialBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int16>* CompactGridList; // 0x10
		::RPG::GameCore::LevelSpatialIntVec2* LowerUpperBounds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSPATIALBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A282188E82ADF1BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupSpatialBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupSpatialBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSPATIALBAKEDINFO_METHOD_2_A282188E82ADF1BC_OFFSET))(a1, a2);
		}
	};
}
