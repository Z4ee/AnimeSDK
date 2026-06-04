#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG_METHOD_3_9A77E1CB54F1A31C_OFFSET UNITYSDK_OFFSET(0x197E88D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG_METHOD_3_DBD1153E06A344F5_OFFSET UNITYSDK_OFFSET(0x197E89A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197E8950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMazeBuffConfig_TypeDefinitionIndex = 18411;

	class GridFightModifierAddMazeBuffConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A77E1CB54F1A31C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG_METHOD_3_9A77E1CB54F1A31C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DBD1153E06A344F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFCONFIG_METHOD_3_DBD1153E06A344F5_OFFSET))(a1, a2);
		}
	};
}
