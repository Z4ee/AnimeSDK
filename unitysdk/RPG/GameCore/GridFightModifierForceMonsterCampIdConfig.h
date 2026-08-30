#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_METHOD_3_1FC90A4630A2A981_OFFSET UNITYSDK_OFFSET(0x1EE6DDD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_METHOD_3_6AA18190319326E5_OFFSET UNITYSDK_OFFSET(0x1EE6DE20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6DE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceMonsterCampIdConfig_TypeDefinitionIndex = 19149;

	class GridFightModifierForceMonsterCampIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1FC90A4630A2A981(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceMonsterCampIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceMonsterCampIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_METHOD_3_1FC90A4630A2A981_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6AA18190319326E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierForceMonsterCampIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierForceMonsterCampIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEMONSTERCAMPIDCONFIG_METHOD_3_6AA18190319326E5_OFFSET))(a1, a2);
		}
	};
}
