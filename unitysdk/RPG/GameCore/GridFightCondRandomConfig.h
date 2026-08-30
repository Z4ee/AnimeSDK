#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_METHOD_6_06FBAB328866C203_OFFSET UNITYSDK_OFFSET(0x1D14D520)
#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_METHOD_6_D292240FE3682587_OFFSET UNITYSDK_OFFSET(0x1D14D570)
#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14D560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondRandomConfig_TypeDefinitionIndex = 19098;

	class GridFightCondRandomConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_06FBAB328866C203(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_METHOD_6_06FBAB328866C203_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D292240FE3682587(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_METHOD_6_D292240FE3682587_OFFSET))(a1, a2);
		}
	};
}
