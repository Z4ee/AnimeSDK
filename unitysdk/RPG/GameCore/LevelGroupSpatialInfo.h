#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPSPATIALINFO_METHOD_2_B7CE00FCB99BC24F_OFFSET UNITYSDK_OFFSET(0x1B070F50)
#define RPG_GAMECORE_LEVELGROUPSPATIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B070F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSpatialInfo_TypeDefinitionIndex = 16519;

	class LevelGroupSpatialInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSPATIALINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B7CE00FCB99BC24F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupSpatialInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupSpatialInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSPATIALINFO_METHOD_2_B7CE00FCB99BC24F_OFFSET))(a1, a2);
		}
	};
}
