#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG_METHOD_3_309723814F369B48_OFFSET UNITYSDK_OFFSET(0x1D157FB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG_METHOD_3_BBE4B0DED18181CC_OFFSET UNITYSDK_OFFSET(0x1D157F60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D157FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMazeBuffAfterDressConfig_TypeDefinitionIndex = 19185;

	class GridFightModifierAddMazeBuffAfterDressConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBE4B0DED18181CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG_METHOD_3_BBE4B0DED18181CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_309723814F369B48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMazeBuffAfterDressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFAFTERDRESSCONFIG_METHOD_3_309723814F369B48_OFFSET))(a1, a2);
		}
	};
}
