#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_6_537F70CEC5857840_OFFSET UNITYSDK_OFFSET(0x1D14D5D0)
#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_6_89648134C203C984_OFFSET UNITYSDK_OFFSET(0x1D14D580)
#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14D5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondTrueConfig_TypeDefinitionIndex = 19096;

	class GridFightCondTrueConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_89648134C203C984(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_6_89648134C203C984_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_537F70CEC5857840(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_6_537F70CEC5857840_OFFSET))(a1, a2);
		}
	};
}
