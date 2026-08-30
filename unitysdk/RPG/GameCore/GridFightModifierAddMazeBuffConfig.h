#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG_METHOD_3_9E403E650E32A9D1_OFFSET UNITYSDK_OFFSET(0x1EE6C390)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG_METHOD_3_DBD1153E06A344F5_OFFSET UNITYSDK_OFFSET(0x1EE6C3E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6C3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMazeBuffConfig_TypeDefinitionIndex = 19184;

	class GridFightModifierAddMazeBuffConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E403E650E32A9D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG_METHOD_3_9E403E650E32A9D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DBD1153E06A344F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG_METHOD_3_DBD1153E06A344F5_OFFSET))(a1, a2);
		}
	};
}
