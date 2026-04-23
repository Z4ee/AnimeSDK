#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_6_537F70CEC5857840_OFFSET UNITYSDK_OFFSET(0x189A5080)
#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_6_D6BFD2CEB5114344_OFFSET UNITYSDK_OFFSET(0x189A4EC0)
#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189A4FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondTrueConfig_TypeDefinitionIndex = 18359;

	class GridFightCondTrueConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D6BFD2CEB5114344(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_6_D6BFD2CEB5114344_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_537F70CEC5857840(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_6_537F70CEC5857840_OFFSET))(a1, a2);
		}
	};
}
