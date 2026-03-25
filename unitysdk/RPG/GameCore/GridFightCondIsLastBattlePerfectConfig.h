#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_6_38B65B0B04145377_OFFSET UNITYSDK_OFFSET(0x17255310)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_6_78334D2DA5EFBF1B_OFFSET UNITYSDK_OFFSET(0x17255150)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17255250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsLastBattlePerfectConfig_TypeDefinitionIndex = 17750;

	class GridFightCondIsLastBattlePerfectConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_78334D2DA5EFBF1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_6_78334D2DA5EFBF1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_38B65B0B04145377(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_6_38B65B0B04145377_OFFSET))(a1, a2);
		}
	};
}
