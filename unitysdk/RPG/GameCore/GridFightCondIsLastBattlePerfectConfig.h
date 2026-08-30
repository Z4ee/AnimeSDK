#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_6_38B65B0B04145377_OFFSET UNITYSDK_OFFSET(0x1D963060)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_6_B9CE49B1674DF133_OFFSET UNITYSDK_OFFSET(0x1D963010)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D963050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsLastBattlePerfectConfig_TypeDefinitionIndex = 19100;

	class GridFightCondIsLastBattlePerfectConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B9CE49B1674DF133(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_6_B9CE49B1674DF133_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_38B65B0B04145377(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_6_38B65B0B04145377_OFFSET))(a1, a2);
		}
	};
}
