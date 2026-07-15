#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_6_0A4BE02C6DF4BA57_OFFSET UNITYSDK_OFFSET(0x1C5C5200)
#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_6_AEBA1E32B940FF3B_OFFSET UNITYSDK_OFFSET(0x1C5C5250)
#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C5240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondFalseConfig_TypeDefinitionIndex = 18572;

	class GridFightCondFalseConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0A4BE02C6DF4BA57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_6_0A4BE02C6DF4BA57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AEBA1E32B940FF3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_6_AEBA1E32B940FF3B_OFFSET))(a1, a2);
		}
	};
}
