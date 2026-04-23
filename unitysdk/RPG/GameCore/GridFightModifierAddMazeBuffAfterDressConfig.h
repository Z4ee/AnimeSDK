#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG_METHOD_3_1D9C54DEFFC386B1_OFFSET UNITYSDK_OFFSET(0x189B0BA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG_METHOD_3_309723814F369B48_OFFSET UNITYSDK_OFFSET(0x189B0C70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B0C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMazeBuffAfterDressConfig_TypeDefinitionIndex = 18440;

	class GridFightModifierAddMazeBuffAfterDressConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D9C54DEFFC386B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG_METHOD_3_1D9C54DEFFC386B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_309723814F369B48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG_METHOD_3_309723814F369B48_OFFSET))(a1, a2);
		}
	};
}
