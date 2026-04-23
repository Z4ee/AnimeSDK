#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_METHOD_6_4981118B45AB4649_OFFSET UNITYSDK_OFFSET(0x1899FC20)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_METHOD_6_58DD01F79F47BF02_OFFSET UNITYSDK_OFFSET(0x189A0740)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1899FB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetBenchPosCntConfig_TypeDefinitionIndex = 18346;

	class GridFightActionSetBenchPosCntConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_58DD01F79F47BF02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_METHOD_6_58DD01F79F47BF02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4981118B45AB4649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_METHOD_6_4981118B45AB4649_OFFSET))(a1, a2);
		}
	};
}
