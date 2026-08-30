#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_METHOD_3_85DE1BD852656DF1_OFFSET UNITYSDK_OFFSET(0x1D167910)
#define RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_METHOD_3_EF721DC8130DADB4_OFFSET UNITYSDK_OFFSET(0x1D167840)
#define RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D167900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowMonsterCutIn_TypeDefinitionIndex = 22971;

	class GridFightShowMonsterCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF721DC8130DADB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowMonsterCutIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowMonsterCutIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_METHOD_3_EF721DC8130DADB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85DE1BD852656DF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowMonsterCutIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowMonsterCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_METHOD_3_85DE1BD852656DF1_OFFSET))(a1, a2);
		}
	};
}
