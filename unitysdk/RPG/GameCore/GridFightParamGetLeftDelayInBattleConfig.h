#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_6_3103F7B8FD667610_OFFSET UNITYSDK_OFFSET(0x1D15D580)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_6_E1B3BBDCF2F01E8C_OFFSET UNITYSDK_OFFSET(0x1D15D5D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLeftDelayInBattleConfig_TypeDefinitionIndex = 19302;

	class GridFightParamGetLeftDelayInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3103F7B8FD667610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_6_3103F7B8FD667610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E1B3BBDCF2F01E8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_6_E1B3BBDCF2F01E8C_OFFSET))(a1, a2);
		}
	};
}
