#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_6_664BB540578C07D7_OFFSET UNITYSDK_OFFSET(0x197DC4D0)
#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_6_AEBA1E32B940FF3B_OFFSET UNITYSDK_OFFSET(0x197DC690)
#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197DC5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondFalseConfig_TypeDefinitionIndex = 18332;

	class GridFightCondFalseConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_664BB540578C07D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_6_664BB540578C07D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AEBA1E32B940FF3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_6_AEBA1E32B940FF3B_OFFSET))(a1, a2);
		}
	};
}
